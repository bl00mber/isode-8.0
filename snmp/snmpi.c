/* snmpi.c - really minimal SNMP initiator */

#ifndef	lint
static char *rcsid = "$Header: /xtel/isode/isode/snmp/RCS/snmpi.c,v 9.0 1992/06/16 12:38:11 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/snmp/RCS/snmpi.c,v 9.0 1992/06/16 12:38:11 isode Rel $
 *
 * Contributed by NYSERNet Inc.  This work was partially supported by the
 * U.S. Defense Advanced Research Projects Agency and the Rome Air Development
 * Center of the U.S. Air Force Systems Command under contract number
 * F30602-88-C-0016.
 *
 *
 * $Log: snmpi.c,v $
 * Revision 9.0  1992/06/16  12:38:11  isode
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


#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdarg.h>
#include "SNMP-types.h"
#include "objects.h"
#ifndef SVR4_UCB
#include <sys/ioctl.h>
#endif
#include "tailor.h"

#include "dgram.h"
#include "tsap.h"
#ifdef	TCP
#include "internet.h"
#endif
#ifdef	X25
#include "x25.h"
#define	COTS
#endif
#ifdef	TP4
#include "tp4.h"
#if	!defined(CLTS) && !defined(COTS)
#define	COTS
#endif
#endif

/*    DATA */

int	debug = 0;
static	int	verbose = 0;
int	watch = 0;

static	char   *myname = "snmp";

static	char  **op = NULLVP;

static	int	ontty;
static	int	armed;
static	jmp_buf	intrenv;
static	int	interrupted;

static	SFP	istat;


static	char   *defs = NULLCP;

static	PS	ps;
static	char   *community = "public";

static	int	sd;
static	struct TSAPaddr  snmp_ta;

char   *snmp_error ();



/*  */

struct dispatch {
	char   *ds_name;		/* command name */
	IFP	    ds_fnx;		/* dispatch */

	char   *ds_help;		/* help string */
};
static struct dispatch *getds ();


static int	f_audit ();
#ifdef	BSD42
static int	f_bulk ();
#endif
static int	f_compile (), f_dump ();
static int	f_get (), f_get_next (), f_set ();
static int	f_help (), f_quit (), f_status ();

static int  snmploop (char  **vec, int	error);
static	arginit (char    **vec);
static int  isode_getline (char   *prompt, char *buffer);
static	SFD intrser (int	sig);
static int  ncols (FILE *fp);
static struct type_SNMP_Message *new_message (int	offset, char  **vec);
static int  get_ava (struct type_SNMP_VarBind *v, char   *ava, int	offset);
static int  process (struct type_SNMP_Message *msg);


static struct dispatch dispatches[] = {
	"audit", f_audit, "audit traps",

#ifdef	BSD42
	"bulk", f_bulk, "bulk retrieve colums from a table",
#endif

	"compile", f_compile, "write compiled objects file",

	"dump", f_dump, "dump a portion of the MIB",

	"get", f_get, "perform get operation",

	"help", f_help, "print help information",

	"next", f_get_next, "perform powerful get-next operation",

	"quit", f_quit, "terminate program",

	"set", f_set, "perform set operation",

	"status", f_status, "report status",

	NULL
};


static	int	helpwidth;


#ifndef	SYS5
long	random ();
#endif
long	time ();

/*    MAIN */

/* ARGSUSED */

main (argc, argv, envp)
int	argc;
char  **argv,
	  **envp;
{
	int	    eof,
			status,
			vecp;
	char    buffer[BUFSIZ],
			*vec[NVEC + 1];

	arginit (argv);

	status = 0;
	if (op) {
		vecp = 0;
		while (*op)
			vec[vecp++] = *op++;
		vec[vecp] = NULL;

		if (snmploop (vec, NOTOK) == NOTOK)
			status = 1;

		goto were_out_of_here;
	}

	istat = signal (SIGINT, intrser);

	eof = 0;
	for (interrupted = 0;; interrupted = 0) {
		if (isode_getline ("%s> ", buffer) == NOTOK) {
			if (eof)
				break;

			eof = 1;
			continue;
		}
		eof = 0;

		bzero ((char *) vec, sizeof vec);
		if ((vecp = str2vec (buffer, vec)) < 1)
			continue;

		switch (snmploop (vec, OK)) {
		case NOTOK:
			status = 1;
			break;

		case OK:
		default:
			continue;

		case DONE:
			status = 0;
			break;
		}
		break;
	}

	signal (SIGINT, istat);

were_out_of_here:
	;
#ifdef	COTS
	if (snmp_ta.ta_addrs -> na_stack != NA_TCP) {
		struct TSAPdisconnect tds;

#ifdef	CLTS
		if (snmp_ta.ta_addrs -> na_stack != NA_NSAP)
#endif
			TDiscRequest (sd, NULLCP, 0, &tds);
	}
#endif

	exit (status);		/* NOTREACHED */
}

/*  */

static int  snmploop (vec, error)
char  **vec;
int	error;
{
	struct dispatch *ds;

	if ((ds = getds (strcmp (*vec, "?") ? *vec : "help")) == NULL)
		return error;
	switch ((*ds -> ds_fnx) (vec)) {
	case NOTOK:
		return error;

	case OK:
	default:
		return OK;

	case DONE:
		return DONE;
	}
}

/*  */

static struct dispatch *getds (name)
char   *name;
{
	int    longest,
		   nmatches;
	char  *p,
		  *q;
	char    buffer[BUFSIZ];
	struct dispatch   *ds,
			   *fs;

	longest = nmatches = 0;
	for (ds = dispatches; p = ds -> ds_name; ds++) {
		for (q = name; *q == *p++; q++)
			if (*q == NULL)
				return ds;

		if (*q == NULL)
			if (q - name > longest) {
				longest = q - name;
				nmatches = 1;
				fs = ds;
			} else if (q - name == longest)
				nmatches++;
	}

	switch (nmatches) {
	case 0:
		advise (NULLCP, "unknown operation \"%s\"", name);
		return NULL;

	case 1:
		return fs;

	default:
		for (ds = dispatches, p = buffer; q = ds -> ds_name; ds++)
			if (strncmp (q, name, longest) == 0) {
				sprintf (p, "%s \"%s\"", p != buffer ? "," : "", q);
				p += strlen (p);
			}
		advise (NULLCP, "ambiguous operation, it could be one of:%s",
				buffer);
		return NULL;
	}
}

/*    OPERATIONS */

