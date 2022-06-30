/* automatically generated by pepsy 8.0 #17 (ubuntu-vm), do not edit! */

#ifndef	_module_SA_defined_
#define	_module_SA_defined_

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



extern modtyp	_ZSA_mod;
#define _ZCriteriaSA	6
#define _ZCriteriaItemSA	5
#define _ZFacsimileTelephoneNumberSA	0
#define _ZPostalAddressSA	1
#define _ZNadfGuideSA	8
#define _ZGuideSA	7
#define _ZTelexNumberSA	2
#define _ZTeletexTerminalIdentifierSA	3
#define _ZPreferredDeliveryMethodSA	4
#define _ZCaseIgnoreListSA	9

#ifndef	lint
#define encode_SA_FacsimileTelephoneNumber(pe, top, len, buffer, parm) \
    enc_f(_ZFacsimileTelephoneNumberSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_FacsimileTelephoneNumber(pe, top, len, buffer, parm) \
    dec_f(_ZFacsimileTelephoneNumberSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_FacsimileTelephoneNumber(pe, top, len, buffer, parm) \
    prnt_f(_ZFacsimileTelephoneNumberSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_FacsimileTelephoneNumber_P    _ZFacsimileTelephoneNumberSA, &_ZSA_mod

#define encode_SA_PostalAddress(pe, top, len, buffer, parm) \
    enc_f(_ZPostalAddressSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_PostalAddress(pe, top, len, buffer, parm) \
    dec_f(_ZPostalAddressSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_PostalAddress(pe, top, len, buffer, parm) \
    prnt_f(_ZPostalAddressSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_PostalAddress_P    _ZPostalAddressSA, &_ZSA_mod

#define encode_SA_TelexNumber(pe, top, len, buffer, parm) \
    enc_f(_ZTelexNumberSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_TelexNumber(pe, top, len, buffer, parm) \
    dec_f(_ZTelexNumberSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_TelexNumber(pe, top, len, buffer, parm) \
    prnt_f(_ZTelexNumberSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_TelexNumber_P    _ZTelexNumberSA, &_ZSA_mod

#define encode_SA_TeletexTerminalIdentifier(pe, top, len, buffer, parm) \
    enc_f(_ZTeletexTerminalIdentifierSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_TeletexTerminalIdentifier(pe, top, len, buffer, parm) \
    dec_f(_ZTeletexTerminalIdentifierSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_TeletexTerminalIdentifier(pe, top, len, buffer, parm) \
    prnt_f(_ZTeletexTerminalIdentifierSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_TeletexTerminalIdentifier_P    _ZTeletexTerminalIdentifierSA, &_ZSA_mod

#define encode_SA_PreferredDeliveryMethod(pe, top, len, buffer, parm) \
    enc_f(_ZPreferredDeliveryMethodSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_PreferredDeliveryMethod(pe, top, len, buffer, parm) \
    dec_f(_ZPreferredDeliveryMethodSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_PreferredDeliveryMethod(pe, top, len, buffer, parm) \
    prnt_f(_ZPreferredDeliveryMethodSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_PreferredDeliveryMethod_P    _ZPreferredDeliveryMethodSA, &_ZSA_mod

#define encode_SA_CriteriaItem(pe, top, len, buffer, parm) \
    enc_f(_ZCriteriaItemSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_CriteriaItem(pe, top, len, buffer, parm) \
    dec_f(_ZCriteriaItemSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_CriteriaItem(pe, top, len, buffer, parm) \
    prnt_f(_ZCriteriaItemSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_CriteriaItem_P    _ZCriteriaItemSA, &_ZSA_mod

#define encode_SA_Criteria(pe, top, len, buffer, parm) \
    enc_f(_ZCriteriaSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_Criteria(pe, top, len, buffer, parm) \
    dec_f(_ZCriteriaSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_Criteria(pe, top, len, buffer, parm) \
    prnt_f(_ZCriteriaSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_Criteria_P    _ZCriteriaSA, &_ZSA_mod

#define encode_SA_Guide(pe, top, len, buffer, parm) \
    enc_f(_ZGuideSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_Guide(pe, top, len, buffer, parm) \
    dec_f(_ZGuideSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_Guide(pe, top, len, buffer, parm) \
    prnt_f(_ZGuideSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_Guide_P    _ZGuideSA, &_ZSA_mod

#define encode_SA_NadfGuide(pe, top, len, buffer, parm) \
    enc_f(_ZNadfGuideSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_NadfGuide(pe, top, len, buffer, parm) \
    dec_f(_ZNadfGuideSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_NadfGuide(pe, top, len, buffer, parm) \
    prnt_f(_ZNadfGuideSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_NadfGuide_P    _ZNadfGuideSA, &_ZSA_mod

#define encode_SA_CaseIgnoreList(pe, top, len, buffer, parm) \
    enc_f(_ZCaseIgnoreListSA, &_ZSA_mod, pe, top, len, buffer, (char *) parm)

#define decode_SA_CaseIgnoreList(pe, top, len, buffer, parm) \
    dec_f(_ZCaseIgnoreListSA, &_ZSA_mod, pe, top, len, buffer, (char **) parm)

#define print_SA_CaseIgnoreList(pe, top, len, buffer, parm) \
    prnt_f(_ZCaseIgnoreListSA, &_ZSA_mod, pe, top, len, buffer)
#define print_SA_CaseIgnoreList_P    _ZCaseIgnoreListSA, &_ZSA_mod


#endif   /* lint */
#include "if-cdefs.h"
#ifndef	PEPYPATH
#include "IF-types.h"
#else
#include "IF-types.h"
#endif



struct type_SA_FacsimileTelephoneNumber {
    struct	qbuf	*telephoneNumber;

    PE      parameters;
};
#define	free_SA_FacsimileTelephoneNumber(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZFacsimileTelephoneNumberSA], &_ZSA_mod, 1)

struct type_SA_PostalAddress {
        struct choice_SA_0 {
            int         offset;
#define	choice_SA_0_1	1
#define	choice_SA_0_2	2

            union {
                struct	qbuf	*choice_SA_1;

                struct	qbuf	*choice_SA_2;
            }       un;
        } *element_SA_0;

        struct type_SA_PostalAddress *next;
};
#define	free_SA_PostalAddress(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZPostalAddressSA], &_ZSA_mod, 1)

struct type_SA_TelexNumber {
    struct	qbuf	*telexNumber;

    struct	qbuf	*countryCode;

    struct	qbuf	*answerback;
};
#define	free_SA_TelexNumber(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZTelexNumberSA], &_ZSA_mod, 1)

struct type_SA_TeletexTerminalIdentifier {
    struct	qbuf	*teletexTerminal;

    struct member_SA_0 {
        struct	qbuf	*graphic__character__sets;

        struct	qbuf	*control__character__sets;

        struct qbuf *page__formats;

        struct	qbuf	*miscellaneous__terminal__capabilities;

        struct qbuf *private__use;
    } *parameters;
};
#define	free_SA_TeletexTerminalIdentifier(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZTeletexTerminalIdentifierSA], &_ZSA_mod, 1)

struct type_SA_PreferredDeliveryMethod {
        integer     element_SA_1;
#define	int_SA_element_SA_1_any__delivery__method	0
#define	int_SA_element_SA_1_mhs__delivery	1
#define	int_SA_element_SA_1_physical__delivery	2
#define	int_SA_element_SA_1_telex__delivery	3
#define	int_SA_element_SA_1_teletex__delivery	4
#define	int_SA_element_SA_1_g3__facsimilie__delivery	5
#define	int_SA_element_SA_1_g4__facsimilie__delivery	6
#define	int_SA_element_SA_1_ia5__terminal__delivery	7
#define	int_SA_element_SA_1_videotex__delivery	8
#define	int_SA_element_SA_1_telephone__delivery	9

        struct type_SA_PreferredDeliveryMethod *next;
};
#define	free_SA_PreferredDeliveryMethod(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZPreferredDeliveryMethodSA], &_ZSA_mod, 1)

struct type_SA_CriteriaItem {
    int         offset;
#define	type_SA_CriteriaItem_equality	1
#define	type_SA_CriteriaItem_substrings	2
#define	type_SA_CriteriaItem_greaterOrEqual	3
#define	type_SA_CriteriaItem_lessOrEqual	4
#define	type_SA_CriteriaItem_approximateMatch	5

    union {
        struct type_IF_AttributeType *equality;

        struct type_IF_AttributeType *substrings;

        struct type_IF_AttributeType *greaterOrEqual;

        struct type_IF_AttributeType *lessOrEqual;

        struct type_IF_AttributeType *approximateMatch;
    }       un;
};
#define	free_SA_CriteriaItem(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZCriteriaItemSA], &_ZSA_mod, 1)

struct type_SA_Criteria {
    int         offset;
#define	type_SA_Criteria_type	1
#define	type_SA_Criteria_and	2
#define	type_SA_Criteria_or	3
#define	type_SA_Criteria_not	4

    union {
        struct type_SA_CriteriaItem *type;

        struct member_SA_1 {
            struct type_SA_Criteria *member_SA_2;

            struct member_SA_1 *next;
        } *and;

        struct member_SA_3 {
            struct type_SA_Criteria *member_SA_4;

            struct member_SA_3 *next;
        } *or;

        struct type_SA_Criteria *not;
    }       un;
};
#define	free_SA_Criteria(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZCriteriaSA], &_ZSA_mod, 1)

struct type_SA_Guide {
    OID     objectClass;

    struct type_SA_Criteria *criteria;
};
#define	free_SA_Guide(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZGuideSA], &_ZSA_mod, 1)

struct type_SA_NadfGuide {
    integer     optionals;
#define	opt_SA_NadfGuide_subset (000000001)

    OID     objectClass;

    struct type_SA_Criteria *criteria;

    integer     subset;
#define	int_SA_subset_baseObject	0
#define	int_SA_subset_oneLevel	1
#define	int_SA_subset_wholeSubtree	2
};
#define	free_SA_NadfGuide(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZNadfGuideSA], &_ZSA_mod, 1)

struct type_SA_CaseIgnoreList {
        struct choice_SA_3 {
            int         offset;
#define	choice_SA_3_1	1
#define	choice_SA_3_2	2

            union {
                struct	qbuf	*choice_SA_4;

                struct	qbuf	*choice_SA_5;
            }       un;
        } *element_SA_2;

        struct type_SA_CaseIgnoreList *next;
};
#define	free_SA_CaseIgnoreList(parm)\
	 fre_obj((char *) parm, _ZSA_mod.md_dtab[_ZCaseIgnoreListSA], &_ZSA_mod, 1)
#endif
