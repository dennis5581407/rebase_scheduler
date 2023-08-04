/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_EUTRA_RSTD_InfoList_H_
#define	_EUTRA_RSTD_InfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EUTRA_RSTD_Info;

/* EUTRA-RSTD-InfoList */
typedef struct EUTRA_RSTD_InfoList {
	A_SEQUENCE_OF(struct EUTRA_RSTD_Info) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_RSTD_InfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_RSTD_InfoList;
extern asn_SET_OF_specifics_t asn_SPC_EUTRA_RSTD_InfoList_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_RSTD_InfoList_1[1];
extern asn_per_constraints_t asn_PER_type_EUTRA_RSTD_InfoList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_RSTD_InfoList_H_ */
#include <asn_internal.h>