static int  f_audit (vec)
char  **vec;
{
	int	    follow,
			forever,
			i;
	long    longtimeago,
			now;
	char   *cp,
		   *file;
	PE	    pe,
	 p;
	PS	    ps2;
	struct type_SNMP_Audit *au;
	FILE   *fp;

	file = "snmp.traps";
	if (*++vec != NULL && strcmp (*vec, "-help") == 0) {
		printf ("audit [-f | -N | +N] [file]\n");
		printf ("    audit trap sink\n");
		printf ("        -f:   endless loop\n");
		printf ("        -N:   last N traps\n");
		printf ("        +N:   first N traps\n");
		printf ("        file: trap file (default %s)\n", file);

		return OK;
	}

	follow = forever = 0;
	for (; cp = *vec; vec++)
		switch (*cp) {
		case '-':
			if (strcmp (cp, "-f") == 0)
				forever++, follow = 0;
			else
				follow = -atoi (++cp), forever = 0;
			break;

		case '+':
			follow = atoi (++cp), forever = 0;
			break;

		default:
			file = cp;
			break;
		}

	file = _isodefile (isodelogpath, file);
	if ((fp = fopen (file, "r")) == NULL) {
		advise (file, "unable to read");
		return OK;
	}

	pe = p = NULLPE, au = NULL;
	if ((ps2 = ps_alloc (std_open)) == NULLPS) {
		advise (NULLCP, "ps_alloc(std_open): you lose");
		goto out;
	}
	if (std_setup (ps2, fp) == NOTOK) {
		advise (NULLCP, "std_setup: %s", ps_error (ps2 -> ps_errno));
		goto out;
	}

	time (&now);
	longtimeago = now - 6L * 30L * 24L * 60L * 60L;

	if (follow < 0) {
		long    offset,
				*lp,
				*ep;
		long   *opp;

		follow = -follow;
		if ((opp = (long *) calloc ((unsigned) follow, sizeof *opp)) == NULL)
			adios (NULLCP, "out of memory");
		offset = ftell (fp);
		for (ep = (lp = opp) + follow; lp < ep; lp++)
			*lp = offset;
		lp = opp;

		for (;;) {
			if ((pe = ps2pe (ps2)) == NULLPE)
				break;
			if (decode_SNMP_Audit (pe, 1, NULLIP, NULLVP, &au) == NOTOK)
				goto bad_audit;

			fseek (fp, (long) au -> sizeOfEncodingWhichFollows, 1);

			free_SNMP_Audit (au);

			*lp++ = offset;
			if (lp >= ep)
				lp = opp;
			offset = ftell (fp);
		}

		fseek (fp, *lp, 0);
		free ((char *) opp);
		follow = 0;
	}

	for (i = 1;; i++) {
		long	mtime;
		UTC	ut;

		if (follow > 0 && i > follow)
			break;

		if ((pe = ps2pe (ps2)) == NULLPE) {
			if (ps2 -> ps_errno)
				advise (NULLCP, "ps2pe: %s", ps_error (ps2 -> ps_errno));
			else if (forever) {
				clearerr (fp);
				ps2 -> ps_errno = PS_ERR_NONE;
				sleep (1);
				continue;
			}
			break;
		}
		if (decode_SNMP_Audit (pe, 1, NULLIP, NULLVP, &au) == NOTOK) {
bad_audit:
			;
			advise (NULLCP, "decode_SNMP_Audit: %s", PY_pepy);
			break;
		}

		if ((cp = qb2str (au -> dateAndTime)) == NULL) {
no_mem:
			;
			advise (NULLCP, "qb2str: out of memory");
			break;
		}
		ut = str2gent (cp, strlen (cp));
		free (cp);
		if (ut == NULL) {
			advise (NULLCP, "str2gent: you lose");
			break;
		}
		mtime = gtime (ut2tm (ut));
		cp = ctime (&mtime);
		if (forever)
			time (&now);
		if (mtime < longtimeago || mtime > now)
			printf ("%-7.7s %-4.4s ", cp + 4, cp + 20);
		else
			printf ("%-12.12s ", cp + 4);

		if ((cp = qb2str (au -> source)) == NULL)
			goto no_mem;
		printf ("%s\n", cp);
		free (cp);

		if ((p = ps2pe (ps2)) == NULLPE) {
			if (ps2 -> ps_errno)
				advise (NULLCP, "ps2pe: %s", ps_error (ps2 -> ps_errno));
			break;
		}
		if (print_SNMP_Message (p, 1, NULLIP, NULLVP, NULLCP) == NOTOK)
			printf ("\n");

		free_SNMP_Audit (au), au = NULL;
	}

out:
	;
	fclose (fp);
	if (ps2)
		ps_free (ps2);
	if (pe)
		pe_free (pe);
	if (p)
		pe_free (p);
	if (au)
		free_SNMP_Audit (au);

	return OK;
}

/*  */

#ifdef	BSD42
int	bulk1 (), bulk2 ();

static int  f_bulk (vec)
char  **vec;
{
	int	    result;
	IFP	    fnx = bulk1;
	struct type_SNMP_VarBindList **vp;
	struct type_SNMP_VarBindList *vb;
	OT	    et = NULL;

	if (*++vec != NULL && strcmp (*vec, "-help") == 0) {
		printf ("bulk [-alg1 | -alg2] columns...\n");
		printf ("    with arguments, bulk retrieves columns from a table\n");

		return OK;
	}
	while (*vec) {
		if (strcmp (*vec, "-alg1") == 0) {
			fnx = bulk1;
			vec++;
			continue;
		}
		if (strcmp (*vec, "-alg2") == 0) {
			fnx = bulk2;
			vec++;
			continue;
		}
		break;
	}
	if (*vec == NULL)
		return OK;

#ifdef	COTS
	if (snmp_ta.ta_addrs -> na_stack != NA_TCP) {
#ifdef	CLTS
		if (snmp_ta.ta_addrs -> na_stack != NA_NSAP) {
#endif
			advise (NULLCP, "bulk requires CL-mode transport!");
			return NOTOK;
#ifdef	CLTS
		}
#endif
	}
#endif

	vp = &vb, vb = NULL;
	for (result = NOTOK; *vec; vec++) {
		struct type_SNMP_VarBindList *bind;
		struct type_SNMP_VarBind *v;
		OT	ot;

		if ((ot = text2obj (*vec)) == NULL) {
			advise (NULLCP, "unknown object \"%s\"", *vec);
			goto out;
		}

		if (et) {
			OID    eid = et -> ot_name,
				   oid = ot -> ot_name;

			if (eid -> oid_nelem != oid -> oid_nelem - 1
					|| bcmp ((char *) eid -> oid_elements,
							 (char *) oid -> oid_elements,
							 eid -> oid_nelem
							 * sizeof (eid -> oid_elements[0])) != 0) {
				advise (NULLCP, "%s not in same table as previous arguments",
						ot -> ot_text);
				goto out;
			}
		} else {
			/*	    int	    i; */

			ot -> ot_name -> oid_nelem--;
			et = name2obj (ot -> ot_name);
			ot -> ot_name -> oid_nelem++;

			if (et == NULL) {
				advise (NULLCP, "unable to find row object for %s",
						ot -> ot_text);
				goto out;
			}
			if (et -> ot_syntax
					/* || (i = strlen (et -> ot_text)) <= 5
					   || strcmp (et -> ot_text + i - 5, "Entry")*/) {
				advise (NULLCP, "%s is not a column object", ot -> ot_text);
				goto out;
			}
		}

		if ((bind = (struct type_SNMP_VarBindList *) calloc (1, sizeof *bind))
				== NULL)
			adios (NULLCP, "out of memory");
		*vp = bind, vp = &bind -> next;

		if ((v = (struct type_SNMP_VarBind *) calloc (1, sizeof *v)) == NULL)
			adios (NULLCP, "out of memory");
		bind -> VarBind = v;

		if ((v -> name = oid_cpy (ot -> ot_name)) == NULLOID
				|| (v -> value = pe_alloc (PE_CLASS_UNIV, PE_FORM_PRIM,
										   PE_PRIM_NULL)) == NULLPE)
			adios (NULLCP, "out of memory");
	}

	(*fnx) (ps, sd, vb, community);
	result = OK;

out:
	;
	free_SNMP_VarBindList (vb);
	return result;
}
#endif

