/* automatically generated by pepsy 8.0 #17 (ubuntu-vm), do not edit! */

#ifndef	_module_CONT_defined_
#define	_module_CONT_defined_

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



extern modtyp	_ZCONT_mod;
#define _ZFile_Contents_Data_ElementCONT	0

#ifndef	lint
#define encode_CONT_File__Contents__Data__Element(pe, top, len, buffer, parm) \
    enc_f(_ZFile_Contents_Data_ElementCONT, &_ZCONT_mod, pe, top, len, buffer, (char *) parm)

#define decode_CONT_File__Contents__Data__Element(pe, top, len, buffer, parm) \
    dec_f(_ZFile_Contents_Data_ElementCONT, &_ZCONT_mod, pe, top, len, buffer, (char **) parm)

#define print_CONT_File__Contents__Data__Element(pe, top, len, buffer, parm) \
    prnt_f(_ZFile_Contents_Data_ElementCONT, &_ZCONT_mod, pe, top, len, buffer)
#define print_CONT_File__Contents__Data__Element_P    _ZFile_Contents_Data_ElementCONT, &_ZCONT_mod


#endif   /* lint */

#define	type_CONT_File__Contents__Data__Element	PElement
#define	free_CONT_File__Contents__Data__Element	pe_free
#endif
