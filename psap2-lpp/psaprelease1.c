/* psaprelease1.c - PPM: initiate release */

#ifndef	lint
static char *rcsid = "$Header: /xtel/isode/isode/psap2-lpp/RCS/psaprelease1.c,v 9.0 1992/06/16 12:31:57 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/psap2-lpp/RCS/psaprelease1.c,v 9.0 1992/06/16 12:31:57 isode Rel $
 *
 * Contributed by The Wollongong Group, Inc.
 *
 *
 * $Log: psaprelease1.c,v $
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

#include <stdio.h>
#include <signal.h>
#define	LPP
#include "PS-types.h"
#include "ppkt.h"
#include "tailor.h"

static int  PRelRequestAux (struct psapblk *pb, PE	data, struct PSAPrelease *pr, struct PSAPindication *pi);

/*    P-RELEASE.REQUEST */

int	PRelRequest (sd, data, ndata, secs, pr, pi)
int	sd;
PE     *data;
int	ndata;
int	secs;
struct PSAPrelease *pr;
struct PSAPindication *pi;
{
	SBV	    smask;
	int	    result;
	struct psapblk *pb;

	if (data == NULL || ndata <= 0 || data[0] == NULLPE || ndata > NPDATA_PS)
		return psaplose (pi, PC_PARAMETER, NULLCP, "bad release user data");
	if (data[0] -> pe_context != PCI_ACSE)
		return psaplose (pi, PC_PARAMETER, NULLCP,
						 "wrong context for release user data");
	if (secs != NOTOK)
		return psaplose (pi, PC_PARAMETER, NULLCP,
						 "asynchronous release not supported");
	missingP (pr);
	missingP (pi);

	smask = sigioblock ();

	psapPsig (pb, sd);

	if ((result = PRelRequestAux (pb, data[0], pr, pi)) == DONE)
		result = OK;
	else
		freepblk (pb);

	sigiomask (smask);

	return result;
}

/*  */

static int  PRelRequestAux (pb, data, pr, pi)
struct psapblk *pb;
PE	data;
struct PSAPrelease *pr;
struct PSAPindication *pi;
{
	int	    result;
	PE	    pe;
	PS	    ps;
	struct type_PS_PDUs *pdu;
	struct type_PS_ReleaseRequest__PDU *rr;

	pdu = NULL;
	if ((rr = (struct type_PS_ReleaseRequest__PDU *) malloc (sizeof *rr))
			== NULL) {
		result = psaplose (pi, PC_CONGEST, NULLCP, "out of memory");
		goto out;
	}
	rr -> reference = pb -> pb_reliability == LOW_QUALITY ? pb -> pb_reference
					  : NULLRF;
	rr -> user__data = data;

	result = encode_PS_ReleaseRequest__PDU (&pb -> pb_retry, 1, 0, NULLCP, rr);

	rr -> reference = NULL;
	rr -> user__data = NULLPE;
	free_PS_ReleaseRequest__PDU (rr);
	rr = NULL;

	if (result == NOTOK) {
		psaplose (pi, PC_CONGEST, NULLCP, "error encoding PDU: %s",
				  PY_pepy);
		goto out;
	}

	switch (pb -> pb_reliability) {
	case HIGH_QUALITY:
	default:
		PLOGP (psap2_log,PS_PDUs, pb -> pb_retry,
			   "ReleaseRequest-PDU", 0);

		result = pe2ps (ps = pb -> pb_stream, pb -> pb_retry);

		pe_free (pb -> pb_retry);
		pb -> pb_retry = NULLPE;

		if (result == NOTOK
				|| (pb -> pb_response = ps2pe (ps)) == NULLPE) {
			result = pslose (pi, ps -> ps_errno);
			goto out;
		}
		break;

	case LOW_QUALITY:
		pb -> pb_tries = pb -> pb_maxtries;

again:
		;
		for (;;) {
			switch ((*pb -> pb_retryfnx) (pb, PC_SESSION, pi)) {
			case NOTOK:
				result = NOTOK;
				goto out;

			case OK:
				continue;

			case DONE:
			default:
				break;
			}
			break;
		}

		pdu = NULL;
		break;
	}