/*  */

static char *access_t[] = { "not-accessible",
							"read-only",
							"write-only",
							"read-write"
						  };

static char *status_t[] = { "obsolete",
							"mandatory",
							"optional",
							"deprecated"
						  };


static int  f_compile (vec)
char  **vec;
{
	int    i,
		   j,
		   k;
	int	    fast,
			source;
	char   *cp,
		   *file,
		   sysout[BUFSIZ];
	OS	    os;
	OS	    first;
	OT	    ot;
	FILE   *fp;

	fast = source = 0;
	file = defs ? defs : "./objects.defs";
	if (*++vec != NULL && strcmp (*vec, "-help") == 0) {
		printf ("compile [-f|-s] [file]\n");
		printf ("    -f:   brief output (default to stdout)\n");
		printf ("    -s:   source output (C language bindings)\n");
		printf ("    file: output file (default %s)\n", file);

		return OK;
	}
	while (cp = *vec++) {
		if (strcmp (cp, "-f") == 0) {
			fast = 1, source = 0, file = NULLCP;
			continue;
		}
		if (strcmp (cp, "-s") == 0) {
			source = 1, fast = 0;
			continue;
		}

		file = cp;
	}

	if (file) {
		char   *sp;

		if (source && strcmp (file, "./objects.defs") == 0)
			file = "./loadobjects.defs";
		if (sp = rindex (file, '/'))
			sp++;
		if (sp == NULL || *sp == NULL)
			sp = file;
		sp += strlen (file = sp) - 5;
		if (sp > file && strcmp (sp, ".defs") == 0)
			sprintf (sysout, "%.*s.%s", sp - file, file,
					 source ? "c" : "defs");
		else
			sprintf (sysout, "%s.%s", file,
					 source ? "c" : "defs");

		if ((fp = fopen (sysout, "w")) == NULL) {
			advise (sysout, "unable to write");
			return OK;
		}
	} else
		fp = stdout;

	i = j = k = 0;
	if (source) {
		int	v;
		OS	last;

		fprintf (fp, "/* compiled */\n\n");
		fprintf (fp, "#include <stdio.h>\n#include \"objects.h\"\n\n");

		fprintf (fp, "static unsigned int _elems[] = {\n");
		v = 0;
		for (ot = text2obj ("ccitt"); ot; ot = ot -> ot_next) {
			unsigned int *ip = ot -> ot_name -> oid_elements;

			fprintf (fp, "     ");
			for (j = ot -> ot_name -> oid_nelem; j > 0; j--)
				fprintf (fp, " %u,", *ip++);
			fprintf (fp, " 0, /* %s */ \n", ot -> ot_text);

			ot -> ot_views = v++;
		}
		fprintf (fp, "};\n\n");

		fprintf (fp, "static OIDentifier _names[] = {\n");
		for (ot = text2obj ("ccitt"); ot; ot = ot -> ot_next) {
			fprintf (fp, "    { %d, &_elems[%d] }, \n",
					 ot -> ot_name -> oid_nelem, k);
			k += ot -> ot_name -> oid_nelem + 1;
		}
		fprintf (fp, "};\n\n");

		flsyntax (&first, &last);
		fprintf (fp, "static struct _syntax {\n    char   *name;\n");
		fprintf (fp, "    OS      value;\n}\t_syntaxes[] = {\n");
		for (os = first; os <= last; os++)
			fprintf (fp, "    { \"%s\", NULLOS }, \n", os -> os_name);
		fprintf (fp, "    NULL\n};\n\n");
	} else if (!fast) {
		for (ot = text2obj ("ccitt"); ot; ot = ot -> ot_next) {
			i++;
			j += strlen (ot -> ot_text)
				 + strlen (sprintoid (ot -> ot_name));
			k += ot -> ot_name -> oid_nelem;
		}
		j += i << 1, k += i;
		fprintf (fp, "--* compiled %d %d %d\n", i, j, k);
	}

	if (source) {
		i = 0;

		fprintf (fp, "static object_type _types[] = {\n");
	}
	for (ot = text2obj ("ccitt"); ot; ot = ot -> ot_next) {
		if (fast) {
			fprintf (fp, "%s=%s\n", ot -> ot_text, sprintoid (ot -> ot_name));
			continue;
		}

		if (source) {
			fprintf (fp, "    { \"%s\", \"%s\", &_names[%d],\n      (OS) ",
					 ot -> ot_text, sprintoid (ot -> ot_name), i++);
			if (ot -> ot_syntax)
				fprintf (fp, "%d", ot -> ot_syntax - first);
			else
				fprintf (fp, "-1");
			fprintf (fp, ", %d, (u_long) 0, %d,\n",
					 ot -> ot_access & OT_RDWRITE,
					 ot -> ot_status & OT_DEPRECATED);
			fprintf (fp,
					 "      (caddr_t) 0, NULLIFP, NULLIFP, (caddr_t) 0, (caddr_t) 0,\n");
			fprintf (fp, "      ");
#define	OT_OFFSET(x,y) \
	    if (ot -> x) \
		fprintf (fp, "&_types[%d]%s", ot -> x -> ot_views, y); \
	    else \
		fprintf (fp, "NULLOT%s", y)

			OT_OFFSET (ot_chain, ", ");
			OT_OFFSET (ot_sibling, ", ");
			OT_OFFSET (ot_children, ", ");
			OT_OFFSET (ot_next, " },\n");

#undef	OT_OFFSET

			continue;
		}

		fprintf (fp, "%-20s %-20s", ot -> ot_text, sprintoid (ot -> ot_name));
		if ((os = ot -> ot_syntax) || ot -> ot_status)
			fprintf (fp, " %-15s %d %d %d",
					 os ? os -> os_name : "Aggregate",
					 ot -> ot_access & OT_RDWRITE,
					 ot -> ot_status & OT_DEPRECATED,
					 THASH (ot -> ot_text));
		else
			fprintf (fp, " %d", THASH (ot -> ot_text));
		fprintf (fp, "\n");
	}
	if (source) {
		fprintf (fp, "    NULL\n};\n\n");
		fprintf (fp, "OT\tanchor = _types;\n");
		fprintf (fp, "OT\tchain = &_types[%d];\n\n", i - 1);

		flobjects (fp);
	}

	if (file)
		fclose (fp);

	if (!fast)
		advise (NULLCP, "%d objects written to %s", i,
				file ? sysout : "stdout");

	return OK;
}

