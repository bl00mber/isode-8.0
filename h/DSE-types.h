/* automatically generated by pepsy 8.0 #17 (ubuntu-vm), do not edit! */

#ifndef	_module_DSE_defined_
#define	_module_DSE_defined_

#ifndef	PEPSY_VERSION
#define	PEPSY_VERSION		2
#endif

#ifndef	PEPYPATH
#include <isode/psap.h>
#include <isode/pepsy.h>
#include <isode/pepsy/UNIV-types.h>
#else
#include "psap.h"
#include "pepsy.h"
#include "UNIV-types.h"
#endif



extern modtyp	_ZDSE_mod;
#define _ZPSAPaddrDSE	0

#ifndef	lint
#define encode_DSE_PSAPaddr(pe, top, len, buffer, parm) \
    enc_f(_ZPSAPaddrDSE, &_ZDSE_mod, pe, top, len, buffer, (char *) parm)

#define decode_DSE_PSAPaddr(pe, top, len, buffer, parm) \
    dec_f(_ZPSAPaddrDSE, &_ZDSE_mod, pe, top, len, buffer, (char **) parm)

#define print_DSE_PSAPaddr(pe, top, len, buffer, parm) \
    prnt_f(_ZPSAPaddrDSE, &_ZDSE_mod, pe, top, len, buffer)
#define print_DSE_PSAPaddr_P    _ZPSAPaddrDSE, &_ZDSE_mod


#endif   /* lint */

struct type_DSE_PSAPaddr {
    struct qbuf *pSelector;

    struct qbuf *sSelector;

    struct qbuf *tSelector;

    struct member_DSE_0 {
        struct qbuf *member_DSE_1;

        struct member_DSE_0 *next;
    } *nAddress;
};
#define	free_DSE_PSAPaddr(parm)\
	 fre_obj((char *) parm, _ZDSE_mod.md_dtab[_ZPSAPaddrDSE], &_ZDSE_mod, 1)
#endif
