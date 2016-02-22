/* acsaprovider.c - implement the association control protocol */

#ifndef	lint
static char *rcsid = "$Header: /xtel/isode/isode/acsap/RCS/acsaprovider.c,v 9.0 1992/06/16 12:05:59 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/acsap/RCS/acsaprovider.c,v 9.0 1992/06/16 12:05:59 isode Rel $
 *
 *
 * $Log: acsaprovider.c,v $
 * Revision 9.0  1992/06/16  12:05:59  isode
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

#include <stdio.h>
#include <signal.h>
#include "ACS-types.h"
#define	ACSE
#include "acpkt.h"
#include "tailor.h"

/*    PSAP interface */

int 
ps2acslose (struct assocblk *acb, struct AcSAPindication *aci, char *event, struct PSAPabort *pa)
{
	int     reason;
	char   *cp,
		   buffer[BUFSIZ];

	if (event)
		SLOG (addr_log, LLOG_EXCEPTIONS, NULLCP,
			  (pa -> pa_cc > 0 ? "%s: %s [%*.*s]": "%s: %s", event,
			   PErrString (pa -> pa_reason), pa -> pa_cc, pa -> pa_cc,
			   pa -> pa_data));

	cp = "";
	switch (pa -> pa_reason) {
	case PC_ADDRESS:
		reason = ACS_ADDRESS;
		break;

	case PC_REFUSED:
		reason = ACS_REFUSED;
		break;

	case PC_CONGEST:
		reason = ACS_CONGEST;
		break;

	case PC_PARAMETER:
		reason = ACS_PARAMETER;
		break;

	case PC_OPERATION:
		reason = ACS_OPERATION;
		break;

	case PC_TIMER:
		reason = ACS_TIMER;
		break;

	default:
		(void) sprintf (cp = buffer, " (%s at presentation)",
						PErrString (pa -> pa_reason));
	case PC_SESSION:
		reason = ACS_PRESENTATION;
		break;
	}

	if (ACS_FATAL (reason)) {
		if (pa -> pa_cc > 0)
			return acpktlose (acb, aci, reason, NULLCP, "%*.*s%s",
							  pa -> pa_cc, pa -> pa_cc, pa -> pa_data, cp);
		else
			return acpktlose (acb, aci, reason, NULLCP, "%s",
							  *cp ? cp + 1 : cp);
	} else {
		if (pa -> pa_cc > 0)
			return acsaplose (aci, reason, NULLCP, "%*.*s%s",
							  pa -> pa_cc, pa -> pa_cc, pa -> pa_data, cp);
		else
			return acsaplose (aci, reason, NULLCP, "%s",
							  *cp ? cp + 1 : cp);
	}
}

/*    INTERNAL */

/*
   Owing to laziness on our part, we use only ASN.1 transfer syntax.
 */

/* ARGSUSED */

struct type_ACS_Association__information *
info2apdu (struct assocblk *acb, struct AcSAPindication *aci, PE *data, int ndata)
{
	PE	    pe;
	struct type_ACS_Association__information *info;
	struct type_ACS_Association__information **pp,
			*p;
	struct type_UNIV_EXTERNAL *q;

	for (pp = &info; ndata-- > 0; pp = &p -> next) {
		if ((*pp = p = (struct type_ACS_Association__information *)
					   calloc (1, sizeof *p)) == NULL
				|| (p -> EXTERNAL = (struct type_UNIV_EXTERNAL *)
									calloc (1, sizeof *q)) == NULL
				|| (p -> EXTERNAL -> encoding = (struct choice_UNIV_0 *)
												malloc (sizeof (struct choice_UNIV_0))) == NULL)
			goto out;
		q = p -> EXTERNAL;

		if (!(acb -> acb_flags & ACB_CONN)
				&& (q -> direct__reference = oid_cpy (BER_OID))
				== NULLOID)
			goto out;
		q -> indirect__reference = (pe = *data++) -> pe_context;
		q -> encoding -> offset = choice_UNIV_0_single__ASN1__type;
		(q -> encoding -> un.single__ASN1__type = pe) -> pe_refcnt++;
	}
	(*pp) = NULL;

	return info;

out:
	;
	free_ACS_Association__information (info);

	(void) acsaplose (aci, ACS_CONGEST, NULLCP, "out of memory");

	return NULL;
}

/*  */

/* ARGSUSED */

int 
apdu2info (struct assocblk *acb, struct AcSAPindication *aci, struct type_ACS_Association__information *info, PE *data, int *ndata)
{
	int    i;
	PE	    pe;
	struct type_UNIV_EXTERNAL *q;

	for (i = 0; info; info = info -> next, i++) {
		if (i > NACDATA)
			return acpktlose (acb, aci, ACS_CONGEST, NULLCP,
							  "too much user information");

		q = info -> EXTERNAL;
		if (q -> encoding -> offset != choice_UNIV_0_single__ASN1__type)
			return acpktlose (acb, aci, ACS_PROTOCOL, NULLCP,
							  "EXTERNAL data not single-ASN1-type");

		(pe = q -> encoding -> un.single__ASN1__type) -> pe_refcnt++;
		pe -> pe_context = q -> indirect__reference;

		*data++ = pe;
	}
	*ndata = i;

	return OK;
}