/*  */

static int  f_dump (vec)
char  **vec;
{
	int	    request_id,
			rows,
			timing = 0;
	char   *nvec[3];
	OID	    oid;
	PE	    pe;
	struct type_SNMP_Message *msg;
	struct type_SNMP_PDU *parm;
	struct type_SNMP_VarBindList *vp;
	struct timeval  tvs,
			   now;

	if (*++vec != NULL && strcmp (*vec, "-help") == 0) {
		printf ("dump [object]\n");
		printf ("    with no arguments, dump entire MIB\n");
		printf ("    with an argument, dump a portion of the MIB\n");

		return OK;
	}
	if (*vec && strcmp (*vec, "-time") == 0) {
		timing++;
		gettimeofday (&tvs, (struct timezone *) 0);
		vec++;
	}

	nvec[0] = "dump";
	nvec[1] = *vec ? *vec : "0.0";
	nvec[2] = NULL;

	if ((msg = new_message (type_SNMP_PDUs_get__next__request, nvec)) == NULL)
		return OK;

	request_id = msg -> data -> un.get__response -> request__id = 0;

	if (*vec) {
		if ((oid = oid_cpy (msg -> data -> un.get__next__request ->
							variable__bindings -> VarBind -> name)) == NULLOID)
			adios (NULLCP, "out of memory");
	} else
		oid = NULLOID;
	rows = 0;

again:
	;
	pe = NULLPE;

	if (encode_SNMP_Message (&pe, 1, 0, NULLCP, msg) != NOTOK) {
		if (watch)
			print_SNMP_Message (pe, 1, NULLIP, NULLVP, NULLCP);

		if (pe2ps (ps, pe) == NOTOK) {
			advise (NULLCP, "pe2ps: %s", ps_error (ps -> ps_errno));
			goto out;
		}
	} else
		advise (NULLCP, "encode_SNMP_Message: %s", PY_pepy);

try_again:
	;
	if (pe)
		pe_free (pe);
	pe = NULLPE;

	free_SNMP_Message (msg);
	msg = NULL;

	if ((pe = ps2pe (ps)) == NULLPE) {
		advise (NULLCP, "ps2pe: %s", ps_error (ps -> ps_errno));
		goto out;
	}

	if (decode_SNMP_Message (pe, 1, NULLIP, NULLVP, &msg) == NOTOK) {
		advise (NULLCP, "decode_SNMP_Message: %s", PY_pepy);
		goto out;
	}

	if (watch)
		print_SNMP_Message (pe, 1, NULLIP, NULLVP, NULLCP);

	if (msg -> data -> offset != type_SNMP_PDUs_get__response) {
		advise (NULLCP, "unexpected message type %d",
				msg -> data -> offset);
		goto out;
	}

	if ((parm = msg -> data -> un.get__response) -> request__id
			!= request_id) {
		fprintf (stderr, "request-id mismatch (got %d, wanted %d)\n",
				 parm -> request__id, request_id);
		goto try_again;
	}

	if (parm -> error__status != int_SNMP_error__status_noError) {
		if (parm -> error__status != int_SNMP_error__status_noSuchName)
			fprintf (stderr, "%s at position %d\n",
					 snmp_error (parm -> error__status), parm -> error__index);
		goto out;
	}

	for (vp = parm -> variable__bindings; vp; vp = vp -> next) {
		caddr_t	 value;
		OI	oi;
		OS	os;
		struct type_SNMP_VarBind *v = vp -> VarBind;

		if (oid
				&& (oid -> oid_nelem > v -> name -> oid_nelem
					|| bcmp ((char *) oid -> oid_elements,
							 (char *) v -> name -> oid_elements,
							 oid -> oid_nelem
							 * sizeof oid -> oid_elements[0])))
			goto out;

		if (timing)
			continue;

		printf ("%s=", oid2ode (vp -> VarBind -> name));
		if ((oi = name2inst (v -> name)) == NULL
				|| (os = oi -> oi_type -> ot_syntax) == NULL
				|| (*os -> os_decode) (&value, v -> value) == NOTOK)
			vunknown (v -> value);
		else {
			(*os -> os_print) (value, os);
			printf ("\n");

			(*os -> os_free) (value);
		}
	}
	rows++;

	if (pe)
		pe_free (pe);
	msg -> data -> offset = type_SNMP_PDUs_get__next__request;
	request_id = ++parm -> request__id;
	goto again;

out:
	;
	if (oid)
		oid_free (oid);
	if (pe)
		pe_free (pe);
	if (msg)
		free_SNMP_Message (msg);

	if (timing) {
		gettimeofday (&now, (struct timezone *) 0);
		now.tv_sec -= tvs.tv_sec;
		if ((now.tv_usec -= tvs.tv_usec) < 0)
			now.tv_sec--, now.tv_usec += 1000000;
		advise (NULLCP,
				"%d entr%s retrieved in %d.%06d seconds",
				rows, rows != 1 ? "ies" : "y", now.tv_sec, now.tv_usec);
	}

	return OK;
}

/*  */

static int  f_get (vec)
char  **vec;
{
	process (new_message (type_SNMP_PDUs_get__request, vec));
}

/*  */

static int  f_get_next (vec)
char  **vec;
{
	process (new_message (type_SNMP_PDUs_get__next__request, vec));
}

/*  */

static int  f_set (vec)
char  **vec;
{
	process (new_message (type_SNMP_PDUs_set__request, vec));
}

