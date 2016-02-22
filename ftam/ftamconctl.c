/* ftamconctl.c - FPM: encode/decode concurrency control */

#ifndef	lint
static char *rcsid = "$Header: /xtel/isode/isode/ftam/RCS/ftamconctl.c,v 9.0 1992/06/16 12:14:55 isode Rel $";
#endif

/*
 * $Header: /xtel/isode/isode/ftam/RCS/ftamconctl.c,v 9.0 1992/06/16 12:14:55 isode Rel $
 *
 *
 * $Log: ftamconctl.c,v $
 * Revision 9.0  1992/06/16  12:14:55  isode
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
#include "fpkt.h"

/*    DATA */

static int fc2lock[] = {
	int_FTAM_Lock_shared, int_FTAM_Lock_exclusive,
	int_FTAM_Lock_not__required, int_FTAM_Lock_no__access
};

static int lock2fc[] = {
	FLOCK_NOTREQD, FLOCK_SHARED, FLOCK_EXCLUSIVE, FLOCK_NOACCESS
};


#define FCON_NOTREQD	0x01
#define FCON_SHARED     0x02
#define FCON_EXCLUSIVE  0x04
#define FCON_NOACCESS   0x08

struct pair fconctl_pairs [] = {
	FCON_NOTREQD, bit_FTAM_Concurrency__Key_not__required,
	FCON_SHARED, bit_FTAM_Concurrency__Key_shared,
	FCON_EXCLUSIVE, bit_FTAM_Concurrency__Key_exclusive,
	FCON_NOACCESS, bit_FTAM_Concurrency__Key_no__access,
	0, 0
};

/*  */

struct type_FTAM_Concurrency__Control *conctl2fpm (fsb, fc, fti)
struct ftamblk *fsb;
struct FTAMconcurrency *fc;
struct FTAMindication *fti;
{
	struct type_FTAM_Concurrency__Control *fpm;

	if ((fpm = (struct type_FTAM_Concurrency__Control *)
			   calloc (1, sizeof *fpm)) == NULL) {
no_mem:
		;
		(void) ftamlose (fti, FS_GEN (fsb), 1, NULLCP, "out of memory");
		if (fpm)
			free_FTAM_Concurrency__Control (fpm);
		return NULL;
	}

#define	dolock(s,t) \
{ \
    if ((fpm -> s = (struct type_FTAM_Lock *) \
			    calloc (1, sizeof *fpm -> s)) \
	    == NULL) \
	goto no_mem; \
    fpm -> s -> parm = fc2lock [fc -> t & FLOCK_MASK]; \
}
	dolock (read, fc_readlock);
	dolock (insert, fc_insertlock);
	dolock (replace, fc_replacelock);
	dolock (extend, fc_extendlock);
	dolock (erase, fc_eraselock);
	dolock (read__attribute, fc_readattrlock);
	dolock (change__attribute, fc_chngattrlock);
	dolock (delete, fc_deletelock);
#undef	dolock

	return fpm;
}

/*  */

/* ARGSUSED */

int	fpm2conctl (fsb, fpm, fc, fti)
struct ftamblk *fsb;
struct type_FTAM_Concurrency__Control *fpm;
struct FTAMconcurrency *fc;
struct FTAMindication *fti;
{
	FCINIT (fc);

#define	dolock(s,t) \
{ \
    fc -> t = lock2fc [fpm -> s -> parm]; \
}
	dolock (read, fc_readlock);
	dolock (insert, fc_insertlock);
	dolock (replace, fc_replacelock);
	dolock (extend, fc_extendlock);
	dolock (erase, fc_eraselock);
	dolock (read__attribute, fc_readattrlock);
	dolock (change__attribute, fc_chngattrlock);
	dolock (delete, fc_deletelock);
#undef	dolock

	return OK;
}

/*  */

struct type_FTAM_Concurrency__Access *conacc2fpm (fsb, fc, fti)
struct ftamblk *fsb;
struct FTAMconcurrency *fc;
struct FTAMindication *fti;
{
	struct type_FTAM_Concurrency__Access *fpm;
	int key;

	if ((fpm = (struct type_FTAM_Concurrency__Access *)
			   calloc (1, sizeof *fpm)) == NULL) {
		(void) ftamlose (fti, FS_GEN (fsb), 1, NULLCP, "out of memory");
		if (fpm)
			free_FTAM_Concurrency__Access (fpm);
		return NULL;
	}

#define dolock(s,t) \
{ \
    key = (int) (fc -> t & FLOCK_MASK); \
    fpm -> s = bits2fpm (fsb, fconctl_pairs, key, fti); \
}

	dolock (read, fc_readlock);
	dolock (insert, fc_insertlock);
	dolock (replace, fc_replacelock);
	dolock (extend, fc_extendlock);
	dolock (erase, fc_eraselock);
	dolock (read__attribute, fc_readattrlock);
	dolock (change__attribute, fc_chngattrlock);
	dolock (delete, fc_deletelock);
#undef  dolock

	return fpm;
}


int     fpm2conacc (fsb, fpm, fc, fti)
struct ftamblk *fsb;
struct type_FTAM_Concurrency__Access *fpm;
struct FTAMconcurrency *fc;
struct FTAMindication *fti;
{
	int	    key;

	FCINIT (fc);

#define dolock(s,t) \
{ \
    key = fc -> t; \
    (void) fpm2bits (fsb, fconctl_pairs, fpm -> s, &key, fti); \
}
	dolock (read, fc_readlock);
	dolock (insert, fc_insertlock);
	dolock (replace, fc_replacelock);
	dolock (extend, fc_extendlock);
	dolock (erase, fc_eraselock);
	dolock (read__attribute, fc_readattrlock);
	dolock (change__attribute, fc_chngattrlock);
	dolock (delete, fc_deletelock);
#undef  dolock

	return OK;

}
