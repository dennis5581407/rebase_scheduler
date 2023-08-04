/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_UECapabilityEnquiry_IEs_H_
#define	_UECapabilityEnquiry_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-CapabilityRAT-RequestList.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UECapabilityEnquiry-IEs */
typedef struct UECapabilityEnquiry_IEs {
	UE_CapabilityRAT_RequestList_t	 ue_CapabilityRAT_RequestList;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct UECapabilityEnquiry_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UECapabilityEnquiry_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UECapabilityEnquiry_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_IEs_H_ */
#include <asn_internal.h>
