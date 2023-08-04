/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "UE-MRDC-CapabilityAddXDD-Mode.h"

#include "MeasAndMobParametersMRDC-XDD-Diff.h"
#include "GeneralParametersMRDC-XDD-Diff.h"
asn_TYPE_member_t asn_MBR_UE_MRDC_CapabilityAddXDD_Mode_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_MRDC_CapabilityAddXDD_Mode, measAndMobParametersMRDC_XDD_Diff),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasAndMobParametersMRDC_XDD_Diff,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measAndMobParametersMRDC-XDD-Diff"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_MRDC_CapabilityAddXDD_Mode, generalParametersMRDC_XDD_Diff),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralParametersMRDC_XDD_Diff,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"generalParametersMRDC-XDD-Diff"
		},
};
static const int asn_MAP_UE_MRDC_CapabilityAddXDD_Mode_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UE_MRDC_CapabilityAddXDD_Mode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_MRDC_CapabilityAddXDD_Mode_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measAndMobParametersMRDC-XDD-Diff */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* generalParametersMRDC-XDD-Diff */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_MRDC_CapabilityAddXDD_Mode_specs_1 = {
	sizeof(struct UE_MRDC_CapabilityAddXDD_Mode),
	offsetof(struct UE_MRDC_CapabilityAddXDD_Mode, _asn_ctx),
	asn_MAP_UE_MRDC_CapabilityAddXDD_Mode_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UE_MRDC_CapabilityAddXDD_Mode_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_MRDC_CapabilityAddXDD_Mode = {
	"UE-MRDC-CapabilityAddXDD-Mode",
	"UE-MRDC-CapabilityAddXDD-Mode",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_MRDC_CapabilityAddXDD_Mode_tags_1,
	sizeof(asn_DEF_UE_MRDC_CapabilityAddXDD_Mode_tags_1)
		/sizeof(asn_DEF_UE_MRDC_CapabilityAddXDD_Mode_tags_1[0]), /* 1 */
	asn_DEF_UE_MRDC_CapabilityAddXDD_Mode_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_MRDC_CapabilityAddXDD_Mode_tags_1)
		/sizeof(asn_DEF_UE_MRDC_CapabilityAddXDD_Mode_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_MRDC_CapabilityAddXDD_Mode_1,
	2,	/* Elements count */
	&asn_SPC_UE_MRDC_CapabilityAddXDD_Mode_specs_1	/* Additional specs */
};
