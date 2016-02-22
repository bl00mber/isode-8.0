/* ssapresync2.c - SPM: respond to resyncs */

#ifndef	lint
static char *rcsid = "$Header: /xtel/isode/isode/ssap/RCS/ssapresync2.c,v 9.0 1992/06/16 12:39:41 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/ssap/RCS/ssapresync2.c,v 9.0 1992/06/16 12:39:41 isode Rel $
 *
 *
 * $Log: ssapresync2.c,v $
 * Revision 9.0  1992/06/16  12:39:41  isode
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
#include "spkt.h"

static int SReSyncResponseAux ();

/*    S-RESYNCHRONIZE.RESPONSE */

int 
SReSyncResponse (int sd, long ssn, int settings, char *data, int cc, struct SSAPindication *si)
{
	SBV	    smask;
	int     result;
	struct ssapblk *sb;

	missingP (si);

	smask = sigioblock ();

	ssapRsig (sb, sd);
	toomuchP (sb, data, cc, SN_SIZE, "resync");

	result = SReSyncResponseAux (sb, ssn, settings, data, cc, si);

	(void) sigiomask (smask);

	return result;
}

/*  */

static int 
SReSyncResponseAux (struct ssapblk *sb, long ssn, int settings, char *data, int cc, struct SSAPindication *si)
{
	int	    result;

	if (!(sb -> sb_requirements & SR_RESYNC))
		return ssaplose (si, SC_OPERATION, NULLCP,
						 "resynchronize service unavailable");
	if (!(sb -> sb_flags & SB_RA))
		return ssaplose (si, SC_OPERATION, NULLCP,
						 "no resync in progress");

	switch (sb -> sb_rs) {
	case SYNC_RESTART:
		ssn = sb -> sb_rsn;
		break;

	case SYNC_ABANDON:
		ssn = sb -> sb_V_A;
		break;

	case SYNC_SET:
		break;
	}

#define	dotoken(requires,shift,bit,type) \
{ \
    if (sb -> sb_requirements & requires) \
	switch (sb -> sb_rsettings & (ST_MASK << shift)) { \
	    dotoken1 (requires,shift,bit,type); \
 \
	    dotoken2 (requires,shift,bit,type); \
	} \
}
#define	dotoken1(requires,shift,bit,type) \
	    case ST_CALL_VALUE << shift: \
		switch (settings & (ST_MASK << shift)) { \
		    case ST_INIT_VALUE << shift: \
			settings &= ~(ST_MASK << shift); \
			settings |= ST_INIT_VALUE << shift; \
			break; \
 \
		    case ST_RESP_VALUE << shift: \
			settings &= ~(ST_MASK << shift); \
			settings |= ST_RESP_VALUE << shift; \
			break; \
 \
		    default: \
			return ssaplose (si, SC_PARAMETER, NULLCP, \
				"improper choice of %s token setting", type); \
		} \
		break;
#define	dotoken2(requires,shift,bit,type) \
	    default: \
		if ((sb -> sb_rsettings & (ST_MASK << shift)) \
			!= (settings & (ST_MASK << shift))) \
		    return ssaplose (si, SC_OPERATION, NULLCP, \
			    "setting of %s token is not your choice"); \
		break;
	dotokens ();
#undef	dotoken
#undef	dotoken1
#undef	dotoken2

	if ((result = SWriteRequestAux (sb, SPDU_RA, data, cc, 0, ssn,
									settings, NULLSD, NULLSD, NULLSR, si)) == NOTOK)
		freesblk (sb);
	else {
		sb -> sb_flags &= ~SB_RA;
		sb -> sb_V_A = sb -> sb_V_M = ssn;
		if (sb -> sb_rs != SYNC_RESTART)
			sb -> sb_V_R = 0;

#define	dotoken(requires,shift,bit,type) \
{ \
	if (sb -> sb_requirements & requires) \
	    switch (settings & (ST_MASK << shift)) { \
		case ST_INIT_VALUE << shift: \
		    if (sb -> sb_flags & SB_INIT) \
			sb -> sb_owned |= bit; \
		    else \
			sb -> sb_owned &= ~bit; \
		    break; \
 \
		case ST_RESP_VALUE << shift: \
		    if (!(sb -> sb_flags & SB_INIT)) \
			sb -> sb_owned |= bit; \
		    else \
			sb -> sb_owned &= ~bit; \
		    break; \
	    } \
}
		dotokens ();
#undef	dotoken
	}

	return result;
}
