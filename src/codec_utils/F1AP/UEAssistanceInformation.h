/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_UEAssistanceInformation_H_
#define	_UEAssistanceInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UEAssistanceInformation */
typedef OCTET_STRING_t	 UEAssistanceInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAssistanceInformation;
asn_struct_free_f UEAssistanceInformation_free;
asn_struct_print_f UEAssistanceInformation_print;
asn_constr_check_f UEAssistanceInformation_constraint;
ber_type_decoder_f UEAssistanceInformation_decode_ber;
der_type_encoder_f UEAssistanceInformation_encode_der;
xer_type_decoder_f UEAssistanceInformation_decode_xer;
xer_type_encoder_f UEAssistanceInformation_encode_xer;
oer_type_decoder_f UEAssistanceInformation_decode_oer;
oer_type_encoder_f UEAssistanceInformation_encode_oer;
per_type_decoder_f UEAssistanceInformation_decode_uper;
per_type_encoder_f UEAssistanceInformation_encode_uper;
per_type_decoder_f UEAssistanceInformation_decode_aper;
per_type_encoder_f UEAssistanceInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UEAssistanceInformation_H_ */
#include <asn_internal.h>
