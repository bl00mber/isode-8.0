/* udp.c - MIB realization of the UDP group */

#ifndef	lint
static char *rcsid = "$Header: /xtel/isode/isode/snmp/RCS/udp.c,v 9.0 1992/06/16 12:38:11 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/snmp/RCS/udp.c,v 9.0 1992/06/16 12:38:11 isode Rel $
 *
 * Contributed by NYSERNet Inc.  This work was partially supported by the
 * U.S. Defense Advanced Research Projects Agency and the Rome Air Development
 * Center of the U.S. Air Force Systems Command under contract number
 * F30602-88-C-0016.
 *
 *
 * $Log: udp.c,v $
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


#include <stdio.h>
#include "mib.h"

#include "internet.h"
#ifdef	BSD44
#include <sys/param.h>
#endif
#include <net/route.h>
#include "std-legacy/netinet/in_systm.h"
// #include "std-legacy/netinet/ip_.h"
#include "std-legacy/netinet/in_pcb2.h"
#include "std-legacy/netinet/ip_var.h"
#include "std-legacy/netinet/udp.h"
#include "std-legacy/netinet/udp_var.h"

// #include <sys/socketvar.h>
#define _WANT_SOCKET 1
#include "std-legacy/sys/socketvar2.h"

/*  */

static struct udpstat udpstat;

/*  */

#ifdef	BSD44
#define	udpInDatagrams	1
#define	udpNoPorts	2
#endif
#define	udpInErrors	3
#ifdef	BSD44
#define	udpOutDatagrams 4
#endif

static int  get_listeners (int	offset);
static struct udptab *get_udpent (unsigned int *ip, int	isnext);


static int  o_udp (oi, v, offset)
OI	oi;
struct type_SNMP_VarBind *v;
int	offset;
{
	int	    ifvar;
	struct udpstat *udps = &udpstat;
	OID    oid = oi -> oi_name;
	OT	    ot = oi -> oi_type;
	static   int lastq = -1;

	ifvar = (int) ot -> ot_info;
	switch (offset) {
	case type_SNMP_PDUs_get__request:
		if (oid -> oid_nelem != ot -> ot_name -> oid_nelem + 1
				|| oid -> oid_elements[oid -> oid_nelem - 1] != 0)
			return int_SNMP_error__status_noSuchName;
		break;

	case type_SNMP_PDUs_get__next__request:
		if (oid -> oid_nelem == ot -> ot_name -> oid_nelem) {
			OID	new;

			if ((new = oid_extend (oid, 1)) == NULLOID)
				return NOTOK;
			new -> oid_elements[new -> oid_nelem - 1] = 0;

			if (v -> name)
				free_SNMP_ObjectName (v -> name);
			v -> name = new;
		} else
			return NOTOK;
		break;

	default:
		return int_SNMP_error__status_genErr;
	}

	if (quantum != lastq) {
		lastq = quantum;

		if (getkmem (nl + N_UDPSTAT, (caddr_t) udps, sizeof *udps) == NOTOK)
			return generr (offset);
	}

	switch (ifvar) {
#ifdef	udpInDatagrams
	case udpInDatagrams:
		return o_integer (oi, v, udps -> udps_ipackets);
#endif

#ifdef	udpNoPorts
	case udpNoPorts:
		return o_integer (oi, v, udps -> udps_noport);
#endif

	case udpInErrors:
		return o_integer (oi, v, udps -> udps_hdrops
						  + udps -> udps_badsum
						  + udps -> udps_badlen);

#ifdef	udpOutDatagrams
	case udpOutDatagrams:
		return o_integer (oi, v, udps -> udps_opackets);
#endif

	default:
		return int_SNMP_error__status_noSuchName;
	}
}

/*  */

struct udptab {
#define	UT_SIZE	5			/* object instance */
	unsigned int   ut_instance[UT_SIZE];

	struct inpcb   ut_pcb;		/* protocol control block */

	struct socket  ut_socb;		/* socket info */

	struct udptab *ut_next;
};

static struct udptab *uts = NULL;

static	int	flush_udp_cache = 0;


struct udptab *get_udpent ();

/*  */

#define	udpLocalAddress 0
#define	udpLocalPort 1
#define	unixUdpRemAddress 2
#define	unixUdpRemPort 3
#define	unixUdpSendQ 4
#define	unixUdpRecvQ 5