/*  */

static char *errors[] = {
	"noError", "tooBig", "noSuchName", "badValue", "readOnly", "genErr"
};


char   *snmp_error (i)
integer	i;
{
	static char buffer[BUFSIZ];

	if (0 < i && i < sizeof errors / sizeof errors[0])
		return errors[i];
	sprintf (buffer, "error %d", i);

	return buffer;
}

/*  */

static struct type_SNMP_Message *new_message (offset, vec)
int	offset;
char  **vec;
{
	struct type_SNMP_Message *msg;
	struct type_SNMP_PDUs *pdu;
	struct type_SNMP_PDU *parm;
	struct type_SNMP_VarBindList **vp;

	if ((msg = (struct type_SNMP_Message *) calloc (1, sizeof *msg)) == NULL)
		adios (NULLCP, "out of memory");

	msg -> version = int_SNMP_version_version__1;

	if ((msg -> community = str2qb (community, strlen (community), 1)) == NULL)
		adios (NULLCP, "out of memory");

	if ((pdu = (struct type_SNMP_PDUs *) calloc (1, sizeof *pdu)) == NULL)
		adios (NULLCP, "out of memory");
	msg -> data = pdu;

	pdu -> offset = offset;

	/* for now, always a PDU... */

	if ((parm = (struct type_SNMP_PDU *) calloc (1, sizeof *parm)) == NULL)
		adios (NULLCP, "out of memory");
	pdu -> un.get__request = parm;

#ifndef	SYS5
	parm -> request__id = ((int) random ()) & 0x7fffffff;
#else
	parm -> request__id = ((int) rand ()) & 0x7fffffff;
#endif

	vp = &parm -> variable__bindings;
	for (vec++; *vec; vec++) {
		struct type_SNMP_VarBindList *bind;
		struct type_SNMP_VarBind *v;

		if ((bind = (struct type_SNMP_VarBindList *) calloc (1, sizeof *bind))
				== NULL)
			adios (NULLCP, "out of memory");
		*vp = bind, vp = &bind -> next;

		if ((v = (struct type_SNMP_VarBind *) calloc (1, sizeof *v)) == NULL)
			adios (NULLCP, "out of memory");
		bind -> VarBind = v;

		if (get_ava (v, *vec, offset) == NOTOK) {
			free_SNMP_Message (msg);
			return NULL;
		}
	}

	return msg;
}

/*  */

static int  get_ava (v, ava, offset)
struct type_SNMP_VarBind *v;
char   *ava;
int	offset;
{
	int	    result;
	caddr_t value;
	char *cp;
	OI	   oi;
	OT	   ot;
	OS	   os;
	OID	    oid;

	if (cp = index (ava, '=')) {
		if (offset != type_SNMP_PDUs_set__request)
			advise (NULLCP, "value unnecessary for get operation");
		*cp++ = NULL;
	} else if (offset == type_SNMP_PDUs_set__request) {
		advise (NULLCP, "need variable=value for set operation");
		return NOTOK;
	}

	if ((oi = text2inst (ava)) == NULL) {
		if (cp || (oid = text2oid (ava)) == NULL) {
			advise (NULLCP, "unknown variable \"%s\"", ava);
			return NOTOK;
		}

		ot = NULLOT;
	} else
		ot = oi -> oi_type;

	if ((v -> name = oid_cpy (oi ? oi -> oi_name : oid)) == NULLOID)
		adios (NULLCP, "out of memory");

	if (cp == NULL) {
		if ((v -> value = pe_alloc (PE_CLASS_UNIV, PE_FORM_PRIM, PE_PRIM_NULL))
				== NULLPE)
			adios (NULLCP, "out of memory");
	} else {
		if ((os = ot -> ot_syntax) == NULL) {
			advise (NULLCP, "no syntax defined for object \"%s\"", ava);
			return NOTOK;
		}

		if ((*os -> os_parse) (&value, cp) == NOTOK) {
			advise (NULLCP, "invalid value for variable \"%s\": \"%s\"",
					ava, cp);
			return NOTOK;
		}
		result = (*os -> os_encode) (value, &v -> value);
		(*os -> os_free) (value);

		if (result == NOTOK) {
			advise (NULLCP, "encoding error for variable \"%s\"", ava);
			return NOTOK;
		}
	}

	if (oi == NULL)
		oid_free (oid);

	return OK;
}

/*  */

static int  process (msg)
struct type_SNMP_Message *msg;
{
	int	    request_id;
	PE	    pe;
	struct type_SNMP_PDU *parm;
	struct type_SNMP_VarBindList *vp;

	if (msg == NULL)
		return OK;

	request_id = msg -> data -> un.get__request -> request__id;
	if (encode_SNMP_Message (&pe, 1, 0, NULLCP, msg) != NOTOK) {
		if (watch)
			print_SNMP_Message (pe, 1, NULLIP, NULLVP, NULLCP);

		if (pe2ps (ps, pe) == NOTOK) {
			advise (NULLCP, "pe2ps: %s", ps_error (ps -> ps_errno));
			goto out;
		}
	} else
		advise (NULLCP, "encode_SNMP_Message: %s", PY_pepy);

try_again:
	;
	if (pe)
		pe_free (pe);
	pe = NULLPE;

	free_SNMP_Message (msg);
	msg = NULL;

	if ((pe = ps2pe (ps)) == NULLPE) {
		advise (NULLCP, "ps2pe: %s", ps_error (ps -> ps_errno));
		goto out;
	}

	if (decode_SNMP_Message (pe, 1, NULLIP, NULLVP, &msg) == NOTOK) {
		advise (NULLCP, "decode_SNMP_Message: %s", PY_pepy);
		goto out;
	}

	if (watch)
		print_SNMP_Message (pe, 1, NULLIP, NULLVP, NULLCP);

	if (msg -> data -> offset != type_SNMP_PDUs_get__response) {
		advise (NULLCP, "unexpected message type %d",
				msg -> data -> offset);
		goto out;
	}

	if ((parm = msg -> data -> un.get__response) -> request__id
			!= request_id) {
		fprintf (stderr, "request-id mismatch (got %d, wanted %d)\n",
				 parm -> request__id, request_id);
		goto try_again;
	}

	if (parm -> error__status != int_SNMP_error__status_noError) {
		fprintf (stderr, "%s at position %d\n",
				 snmp_error (parm -> error__status), parm -> error__index);
		goto out;
	}