	result = decode_PS_PDUs (pb -> pb_response, 1, NULLIP, NULLVP, &pdu);

#ifdef	DEBUG
	if (result == OK && (psap2_log -> ll_events & LLOG_PDUS))
		pvpdu (psap2_log, print_PS_PDUs_P, pb -> pb_response, "PDU", 1);
#endif

	if (result == NOTOK) {
		if (pb -> pb_reliability == LOW_QUALITY)
			goto bad_ref;

		ppktlose (pb, pi, PC_UNRECOGNIZED, NULLRF, NULLCP,
				  "error decoding PDU: %s", PY_pepy);
		goto out;
	}

	switch (pdu -> offset) {
	case type_PS_PDUs_releaseResponse: {
		struct type_PS_ReleaseResponse__PDU *rp =
				pdu -> un.releaseResponse;

		if (pb -> pb_reliability == LOW_QUALITY
				&& refcmp (pb -> pb_reference, rp -> reference)) {
			ppktlose (pb, pi, PC_SESSION, rp -> reference,
					  NULLCP, "reference mismatch");

bad_ref:
			;
			if (pdu)
				free_PS_PDUs (pdu);
			goto again;
		}

		pe = rp -> user__data, rp -> user__data = NULLPE;

		pr -> pr_affirmative = 1;
		(pr -> pr_info[0] = pe) -> pe_context = PCI_ACSE;
		pr -> pr_ninfo = 1;

		result = OK;
	}
	break;

	case type_PS_PDUs_abort: {
		struct PSAPabort *pa = &pi -> pi_abort;
		struct type_PS_Abort__PDU *ab = pdu -> un.abort;

		if (pb -> pb_reliability == LOW_QUALITY
				&& refcmp (pb -> pb_reference, ab -> reference))
			goto bad_ref;

		if (ab -> reason) {
			switch (ab -> reason -> parm) {
			case int_PS_Abort__reason_reason__not__specified:
			default:
				result = PC_NOTSPECIFIED;
				break;

			case int_PS_Abort__reason_unrecognized__ppdu:
			case int_PS_Abort__reason_unexpected__ppdu:
			case int_PS_Abort__reason_unrecognized__ppdu__parameter:
				result = PC_UNRECOGNIZED
						 + (ab -> reason -> parm
							- int_PS_Abort__reason_unrecognized__ppdu);
				break;

			case int_PS_Abort__reason_invalid__ppdu__parameter:
				result = PC_INVALID;
				break;

			case int_PS_Abort__reason_reference__mismatch:
				result = PC_SESSION;
				break;
			}
			result = psaplose (pi, result, NULLCP, NULLCP);
			break;
		}
		pe = ab -> user__data, ab -> user__data = NULLPE;

		pi -> pi_type = PI_ABORT;
		bzero ((char *) pa, sizeof *pa);

		pa -> pa_peer = 1;
		pa -> pa_reason = PC_ABORTED;
		(pa -> pa_info[0] = pe) -> pe_context = PCI_ACSE;
		pa -> pa_ninfo = 1;

		result = NOTOK;
	}
	break;

	default:
		/* this works 'cause the "reference" is always the FIRST element */
		result = ppktlose (pb, pi, PC_SESSION,
						   pdu -> un.connectResponse -> reference, NULLCP,
						   "unexpected PDU %d", pdu -> offset);
		break;
	}

out:
	;
	if (pdu)
		free_PS_PDUs (pdu);
	if (rr)
		free_PS_ReleaseRequest__PDU (rr);

	return result;
}

/*  */

/* ARGSUSED */

int	PRelRetryRequest (sd, secs, pr, pi)
int	sd;
int	secs;
struct PSAPrelease *pr;
struct PSAPindication *pi;
{
	return psaplose (pi, PC_OPERATION, "release not in progress");
}