static int  o_udp_listen (oi, v, offset)
OI	oi;
struct type_SNMP_VarBind *v;
int	offset;
{
	int	    ifvar;
	int    i;
	unsigned int *ip,
			 *jp;
	struct udptab *ut;
	struct sockaddr_in netaddr;
	OID    oid = oi -> oi_name;
	OID	    new;
	OT	    ot = oi -> oi_type;

	if (get_listeners (offset) == NOTOK)
		return generr (offset);

	ifvar = (int) ot -> ot_info;
	switch (offset) {
	case type_SNMP_PDUs_get__request:
		if (oid -> oid_nelem != ot -> ot_name -> oid_nelem + UT_SIZE)
			return int_SNMP_error__status_noSuchName;
		if ((ut = get_udpent (oid -> oid_elements + oid -> oid_nelem
							  - UT_SIZE, 0)) == NULL)
			return int_SNMP_error__status_noSuchName;
		break;

	case type_SNMP_PDUs_get__next__request:
		if ((i = oid -> oid_nelem - ot -> ot_name -> oid_nelem) != 0
				&& i < UT_SIZE) {
			for (jp = (ip = oid -> oid_elements + ot -> ot_name -> oid_nelem - 1) + i;
					jp > ip;
					jp--)
				if (*jp != 0)
					break;
			if (jp == ip)
				oid -> oid_nelem = ot -> ot_name -> oid_nelem;
			else {
				if ((new = oid_normalize (oid, UT_SIZE - i, 65536))
						== NULLOID)
					return NOTOK;
				if (v -> name)
					free_SNMP_ObjectName (v -> name);
				v -> name = oid = new;
			}
		} else if (i > UT_SIZE)
			oid -> oid_nelem = ot -> ot_name -> oid_nelem + UT_SIZE;

		if (oid -> oid_nelem == ot -> ot_name -> oid_nelem) {
			if ((ut = uts) == NULL)
				return NOTOK;

			if ((new = oid_extend (oid, UT_SIZE)) == NULLOID)
				return NOTOK;
			ip = new -> oid_elements + new -> oid_nelem - UT_SIZE;
			jp = ut -> ut_instance;
			for (i = UT_SIZE; i > 0; i--)
				*ip++ = *jp++;

			if (v -> name)
				free_SNMP_ObjectName (v -> name);
			v -> name = new;
		} else {
			if ((ut = get_udpent (ip = oid -> oid_elements
									   + oid -> oid_nelem - UT_SIZE, 1))
					== NULL)
				return NOTOK;

			jp = ut -> ut_instance;
			for (i = UT_SIZE; i > 0; i--)
				*ip++ = *jp++;
		}
		break;

	default:
		return int_SNMP_error__status_genErr;
	}

	switch (ifvar) {
	case udpLocalAddress:
		netaddr.sin_addr = ut -> ut_pcb.inp_laddr;	/* struct copy */
		return o_ipaddr (oi, v, &netaddr);

	case udpLocalPort:
		return o_integer (oi, v, ntohs (ut -> ut_pcb.inp_lport) & 0xffff);

	case unixUdpRemAddress:
		netaddr.sin_addr = ut -> ut_pcb.inp_faddr;	/* struct copy */
		return o_ipaddr (oi, v, &netaddr);

	case unixUdpRemPort:
		return o_integer (oi, v, ntohs (ut -> ut_pcb.inp_fport) & 0xffff);

	case unixUdpSendQ:
		return o_integer (oi, v, ut -> ut_socb.so_snd.sb_cc);

	case unixUdpRecvQ:
		return o_integer (oi, v, ut -> ut_socb.so_rcv.sb_cc);

	default:
		return int_SNMP_error__status_noSuchName;
	}
}

/*  */

static int  ut_compar (a, b)
struct udptab **a,
		   **b;
{
	return elem_cmp ((*a) -> ut_instance, UT_SIZE,
					 (*b) -> ut_instance, UT_SIZE);
}