	for (vp = parm -> variable__bindings; vp; vp = vp -> next) {
		caddr_t	 value;
		OI	oi;
		OS	os;
		struct type_SNMP_VarBind *v = vp -> VarBind;

		if ((oi = name2inst (v -> name)) == NULL) {
			advise (NULLCP, "unknown variable \"%s\"", oid2ode (v -> name));
no_dice:
			;
			printf ("%s=", oid2ode (v -> name));
			vunknown (v -> value);
			continue;
		}
		if ((os = oi -> oi_type -> ot_syntax) == NULL) {
			advise (NULLCP, "unknown syntax for object \"%s\"",
					oi -> oi_type -> ot_text);
			goto no_dice;
		}
		if ((*os -> os_decode) (&value, v -> value) == NOTOK) {
			advise (NULLCP, "decode error for variable \"%s\"",
					oid2ode (v -> name));
			goto no_dice;
		}

		printf ("%s=", oid2ode (v -> name));
		(*os -> os_print) (value, os);
		printf ("\n");

		(*os -> os_free) (value);
	}

out:
	;
	if (pe)
		pe_free (pe);
	if (msg)
		free_SNMP_Message (msg);

	return OK;
}

/*  */

static int  f_help (vec)
char  **vec;
{
	int    i,
		   j,
		   w;
	int     columns,
			width,
			lines;
	struct dispatch   *ds,
			   *es;

	for (es = dispatches; es -> ds_name; es++)
		continue;
	width = helpwidth;

	if (*++vec == NULL) {
		if ((columns = ncols (stdout) / (width = (width + 8) & ~7)) == 0)
			columns = 1;
		lines = ((es - dispatches) + columns - 1) / columns;

		printf ("Operations:\n");
		for (i = 0; i < lines; i++)
			for (j = 0; j < columns; j++) {
				ds = dispatches + j * lines + i;
				printf ("%s", ds -> ds_name);
				if (ds + lines >= es) {
					printf ("\n");
					break;
				}
				for (w = strlen (ds -> ds_name); w < width; w = (w + 8) & ~7)
					putchar ('\t');
			}
		printf ("\n");

		return OK;
	}

	if (strcmp (*vec, "-help") == 0) {
		printf ("help [commands ...]\n");
		printf ("    with no arguments, lists operations which may be invoked\n");
		printf ("    otherwise prints help for each operation given\n");

		return OK;
	}

	for (; *vec; vec++)
		if (strcmp (*vec, "?") == 0) {
			for (ds = dispatches; ds -> ds_name; ds++)
				printf ("%-*s\t- %s\n", width, ds -> ds_name, ds -> ds_help);

			break;
		} else if (ds = getds (*vec))
			printf ("%-*s\t- %s\n", width, ds -> ds_name, ds -> ds_help);

	return OK;
}

/*  */

static int  f_quit (vec)
char  **vec;
{
	if (vec && *++vec != NULL && strcmp (*vec, "-help") == 0) {
		printf ("quit\n");
		printf ("    terminate fred\n");

		return OK;
	}

	return DONE;
}

/*  */

static int  f_status (vec)
char  **vec;
{
	if (*++vec != NULL && strcmp (*vec, "-help") == 0) {
		printf ("status\n");
		printf ("    report status\n");

		return OK;
	}

	printf ("Connected to %s using community \"%s\"\n",
			taddr2str (&snmp_ta), community);

	return OK;
}

/*    SYNTAX */

static char *ifType[] = {
	"other", "regular1822", "hdh1822", "ddn-x25", "rfc877-x25",
	"ethernet-csmacd", "iso88023-csmacd", "iso88024-tokenBus",
	"iso88025-tokenRing", "iso88026-man", "starLan", "proteon-10Mbit",
	"proteon-80Mbit", "hyperchannel", "fddi", "lapb", "sdlc", "t1-carrier",
	"cept", "basicISDN", "primaryISDN", "propPointToPointSerial",
	"ppp", "softwareLoopback", "eon", "ethernet-3Mbit",
	"nsip", "slip"
};

static char *ifStatus[] = {
	"up", "down", "testing"
};

static char *ipForwarding[] = {
	"gateway", "host"
};

static char *routeType[] = {
	"other", "invalid", "direct", "remote"
};

static char *ipRouteProto[] = {
	"other", "local", "netmgmt", "icmp", "egp", "ggp", "hello", "rip", "is-is",
	"es-is", "ciscoIgrp", "bbnSpfIgp", "ospf", "bgp"
};

static char *netToMediaType[] = {
	"other", "invalid", "dynamic", "static"
};

static char *tcpRtoAlgorithm[] = {
	"other", "constant", "rsre", "vanj"
};

static char *tcpConnState[] = {
	"closed", "listen", "synSent", "synReceived", "established", "finWait1",
	"finWait2", "closeWait", "lastAck", "closing", "timewait"
};

static char *egpNeighState[] = {
	"idle", "acquisition", "down", "up", "cease"
};

static char *egpNeighMode[] = {
	"active", "passive"
};

static char *egpNeighEventTrigger[] = {
	"start", "stop"
};

static char *enabled[] = {
	"enabled", "disabled"
};


static char *status[] = {
	"valid", "invalid"
};

static char *smuxPstatus[] = {
	"valid", "invalid", "connecting"
};


static struct ivar {
	char   *iv_object;

	char  **iv_values;
	int	    iv_nvalue;
} ivars[] = {
	"ifType", ifType,
	sizeof ifType / sizeof ifType[0],

	"ifAdminStatus", ifStatus,
	sizeof ifStatus / sizeof ifStatus[0],

	"ifOperStatus", ifStatus,
	sizeof ifStatus / sizeof ifStatus[0],

	"ipForwarding", ipForwarding,
	sizeof ipForwarding / sizeof ipForwarding[0],

	"ipRouteType", routeType,
	sizeof routeType / sizeof routeType[0],

	"ipRouteProto", ipRouteProto,
	sizeof ipRouteProto / sizeof ipRouteProto[0],

	"ipNetToMediaType", netToMediaType,
	sizeof netToMediaType / sizeof netToMediaType[0],

	"tcpRtoAlgorithm", tcpRtoAlgorithm,
	sizeof tcpRtoAlgorithm / sizeof tcpRtoAlgorithm[0],

	"tcpConnState", tcpConnState,
	sizeof tcpConnState / sizeof tcpConnState[0],

	"egpNeighState", egpNeighState,
	sizeof egpNeighState / sizeof egpNeighState[0],

	"egpNeighMode", egpNeighMode,
	sizeof egpNeighMode / sizeof egpNeighMode[0],

	"egpNeighEventTrigger", egpNeighEventTrigger,
	sizeof egpNeighEventTrigger / sizeof egpNeighEventTrigger[0],

	"snmpEnableAuthenTraps", enabled,
	sizeof enabled / sizeof enabled[0],

	"smuxPstatus", smuxPstatus,
	sizeof smuxPstatus / sizeof smuxPstatus[0],

	"smuxTstatus", status,
	sizeof status / sizeof status[0],

	"unixNetstat", enabled,
	sizeof enabled / sizeof enabled[0],

	NULL
};

