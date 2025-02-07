/* ps2udp.c - PPM: UDP backing */

#ifndef	lint
static char *rcsid = "$Header: /xtel/isode/isode/psap2-lpp/RCS/ps2udp.c,v 9.0 1992/06/16 12:31:57 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/psap2-lpp/RCS/ps2udp.c,v 9.0 1992/06/16 12:31:57 isode Rel $
 *
 * Contributed by The Wollongong Group, Inc.
 *
 *
 * $Log: ps2udp.c,v $
 * Revision 9.0  1992/06/16  12:31:57  isode
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


/* LINTLIBRARY */

#include <errno.h>
#include <stdio.h>
#define	LPP
#include "PS-types.h"
#include "ppkt.h"
#include "tsap.h"
#include "tailor.h"

#include "dgram.h"
#include "internet.h"


static int  udpretry (struct psapblk *pb, int	reason, struct PSAPindication *pi);
static int  PUservice (struct psapblk *pb, int	fd);


/*  */

#define	MAXTRIES	 3		/* should be tailorable... */
#define	WAITRIES	30		/*   .. */


int	udpopen (pb, calling, called, pi, async)
struct psapblk *pb;
struct NSAPaddr *calling,
		   *called;
struct PSAPindication *pi;
int	async;
{
	int	    fd;
	struct sockaddr_in  lo_socket,
			   in_socket;
	struct sockaddr_in *lsock = &lo_socket,
							*isock = &in_socket;
	struct hostent *hp;

	bzero ((char *) isock, sizeof *isock);

	if (called -> na_port == 0)
		return psaplose (pi, PC_ADDRESS, NULLCP,
						 "UDP port of called address not specified");
	else
		isock -> sin_port = called -> na_port;

	if ((hp = gethostbystring (called -> na_domain)) == NULL)
		return psaplose (pi, PC_ADDRESS, NULLCP, "%s: unknown host",
						 called -> na_domain);
#ifdef	notanymore
	strncpy (called -> na_domain, hp -> h_name,
			 sizeof called -> na_domain);
#endif

	isock -> sin_family = hp -> h_addrtype;
	inaddr_copy (hp, isock);

#ifndef	notanymore
	strcpy (called -> na_domain, inet_ntoa (isock -> sin_addr));
#endif

	bzero ((char *) lsock, sizeof *lsock);
	if (calling && calling -> na_domain[0]) {
		if ((hp = gethostbystring (calling -> na_domain)) == NULL)
			return psaplose (pi, PC_ADDRESS, NULLCP, "%s: unknown host",
							 calling -> na_domain);

		if ((lsock -> sin_family = hp -> h_addrtype) != isock -> sin_family)
			return psaplose (pi, PC_ADDRESS, NULLCP,
							 "address family mismatch");

		inaddr_copy (hp, lsock);
	} else
		lsock -> sin_family = isock -> sin_family;

	if ((fd = start_udp_client (lsock, 0, 0, 0)) == NOTOK)
		return psaplose (pi, PC_CONGEST, "socket", "unable to start");

	if (join_udp_server (fd, isock) == NOTOK) {
		psaplose (pi, PC_REFUSED, "connection", "unable to establish");
		close_udp_socket (fd);
		return NOTOK;
	}

	if ((pb -> pb_stream = ps_alloc (dg_open)) == NULLPS
			|| dg_setup (pb -> pb_stream, fd, MAXDGRAM, read_udp_socket,
						 write_udp_socket, check_udp_socket) == NOTOK) {
		psaplose (pi, PC_CONGEST, NULLCP, NULLCP);
		close_udp_socket (fd);
		return NOTOK;
	}

	PUservice (pb, fd);

	pb -> pb_tries = pb -> pb_maxtries;

	for (;;)
		switch (udpretry (pb, PC_REFUSED, pi)) {
		case NOTOK:
			return NOTOK;

		case OK:
			if (async)
				return OK;
			continue;

		case DONE:
		default:
			return DONE;
		}
}

/*  */

/* ARGSUSED */

char   *udpsave (fd, cp1, cp2, td)
int	fd;
char   *cp1,
	   *cp2;
struct TSAPdisconnect *td;
{
	static char	buffer[BUFSIZ];

	sprintf (buffer, "%c%d %s %s", PT_UDP, fd, cp1, cp2);

	return buffer;
}


int	udprestore (pb, buffer, pi)
struct psapblk *pb;
char   *buffer;
struct PSAPindication *pi;
{
	int	    fd;
	char *cp;
	char    domain1[NSAP_DOMAINLEN + 1 + 5 + 1],
			domain2[NSAP_DOMAINLEN + 1 + 5 + 1];
	struct NSAPaddr *na;