static int  get_listeners (offset)
int	offset;
{
	int    i;
	unsigned int  *cp;
	struct udptab *us,
			   *up,
			   **usp;
	struct inpcb  *ip;
	struct inpcb *head,
			   udb,
			   zdb;
	struct nlist nzs;
	struct nlist *nz = &nzs;
	static   int first_time = 1;
	static   int lastq = -1;

	if (quantum == lastq)
		return OK;
	if (!flush_udp_cache
			&& offset == type_SNMP_PDUs_get__next__request
			&& quantum == lastq + 1) {			/* XXX: caching! */
		lastq = quantum;
		return OK;
	}
	lastq = quantum, flush_udp_cache = 0;

	for (us = uts; us; us = up) {
		up = us -> ut_next;

		free ((char *) us);
	}
	uts = NULL;

	if (getkmem (nl + N_UDB, (char *) &udb, sizeof udb) == NOTOK)
		return NOTOK;
	head = (struct inpcb *) nl[N_UDB].n_value;

	usp = &uts, i = 0;
	ip = &udb;
	while (ip -> inp_next != head) {
		struct udptab *uz;
		OIDentifier	oids;

		if ((us = (struct udptab *) calloc (1, sizeof *us)) == NULL)
			adios (NULLCP, "out of memory");

		nz -> n_name = "struct inpcb",
			  nz -> n_value = (unsigned long) ip -> inp_next;
		if (getkmem (nz, (caddr_t) &us -> ut_pcb, sizeof us -> ut_pcb)
				== NOTOK)
			return NOTOK;
		ip = &us -> ut_pcb;

		nz ->n_name = "struct socket",
			 nz -> n_value = (unsigned long) ip -> inp_socket;
		if (getkmem (nz, (caddr_t) &us -> ut_socb, sizeof us -> ut_socb)
				== NOTOK)
			return NOTOK;

		cp = us -> ut_instance;
		cp += ipaddr2oid (cp, &ip -> inp_laddr);
		*cp++ = ntohs (ip -> inp_lport) & 0xffff;

		for (uz = uts; uz; uz = uz -> ut_next)
			if (elem_cmp (uz -> ut_instance, UT_SIZE,
						  us -> ut_instance, UT_SIZE) == 0)
				break;
		if (uz) {
			if (first_time) {
				oids.oid_elements = us -> ut_instance;
				oids.oid_nelem = UT_SIZE;
				advise (LLOG_EXCEPTIONS, NULLCP,
						"duplicate listeners: %s", sprintoid (&oids));
			}

			*(ip = &zdb) = us -> ut_pcb;	/* struct copy */
			free ((char *) us);
			continue;
		}
		*usp = us, usp = &us -> ut_next, i++;

		if (debug && first_time) {
			oids.oid_elements = us -> ut_instance;
			oids.oid_nelem = UT_SIZE;
			advise (LLOG_DEBUG, NULLCP,
					"add listener: %s", sprintoid (&oids));
		}
	}
	first_time = 0;

	if (i > 1) {
		struct udptab **base,
				   **use;

		if ((base = (struct udptab **) malloc ((unsigned) (i * sizeof *base)))
				== NULL)
			adios (NULLCP, "out of memory");

		use = base;
		for (us = uts; us; us = us -> ut_next)
			*use++ = us;

		qsort ((char *) base, i, sizeof *base, (IFP)ut_compar);

		usp = base;
		us = uts = *usp++;

		while (usp < use) {
			us -> ut_next = *usp;
			us = *usp++;
		}
		us -> ut_next = NULL;

		free ((char *) base);
	}

	return OK;
}

/*  */

static struct udptab *get_udpent (ip, isnext)
unsigned int *ip;
int	isnext;
{
	struct udptab *ut;

	for (ut = uts; ut; ut = ut -> ut_next)
		switch (elem_cmp (ut -> ut_instance, UT_SIZE, ip, UT_SIZE)) {
		case 0:
			if (!isnext)
				return ut;
			if ((ut = ut -> ut_next) == NULL)
				goto out;
		/* else fall... */

		case 1:
			return (isnext ? ut : NULL);
		}

out:
	;
	flush_udp_cache = 1;

	return NULL;
}

/*  */

init_udp () {
	OT	    ot;

#ifdef	udpInDatagrams
	if (ot = text2obj ("udpInDatagrams"))
		ot -> ot_getfnx = o_udp,
			  ot -> ot_info = (caddr_t) udpInDatagrams;
#endif
#ifdef	udpNoPorts
	if (ot = text2obj ("udpNoPorts"))
		ot -> ot_getfnx = o_udp,
			  ot -> ot_info = (caddr_t) udpNoPorts;
#endif
	if (ot = text2obj ("udpInErrors"))
		ot -> ot_getfnx = o_udp,
			  ot -> ot_info = (caddr_t) udpInErrors;
#ifdef	udpOutDatagrams
	if (ot = text2obj ("udpOutDatagrams"))
		ot -> ot_getfnx = o_udp,
			  ot -> ot_info = (caddr_t) udpOutDatagrams;
#endif

	if (ot = text2obj ("udpLocalAddress"))
		ot -> ot_getfnx = o_udp_listen,
			  ot -> ot_info = (caddr_t) udpLocalAddress;
	if (ot = text2obj ("udpLocalPort"))
		ot -> ot_getfnx = o_udp_listen,
			  ot -> ot_info = (caddr_t) udpLocalPort;

	if (ot = text2obj ("unixUdpRemAddress"))
		ot -> ot_getfnx = o_udp_listen,
			  ot -> ot_info = (caddr_t) unixUdpRemAddress;
	if (ot = text2obj ("unixUdpRemPort"))
		ot -> ot_getfnx = o_udp_listen,
			  ot -> ot_info = (caddr_t) unixUdpRemPort;
	if (ot = text2obj ("unixUdpSendQ"))
		ot -> ot_getfnx = o_udp_listen,
			  ot -> ot_info = (caddr_t) unixUdpSendQ;
	if (ot = text2obj ("unixUdpRecvQ"))
		ot -> ot_getfnx = o_udp_listen,
			  ot -> ot_info = (caddr_t) unixUdpRecvQ;
}