/*  */

static int  enum_print (x, os)
integer *x;
OS	os;
{
	int	    i = *x;

	if (i <= 0 || i > os -> os_data2)
		printf ("unknown(%d)", i);
	else
		printf ("%s(%d)", os -> os_data1[i - 1], i);
}


static	moresyntax (check)
int	check;
{
	struct ivar *iv;
	OT	   ot;
	OS	   os;

	for (iv = ivars; iv -> iv_object; iv++)
		if (ot = text2obj (iv -> iv_object)) {
			char   *name;

			if ((os = ot -> ot_syntax) == NULL) {
				advise (NULLCP, "no syntax defined for object \"%s\"",
						iv -> iv_object);
				continue;
			}
			name = os -> os_name;

			add_syntax (iv -> iv_object, os -> os_encode,
						os -> os_decode, os -> os_free, os -> os_parse,
						enum_print);
			if ((os = text2syn (iv -> iv_object)) == NULL)
				adios (NULLCP, "lost syntax for object \"%s\"",
					   iv -> iv_object);
			ot -> ot_syntax = os;
			os -> os_name = name;
			os -> os_data1 = iv -> iv_values;
			os -> os_data2 = iv -> iv_nvalue;
		} else if (check)
			advise (NULLCP, "no \"%s\" object", iv -> iv_object);
}

/*    MISCELLANY */

static	arginit (vec)
char    **vec;
{
	int	    w;
	char  *ap,
		  *pp;
	struct dispatch *ds;
#ifdef	TCP
	int	    port;
	struct sockaddr_in in_socket;
	struct sockaddr_in *isock = &in_socket;
	struct hostent *hp;
	struct servent *sp;
#endif
	struct TSAPaddr *ta = &snmp_ta,
						 *tz;
	struct NSAPaddr *na = ta -> ta_addrs;

	if (myname = rindex (*vec, '/'))
		myname++;
	if (myname == NULL || *myname == NULL)
		myname = *vec;

	isodetailor (myname, 1);

	if (ontty = isatty (fileno (stdin)))
		verbose++;

	if ((sp = getservbyname ("snmp", "udp")) == NULL)
		advise (NULLCP, "udp/snmp: unknown service");

	bzero ((char *) ta, sizeof *ta);
#ifdef	TCP
	na -> na_stack = NA_TCP;
	na -> na_community = ts_comm_tcp_default;
	strncpy (na -> na_domain, getlocalhost (),
			 sizeof na -> na_domain - 1);
	na -> na_port = sp ? sp -> s_port : htons ((u_short) 161);
	na -> na_tset = NA_TSET_UDP;
	ta -> ta_naddr = 1;
#endif

	for (vec++; ap = *vec; vec++) {
		if (*ap == '-') {
			while (*++ap)
				switch (*ap) {
				case 'a':		/* e.g., NS+0504030201 */
					if ((pp = *++vec) == NULL || *pp == '-')
						adios (NULLCP, "usage: %s -a agent", myname);
#ifdef	TCP
					if (hp = gethostbystring (pp)) {
						if (na -> na_stack != NA_TCP)
							adios (NULLCP, "use -a at most once...");
						inaddr_copy (hp, isock);
						strncpy (na -> na_domain,
								 inet_ntoa (isock -> sin_addr),
								 sizeof na -> na_domain - 1);
					} else
#endif
						if ((tz = str2taddr (pp)) && tz -> ta_naddr > 0) {
							*ta = *tz;	/* struct copy */
							if (na -> na_stack == NA_TCP) {
								if (na -> na_port == 0)
									na -> na_port = sp ? sp -> s_port
													: htons ((u_short) 161);
								na -> na_tset = NA_TSET_UDP;
							}
						} else
							adios (NULLCP, "%s: unknown host", pp);
					break;

#ifdef	TCP
				case 'p':
					if ((pp = *++vec) == NULL
							|| *pp == '-'
							|| (port = atoi (pp)) <= 0)
						adios (NULLCP, "usage: %s -p portno", myname);
					if (na -> na_stack != NA_TCP)
						adios (NULLCP, "-p not allowed with %s",
							   taddr2str (ta));
					na -> na_port = htons ((u_short) port);
					break;
#endif

				case 'c':
					if ((pp = *++vec) == NULL || *pp == '-')
						adios (NULLCP, "usage: %s -c community", myname);
					community = pp;
					break;

				case 'd':
					debug++;
					break;

				case 'v':
					verbose++;
					break;

				case 'w':
					watch++;
					break;

				case 'f':
					if ((pp = *++vec) == NULL || *pp == '-')
						adios (NULLCP, "usage: %s -f file", myname);
					defs = pp;
					break;

				default:
					adios (NULLCP, "unknown switch -%c", *ap);
				}
			continue;
		}
		if (op == NULL) {
			op = vec;
			break;
		}
	}

	helpwidth = 0;
	for (ds = dispatches; ds -> ds_name; ds++)
		if ((w = strlen (ds -> ds_name)) > helpwidth)
			helpwidth = w;

	if (ta -> ta_naddr == 0)
		adios (NULLCP, "usage: %s -a string", myname);
	switch (na -> na_stack) {
	case NA_TCP:
#ifdef	TCP
	{
		struct sockaddr_in lo_socket;
		struct sockaddr_in *lsock = &lo_socket;

		bzero ((char *) lsock, sizeof *lsock);
		if ((hp = gethostbystring (pp = getlocalhost ())) == NULL)
			adios (NULLCP, "%s: unknown host", pp);
		lsock -> sin_family = hp -> h_addrtype;
		inaddr_copy (hp, lsock);
		/* If the request is being sent out on the loopback interface,
		   make sure it appears to have originated from the loopback
		   interface, rather than the interface used as the default
		   hostname.  If the interface used as the default hostname
		   is a serial link, responses to requests with this origin
		   may be undeliverable.  (EJP) */
#define	LOOPBACK	((127 << 24) + 1)
		if (isock -> sin_addr.s_addr == LOOPBACK)
			lsock -> sin_addr.s_addr = LOOPBACK;
#undef	LOOPBACK
		if ((sd = start_udp_client (lsock, 0, 0, 0)) == NOTOK)
			adios ("failed", "start_udp_client");

		bzero ((char *) isock, sizeof *isock);
		if ((hp = gethostbystring (na -> na_domain)) == NULL)
			adios (NULLCP, "%s: unknown host", na -> na_domain);
		isock -> sin_family = hp -> h_addrtype;
		isock -> sin_port = na -> na_port;
		inaddr_copy (hp, isock);

		if (join_udp_server (sd, isock) == NOTOK)
			adios ("failed", "join_udp_server");

		if ((ps = ps_alloc (dg_open)) == NULLPS
				|| dg_setup (ps, sd, MAXDGRAM, read_udp_socket,
							 write_udp_socket, check_udp_socket)
				== NOTOK) {
			if (ps == NULLPS)
				adios (NULLCP, "ps_alloc: out of memory");
			else
				adios (NULLCP, "dg_setup: %s",
					   ps_error (ps -> ps_errno));
		}
	}
	break;
#else
	adios (NULLCP, "UDP support not configured");
#endif

	case NA_X25:
#ifdef	X25
		goto cots;
#else
		adios (NULLCP, "X.25 support not configured");
#endif

	case NA_NSAP:
#ifdef	CLTS
	{
		union sockaddr_osi lo_socket;
		union sockaddr_osi *lsock = &lo_socket;

		bzero ((char *) lsock, sizeof *lsock);
		if ((sd = start_clts_client (lsock, 0, 0, 0)) == NOTOK)
			adios ("failed", "start_clts_client");

		gen2tp4 (ta, lsock);
		if (join_clts_server (sd, lsock) == NOTOK)
			adios ("failed", "join_udp_server");

		if ((ps = ps_alloc (dg_open)) == NULLPS
				|| dg_setup (ps, sd, MAXDGRAM, read_clts_socket,
							 write_clts_socket, check_clts_socket)
				== NOTOK) {
			if (ps == NULLPS)
				adios (NULLCP, "ps_alloc: out of memory");
			else
				adios (NULLCP, "dg_setup: %s",
					   ps_error (ps -> ps_errno));
		}
	}
	break;
#else
#ifdef	TP4
	goto cots;
#else
	adios (NULLCP, "TP4 support not configured");
#endif
#endif

	default:
		adios (NULLCP, "unknown network type 0x%x", na -> na_stack);
		/* NOT REACHED */

#ifdef	COTS
cots:
		;
		{
			struct TSAPconnect tcs;
			struct TSAPconnect *tc = &tcs;
			struct TSAPdisconnect tds;
			struct TSAPdisconnect *td = &tds;

			if (verbose) {
				fprintf (stderr, "%s... ", taddr2str (ta));
				fflush (stderr);
			}
			if (TConnRequest (NULLTA, ta, 0, NULLCP, 0, NULLQOS, tc, td)
					== NOTOK) {
				if (verbose)
					fprintf (stderr," failed\n");
				adios (NULLCP, td -> td_cc > 0
					   ? "T-CONNECT.REQUEST: [%s] %*.*s"
					   : "T-CONNECT.REQUEST: [%s]",
					   TErrString (td -> td_reason),
					   td -> td_cc, td -> td_cc, td -> td_data);
			}
			fprintf (stderr, "connected\n");

			if ((ps = ps_alloc (dg_open)) == NULLPS
					|| dg_setup (ps, sd = tc -> tc_sd, MAXDGRAM, ts_read,
								 ts_write, NULLIFP) == NOTOK) {
				if (ps == NULLPS)
					adios (NULLCP, "ps_alloc: out of memory");
				else
					adios (NULLCP, "dg_setup: %s",
						   ps_error (ps -> ps_errno));
			}
		}
		break;
#endif
	}

#ifdef	SYS5
	srand ((unsigned int) time ((long *) 0));
#else
	srandom ((int) time ((long *) 0));
#endif

	ps_len_strategy = PS_LEN_LONG;

	if (loadobjects (defs) == NOTOK)
		adios (NULLCP, "loadobjects: %s", PY_pepy);
	if (defs && (ap = rindex (defs, '/')))
		ap++;
	else
		ap = defs ? defs : "";
	moresyntax (strcmp (ap, "objects.defs") == 0);
}