	na = &pb -> pb_initiating;
	na -> na_stack = NA_TCP;
	na -> na_community = ts_comm_tcp_default;
	na -> na_tset = NA_TSET_UDP;

	if (sscanf (buffer, "%d %s %s", &fd, domain1, domain2) != 3 || fd < 0)
		return psaplose (pi, PC_PARAMETER, NULLCP,
						 "bad initialization vector");

	if (cp = index (domain1, '+')) {
		*cp++ = NULL;
		na -> na_port = htons ((u_short) atoi (cp));
	}
	strncpy (na -> na_domain, domain1, sizeof na -> na_domain);

	PUservice (pb, fd);

	na = pb -> pb_responding.pa_addr.sa_addr.ta_addrs;
	na -> na_stack = NA_TCP;
	na -> na_community = ts_comm_tcp_default;
	na -> na_tset = NA_TSET_UDP;

	if (cp = index (domain2, '+')) {
		*cp++ = NULL;
		na -> na_port = htons ((u_short) atoi (cp));
	}
	strncpy (na -> na_domain, domain2, sizeof na -> na_domain);

	if ((pb -> pb_stream = ps_alloc (dg_open)) == NULLPS
			|| dg_setup (pb -> pb_stream, pb -> pb_fd, MAXDGRAM,
						 read_udp_socket, write_udp_socket,
						 check_udp_socket) == NOTOK)
		return psaplose (pi, PC_CONGEST, NULLCP, NULLCP);

	return OK;
}

/*  */

static int  udpretry (pb, reason, pi)
struct psapblk *pb;
int	reason;
struct PSAPindication *pi;
{
	int	    nfds;
	fd_set  ifds;
	PS	    ps;

	PLOGP (psap2_log,PS_PDUs, pb -> pb_retry,
		   reason == PC_REFUSED ? "ConnectRequest-PDU" : "ReleaseRequest-PDU",
		   0);

	if (pe2ps (ps = pb -> pb_stream, pb -> pb_retry) == NOTOK) {
		pslose (pi, ps -> ps_errno);
		close_udp_socket (pb -> pb_fd);
		return (pb -> pb_fd = NOTOK);
	}

	FD_ZERO (&ifds);

	nfds = pb -> pb_fd + 1;
	FD_SET (pb -> pb_fd, &ifds);
	if (select_udp_socket (nfds, &ifds, NULLFD, NULLFD, WAITRIES) < 1) {
		if (--pb -> pb_tries > 0)
			return OK;

		if (reason == PC_REFUSED) {
			errno = ETIMEDOUT;
			ppktlose (pb, pi, PC_REFUSED, pb -> pb_reference,
					  "connection", "unable to establish");
		} else
			ppktlose (pb, pi, reason, pb -> pb_reference, NULLCP,
					  NULLCP);

		close_udp_socket (pb -> pb_fd);
		return (pb -> pb_fd = NOTOK);
	}

	if (pb -> pb_response)
		pe_free (pb -> pb_response);
	if ((pb -> pb_response = ps2pe (ps = pb -> pb_stream)) == NULLPE) {
		pslose (pi, ps -> ps_errno);
		close_udp_socket (pb -> pb_fd);
		return (pb -> pb_fd = NOTOK);
	}

	return DONE;
}

/*  */

static int  udpcheck (pb, pi)
struct psapblk *pb;
struct PSAPindication *pi;
{
	int	    nfds;
	fd_set  ifds;

	FD_ZERO (&ifds);

	nfds = pb -> pb_fd + 1;
	FD_SET (pb -> pb_fd, &ifds);
	if (select_udp_socket (nfds, &ifds, NULLFD, NULLFD, OK) < 1)
		return psaplose (pi, PC_TIMER, NULLCP, NULLCP);

	return psaplose (pi, PC_WAITING, NULLCP, NULLCP);
}

/*  */

#define	udpclose	close_udp_socket
#define	udpselect	select_udp_socket


static int  PUservice (pb, fd)
struct psapblk *pb;
int	fd;
{
	pb -> pb_fd = fd;

	pb -> pb_reliability = LOW_QUALITY;
	pb -> pb_maxtries = MAXTRIES;

	pb -> pb_retryfnx = udpretry;
	pb -> pb_closefnx = udpclose;
	pb -> pb_selectfnx = udpselect;
	pb -> pb_checkfnx = udpcheck;
}
