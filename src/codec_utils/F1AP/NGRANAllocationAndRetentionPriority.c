/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "NGRANAllocationAndRetentionPriority.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGRANAllocationAndRetentionPriority_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGRANAllocationAndRetentionPriority, priorityLevel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PriorityLevel,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priorityLevel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGRANAllocationAndRetentionPriority, pre_emptionCapability),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Pre_emptionCapability,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pre-emptionCapability"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGRANAllocationAndRetentionPriority, pre_emptionVulnerability),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Pre_emptionVulnerability,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pre-emptionVulnerability"
		},
	{ ATF_POINTER, 1, offsetof(struct NGRANAllocationAndRetentionPriority, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_4624P63,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGRANAllocationAndRetentionPriority_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_NGRANAllocationAndRetentionPriority_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGRANAllocationAndRetentionPriority_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priorityLevel */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pre-emptionCapability */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pre-emptionVulnerability */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGRANAllocationAndRetentionPriority_specs_1 = {
	sizeof(struct NGRANAllocationAndRetentionPriority),
	offsetof(struct NGRANAllocationAndRetentionPriority, _asn_ctx),
	asn_MAP_NGRANAllocationAndRetentionPriority_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NGRANAllocationAndRetentionPriority_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGRANAllocationAndRetentionPriority = {
	"NGRANAllocationAndRetentionPriority",
	"NGRANAllocationAndRetentionPriority",
	&asn_OP_SEQUENCE,
	asn_DEF_NGRANAllocationAndRetentionPriority_tags_1,
	sizeof(asn_DEF_NGRANAllocationAndRetentionPriority_tags_1)
		/sizeof(asn_DEF_NGRANAllocationAndRetentionPriority_tags_1[0]), /* 1 */
	asn_DEF_NGRANAllocationAndRetentionPriority_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGRANAllocationAndRetentionPriority_tags_1)
		/sizeof(asn_DEF_NGRANAllocationAndRetentionPriority_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NGRANAllocationAndRetentionPriority_1,
	4,	/* Elements count */
	&asn_SPC_NGRANAllocationAndRetentionPriority_specs_1	/* Additional specs */
};

