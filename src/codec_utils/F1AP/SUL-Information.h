/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SUL_Information_H_
#define	_SUL_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Transmission-Bandwidth.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* SUL-Information */
typedef struct SUL_Information {
	long	 sUL_NRARFCN;
	Transmission_Bandwidth_t	 sUL_transmission_Bandwidth;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SUL_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SUL_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_SUL_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_SUL_Information_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SUL_Information_H_ */
#include <asn_internal.h>