/* dad.c - "directory assistance"
	   lightweight interface to the Directory Service */

#ifndef	lint
static char *rcsid = "$Header: /xtel/isode/isode/others/quipu/uips/fred/RCS/dad.c,v 9.0 1992/06/16 12:44:30 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/others/quipu/uips/fred/RCS/dad.c,v 9.0 1992/06/16 12:44:30 isode Rel $
 *
 *
 * $Log: dad.c,v $
 * Revision 9.0  1992/06/16  12:44:30  isode
 * Release 8.0
 *
 */

/*
 *				  NOTICE
 *
 *    Acquisition, use, and distribution of this module and related
 *    materials are subject to the restrictions of a license agreement.
 *    Consult the Preface in the User's Manual for the full terms of
 *    this agreement.
 *
 */


#include <errno.h>
#include <stdio.h>
#include <signal.h>
#include <varargs.h>
#include <pwd.h>

#include "config.h"
#include "general.h"
#include "sys.file.h"
#ifdef	BSD42
#include <sys/wait.h>
#endif


#include "internet.h"
#include "tailor.h"

/*    DATA */

static	int	debug = 0;
static	int	nbits = FD_SETSIZE;

static	int	uid = 1;
static	int	gid = 1;

static	int	dishpid = NOTOK;
static	struct sockaddr_in dishsock;

static	int	doomsday = 0;

static LLog _pgm_log = {
	"dad.log", NULLCP, NULLCP, LLOG_FATAL | LLOG_EXCEPTIONS | LLOG_NOTICE,
	LLOG_FATAL, -1, LLOGCLS | LLOGCRT | LLOGZER, NOTOK
};
LLog   *pgm_log = &_pgm_log;

static	char   *myname = "dad";

static	struct sockaddr_in lo_socket;


void	arginit (), envinit ();

void	advise (), adios ();

static	dadser ();
#ifndef	lint
static int  da_response ();
static int  _da_response ();
#endif
static int  start_dish ();
static	rcfile ();
static int  rcpipe ();

#ifdef	SYS5
struct passwd  *getpwnam ();
#endif

/*    MAIN */

/* ARGSUSED */

int
main (int argc, char **argv, char **envp) {
	int	    nfds,
			fd,
			sd;
	fd_set  sfds;
	struct sockaddr_in in_socket;
	struct sockaddr_in *isock = &in_socket;

	arginit (argv);
	envinit ();

	if ((sd = start_tcp_server (&lo_socket, SOMAXCONN,
								debug ? SO_DEBUG : 0, 0)) == NOTOK)
		adios ("failed", "start_tcp_server");
#ifdef	FIOCLEX
	ioctl (sd, FIOCLEX, NULLCP);
#endif

	setgid (gid);
	setuid (uid);

	nfds = sd + 1;

	FD_ZERO (&sfds);
	FD_SET (sd, &sfds);

	for (;;) {
		fd_set	ifds;

		if (dishpid == NOTOK || kill (dishpid, 0) == NOTOK)
			start_dish (1);

		ifds = sfds;	/* struct copy */
		switch (xselect (nfds, &ifds, NULLFD, NULLFD, 5 * 60)) {
		case OK:
			continue;

		case NOTOK:
#ifdef	BSD42
			if (errno == EINTR)
				continue;
#endif
			adios ("failed", "xselect");

		default:
			if (!FD_ISSET (sd, &ifds))
				continue;
			break;
		}

		if ((fd = join_tcp_client (sd, isock)) == NOTOK) {
			advise (LLOG_EXCEPTIONS, "failed", "join_tcp_client");
			continue;
		}
		advise (LLOG_NOTICE, NULLCP, "incoming connection from %s/%d",
				inet_ntoa (isock -> sin_addr), ntohs (isock -> sin_port));

		if (debug)
			break;

		switch (fork ()) {
		case NOTOK:
			advise (LLOG_EXCEPTIONS, "failed", "fork");
			close_tcp_socket (fd);
			continue;

		case OK:	/* child continues listening for new connections */
			close_tcp_socket (fd);
			isodexport (NULLCP);
			ll_hdinit (pgm_log, myname);
			dishpid = NOTOK;
			continue;

		default:	/* parent handles request 'cause dish knows its pid */
#ifdef	BSD42
			signal (SIGCHLD, SIG_DFL);
#else
			signal (SIGCLD, SIG_DFL);
#endif
			break;
		}
		break;
	}

	close_tcp_socket (sd);
	dadser (fd, isock);
	advise (LLOG_NOTICE, NULLCP, "terminating");
	close_tcp_socket (fd);

	_exit (0);
	return 0;
}

/*  */

/* ARGSUSED */