/*    INTERACTIVE */

static int  isode_getline (prompt, buffer)
char   *prompt,
	   *buffer;
{
	int    i;
	char  *cp,
		  *ep;
	static int  sticky = 0;

	if (interrupted) {
		interrupted = 0;
		return NOTOK;
	}

	if (sticky) {
		sticky = 0;
		return NOTOK;
	}

	switch (setjmp (intrenv)) {
	case OK:
		armed++;
		break;

	case NOTOK:
		if (ontty)
			printf ("\n");	/* and fall */
	default:
		armed = 0;
		return NOTOK;
	}

	if (ontty) {
		printf (prompt, myname);
		fflush (stdout);
	}

	for (ep = (cp = buffer) + BUFSIZ - 1; (i = getchar ()) != '\n';) {
		if (i == EOF) {
			if (ontty)
				printf ("\n");
			clearerr (stdin);
			if (cp == buffer)
				longjmp (intrenv, DONE);

			sticky++;
			break;
		}

		if (cp < ep)
			*cp++ = i;
	}
	*cp = NULL;

	armed = 0;

	return OK;
}

/*  */

/* ARGSUSED */

static	SFD intrser (sig)
int	sig;
{
#ifndef	BSDSIGS
	signal (SIGINT, intrser);
#endif

	if (armed)
		longjmp (intrenv, NOTOK);

	interrupted++;
}

/*  */

#ifndef	TIOCGWINSZ
/* ARGSUSED */
#endif

static int  ncols (fp)
FILE *fp;
{
#ifdef	TIOCGWINSZ
	int	    i;
	struct winsize ws;

	if (ioctl (fileno (fp), TIOCGWINSZ, (char *) &ws) != NOTOK
			&& (i = ws.ws_col) > 0)
		return i;
#endif

	return 80;
}

/*    ERRORS */

#ifndef	lint
static void	_advise (char* what, va_list ap);


void	adios (char *what, ...) {
	va_list ap;

	va_start (ap, what);

	_advise (what, ap);

	va_end (ap);

	_exit (1);
}
#else
/* VARARGS */

void	adios (what, fmt)
char   *what,
	   *fmt;
{
	adios (what, fmt);
}
#endif


#ifndef	lint
void	advise (char *what, ...) {
	va_list ap;

	va_start (ap, what);

	_advise (what, ap);

	va_end (ap);
}


static void  _advise (char* what, va_list ap) {
	char    buffer[BUFSIZ];

	asprintf (buffer, ap);

	fflush (stdout);

	fprintf (stderr, "%s: ", myname);
	fputs (buffer, stderr);
	fputc ('\n', stderr);

	fflush (stderr);
}
#else
/* VARARGS */

void	advise (what, fmt)
char   *what,
	   *fmt;
{
	advise (what, fmt);
}
#endif