#ifdef	BSD42
static SFD  dishser (sig, code, sc)
int	sig;
long	code;
struct sigcontext *sc;
#else
static SFD  dishser (i)
int	i;
#endif
{
	int	    pid;
#ifdef SVR4
	int	status;
#else
	union wait status;
#endif

#ifndef BSD42
	signal (SIGCLD, dishser);
#endif

#ifdef SVR4
	while ((pid = wait (&status)) != NOTOK
#else
	while ((pid = wait (&status.w_status)) != NOTOK
#endif
			&& dishpid != pid)
		continue;

	if (pid == dishpid) {
		advise (LLOG_NOTICE, NULLCP, "dish has terminated");
		doomsday++;
	}
}

/*  */

/* ARGSUSED */

static
dadser (int fd, struct sockaddr_in *isock) {
	int	    i,
			nfds;
	char   buffer[BUFSIZ],
		   *vec[NVEC + NSLACK + 1];
	fd_set  sfds;

	if ((dishpid == NOTOK || kill (dishpid, 0) == NOTOK)
			&& start_dish (0) == NOTOK) {
		da_response (fd, "-ERR unable to start service");
		sleep (5);
		return;
	}

	da_response (fd, "+OK %s", getenv ("DISHPROC"));
#ifdef	BSD42
	signal (SIGCHLD, dishser);
#else
	signal (SIGCLD, dishser);
#endif

	nfds = fd + 1;

	FD_ZERO (&sfds);
	FD_SET (fd, &sfds);

	for (;;) {
		int	eof,
			n;
		char   *cp,
			   *ep;
		fd_set	ifds;

		ifds = sfds;	/* struct copy */
		switch (xselect (nfds, &ifds, NULLFD, NULLFD,
						 doomsday ? 5 * 60 : NOTOK)) {
		case OK:
			if (doomsday) {
				da_response (fd, "-ERR time-out due to inactivity");
				return;
			}
			continue;

		case NOTOK:
			if (errno == EINTR && doomsday)
				continue;
			adios ("failed", "xselect");

		default:
			if (!FD_ISSET (fd, &ifds))
				continue;
			break;
		}

		eof = 0;
		for (ep = (cp = buffer) + sizeof buffer - 1; cp < ep;) {
			switch (read_tcp_socket (fd, cp, sizeof *cp)) {
			case NOTOK:
				advise (LLOG_EXCEPTIONS, "failed",
						"read_tcp_socket on control connection");
				goto were_history;

			case OK:
				advise (LLOG_NOTICE, NULLCP,
						"client closed control connection");
				eof = 1;
				break;

			default:
				switch (*cp & 0xff) {
				case '\n':
					cp++;
					break;

				case 255:	/* IAC */
					if (read_tcp_socket (fd, cp, sizeof *cp) != 1)
						adios ("control connection",
							   "eof or error reading");
					continue;

				default:
					cp++;
					continue;
				}
				break;
			}
			break;
		}
		*cp = NULL;

		if (eof && (cp == buffer))
			break;

		if (cp > buffer)
			cp--;
		if (*cp == '\n') {
			*cp = NULL;
			if (cp > buffer)
				cp--;
		}
		if (*cp == '\r')
			*cp = NULL;

		if (debug)
			fprintf (stderr, "---> %s\n", buffer);

		if ((n = str2vec (buffer, vec)) < 1)
			cp = "-ERR null command";
		else if (lexequ (vec[0], "intr") == 0 && n == 1)
			kill (dishpid, SIGINT), cp = "+OK interrupted";
		else if (lexequ (vec[0], "quit") == 0 && n == 1)
			eof = 1, cp = "+OK";
		else if (lexequ (vec[0], "stat") == 0 && n == 1)
			cp = kill (dishpid, 0) != NOTOK ? "+OK" : "-ERR";
		else
			cp = "-ERR command not understood";

		da_response (fd, cp);

		if (eof)
			break;
	}
#ifdef	BSD42
	signal (SIGCHLD, SIG_DFL);
#else
	signal (SIGCLD, SIG_DFL);
#endif
	advise (LLOG_NOTICE, NULLCP, "terminating dish");
	kill (dishpid, SIGHUP);

	for (i = 5; i-- > 0; sleep (1))
		if (kill (dishpid, 0) == NOTOK)
			break;

were_history:
	;
	kill (dishpid, SIGKILL);
}

/*  */

#ifndef	lint
static int  da_response (va_alist)
va_dcl {
	int	    val;
	va_list ap;

	va_start (ap);

	val = _da_response (ap);

	va_end (ap);

	return val;
}

static int
_da_response (va_list ap) {
	int	    cc,
			fd,
			len;
	char    buffer[BUFSIZ];

	fd = va_arg (ap, int);

	_asprintf (buffer, NULLCP, ap);
	if (debug)
		fprintf (stderr, "<--- %s\n", buffer);

	strcat (buffer, "\r\n");
	len = strlen (buffer);

	if (write_tcp_socket (fd, buffer, len) != len)
		adios ("failed", "write_tcp_socket to control connection");
}
#else
/* VARARGS1 */

static
da_response (int fd, char *fmt) {
	da_response (fd, fmt);
}
#endif

/*  */

static int
start_dish (int binding) {
	int	    ntries,
			vecp;
	char    buffer[BUFSIZ],
			*vec[5];

	if (dishpid != NOTOK) {
		kill (dishpid, SIGKILL);
		dishpid = NOTOK;
	}

	unsetenv ("DISHPROC");
	unsetenv ("DISHPARENT");
	unsetenv ("DISPLAY");
	unsetenv ("TERM");
	unsetenv ("TERMCAP");

	if (get_dish_sock (&dishsock, getpid (), 0) == NOTOK) {
		advise (LLOG_EXCEPTIONS, NULLCP, "get_dish_sock failed");
		return NOTOK;
	}

	strcpy (buffer, _isodefile (isodebinpath, "dish"));

fork_again:
	;
	advise (LLOG_NOTICE, NULLCP, "starting %s on %s", buffer,
			getenv ("DISHPROC"));

	switch (dishpid = vfork ()) {
	case NOTOK:
		advise (LLOG_EXCEPTIONS, "fork", "unable to");
		return NOTOK;

	case OK:
		vecp = 0;
		vec[vecp++] = "dish";
		vec[vecp++] = "-pipe";
		vec[vecp++] = "-dad";
		vec[vecp++] = "-fast";
		vec[vecp] = NULL;
		execv (buffer, vec);

		advise (LLOG_FATAL, buffer, "unable to exec");
		_exit (1);
	/* NOTREACHED */

	default:
		for (ntries = 5; ntries-- > 0;) {
			int	n,
				sd;

			if ((sd = start_tcp_client ((struct sockaddr_in *) 0, 0))
					== NOTOK)
				break;
			n = join_tcp_server (sd, &dishsock);
			close_tcp_socket (sd);

			if (n != NOTOK)
				break;

			sleep (5);

			if (kill (dishpid, 0) == NOTOK) {
				advise (LLOG_EXCEPTIONS, NULLCP, "dish not started");
				goto fork_again;
			}
		}
		if (ntries <= 0) {
			advise (LLOG_EXCEPTIONS, NULLCP, "unable to start service");
			kill (dishpid, SIGKILL);
			dishpid = NOTOK;
		}
		if (dishpid != NOTOK && binding)
			rcfile ();
		break;
	}

	return (dishpid != NOTOK ? OK : NOTOK);
}

/*  */

static
rcfile  {
	char   *bp;
	char    buffer[BUFSIZ],
	command[BUFSIZ],
	*vec[NVEC + 1];
	FILE   *fp;

	if ((fp = fopen (isodefile ("fredrc", 0), "r")) == NULL)
		return;

	while (fgets (buffer, sizeof buffer, fp)) {
		if (*buffer == '#')
			continue;
		if (bp = index (buffer, '\n'))
			*bp = NULL;

		bzero ((char *) vec, sizeof vec);
		switch (str2vec (buffer, vec)) {
		case 0:
		case 1:
			continue;

		default:
			if (lexequ (vec[0], "area") == 0)
				break;
			continue;
		}

		sprintf (command, "moveto \"%s\"\n", vec[2] ? vec[2] : vec[1]);

		if (rcpipe (command) == NOTOK) {
failed:
			;
			advise (LLOG_EXCEPTIONS, NULLCP, "pre-caching failed!");
			kill (dishpid, SIGKILL);
			dishpid = NOTOK;
			break;
		}
	}
	fclose (fp);

	if (rcpipe ("unbind -noquit\n") == NOTOK)
		goto failed;
}

/*  */

static int
rcpipe (char *command) {
	int	    cc,
			len,
			result,
			sd;
	char    buffer[BUFSIZ];

	if (debug) {
		fprintf (stderr, "%s", command);
		fflush (stderr);
	}
	if ((sd = start_tcp_client ((struct sockaddr_in *) 0, 0)) == NOTOK)
		return OK;
	result = NOTOK;
	if (join_tcp_server (sd, &dishsock) == NOTOK) {
		advise (LLOG_EXCEPTIONS, "failed", "join to dish");
		goto done;
	}

	cc = send (sd, command, len = strlen (command), 0);
	if (cc != len) {
		if (cc == NOTOK)
			advise (LLOG_EXCEPTIONS, "failed", "write to dish");
		else
			advise (LLOG_EXCEPTIONS, NULLCP, "write to dish truncated");
		goto done;
	}

	for (;;) {
		if ((cc = recv (sd, buffer, sizeof buffer - 1, 0)) == NOTOK) {
			advise (LLOG_EXCEPTIONS, "failed", "read from dish");
			goto done;
		}
		if (cc == 0)
			break;
		if (debug) {
			buffer[cc] = NULL;
			fprintf (stderr, "%*.*s", cc, cc, buffer);
		}
	}
	if (debug) {
		fprintf (stderr, "///////\n");
		fflush (stderr);
	}
	result = OK;

done:
	;
	close_tcp_socket (sd);

	return result;
}

/*  */

#ifdef	BSD42
/* ARGSUSED */

static SFD  chldser (sig, code, sc)
int	sig;
long	code;
struct sigcontext *sc;
{
	int status;

	while (wait3 (&status, WNOHANG, (struct rusage *) NULL) > 0)
		continue;
}
#endif

/*  */

static void
arginit (char **vec) {
	int	    port;
	char  *ap;
	struct sockaddr_in *lsock = &lo_socket;
	struct servent *sp;

	if (myname = rindex (*vec, '/'))
		myname++;
	if (myname == NULL || *myname == NULL)
		myname = *vec;

	isodetailor (myname, 0);
	ll_hdinit (pgm_log, myname);

	bzero ((char *) lsock, sizeof *lsock);
	lsock -> sin_family = AF_INET;

	if ((sp = getservbyname ("da", "tcp")) == NULL) {
		advise (LLOG_EXCEPTIONS, NULLCP, "%s/%s: unknown service",
				"tcp", "da");
		lsock -> sin_port = htons ((u_short) 411);
	} else
		lsock -> sin_port = sp -> s_port;

	for (vec++; ap = *vec; vec++) {
		if (*ap == '-')
			switch (*++ap) {
			case 'd':
				debug++;
				continue;

			case 'p':
				if ((ap = *++vec) == NULL
						|| *ap == '-'
						|| (port = atoi (ap)) <= 0)
					adios (NULLCP, "usage: %s -p portno", myname);
				lsock -> sin_port = htons ((u_short) port);
				continue;

			default:
				adios (NULLCP, "-%s: unknown switch", ap);
			}

		adios (NULLCP, "usage: %s [switches]", myname);
	}

	{
		struct passwd *pw = getpwnam ("fred");

		if (pw && pw -> pw_uid)
			uid = pw -> pw_uid, gid = pw -> pw_gid;
	}
}

/*  */

static void
envinit  {
	int     i,
	sd;

	nbits = getdtablesize ();

	if (debug == 0 && !(debug = isatty (2))) {
		for (i = 0; i < 5; i++) {
			switch (fork ()) {
			case NOTOK:
				sleep (5);
				continue;

			case OK:
				break;

			default:
				_exit (0);
			}
			break;
		}

		chdir ("/");

		if ((sd = open ("/dev/null", O_RDWR)) == NOTOK)
			adios ("/dev/null", "unable to read");
		if (sd != 0)
			dup2 (sd, 0),  close (sd);
		dup2 (0, 1);
		dup2 (0, 2);

#ifdef	SETSID
		if (setsid () == NOTOK)
			advise (LLOG_EXCEPTIONS, "failed", "setsid");
#endif
#ifdef	TIOCNOTTY
		if ((sd = open ("/dev/tty", O_RDWR)) != NOTOK) {
			ioctl (sd, TIOCNOTTY, NULLCP);
			close (sd);
		}
#else
#ifdef	SYS5
		setpgrp ();
		signal (SIGINT, SIG_IGN);
		signal (SIGQUIT, SIG_IGN);
#endif
#endif

#ifdef	BSD42
		signal (SIGCHLD, chldser);
#else
		signal (SIGCLD, SIG_IGN);
#endif
	} else
		ll_dbinit (pgm_log, myname);

#ifndef	sun		/* damn YP... */
	for (sd = 3; sd < nbits; sd++)
		if (pgm_log -> ll_fd != sd)
			close (sd);
#endif

	signal (SIGPIPE, SIG_IGN);

	ll_hdinit (pgm_log, myname);
	advise (LLOG_NOTICE, NULLCP, "starting");
}

/*    ERRORS */

#ifndef	lint
void	adios (va_alist)
va_dcl {
	va_list ap;

	va_start (ap);

	_ll_log (pgm_log, LLOG_FATAL, ap);

	va_end (ap);

	_exit (1);
}
#else
/* VARARGS */

void
adios (char *what, char *fmt) {
	adios (what, fmt);
}
#endif


#ifndef	lint
void	advise (va_alist)
va_dcl {
	int	    code;
	va_list ap;

	va_start (ap);

	code = va_arg (ap, int);

	_ll_log (pgm_log, code, ap);

	va_end (ap);
}
#else
/* VARARGS */

void
advise (int code, char *what, char *fmt) {
	advise (code, what, fmt);
}
#endif
