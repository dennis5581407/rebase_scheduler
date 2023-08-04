/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "../../ASN1_Input/E2SM_KPM_V_3_0.asn1"
 * 	`asn1c -D ./../../E2_output/E2SM_KPM_v3.0_output -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "E2SM-KPM-RANfunction-Description.h"

#include "RIC-EventTriggerStyle-Item.h"
#include "RIC-ReportStyle-Item.h"
static int
memb_ric_EventTriggerStyle_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 63)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ric_ReportStyle_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 63)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_ric_EventTriggerStyle_List_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..63)) */};
static asn_per_constraints_t asn_PER_type_ric_EventTriggerStyle_List_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ric_ReportStyle_List_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..63)) */};
static asn_per_constraints_t asn_PER_type_ric_ReportStyle_List_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ric_EventTriggerStyle_List_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..63)) */};
static asn_per_constraints_t asn_PER_memb_ric_EventTriggerStyle_List_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ric_ReportStyle_List_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..63)) */};
static asn_per_constraints_t asn_PER_memb_ric_ReportStyle_List_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ric_EventTriggerStyle_List_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RIC_EventTriggerStyle_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ric_EventTriggerStyle_List_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ric_EventTriggerStyle_List_specs_3 = {
	sizeof(struct E2SM_KPM_RANfunction_Description__ric_EventTriggerStyle_List),
	offsetof(struct E2SM_KPM_RANfunction_Description__ric_EventTriggerStyle_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ric_EventTriggerStyle_List_3 = {
	"ric-EventTriggerStyle-List",
	"ric-EventTriggerStyle-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ric_EventTriggerStyle_List_tags_3,
	sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_3)
		/sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_3[0]) - 1, /* 1 */
	asn_DEF_ric_EventTriggerStyle_List_tags_3,	/* Same as above */
	sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_3)
		/sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_3[0]), /* 2 */
	{ &asn_OER_type_ric_EventTriggerStyle_List_constr_3, &asn_PER_type_ric_EventTriggerStyle_List_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_ric_EventTriggerStyle_List_3,
	1,	/* Single element */
	&asn_SPC_ric_EventTriggerStyle_List_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ric_ReportStyle_List_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RIC_ReportStyle_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ric_ReportStyle_List_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ric_ReportStyle_List_specs_5 = {
	sizeof(struct E2SM_KPM_RANfunction_Description__ric_ReportStyle_List),
	offsetof(struct E2SM_KPM_RANfunction_Description__ric_ReportStyle_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ric_ReportStyle_List_5 = {
	"ric-ReportStyle-List",
	"ric-ReportStyle-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ric_ReportStyle_List_tags_5,
	sizeof(asn_DEF_ric_ReportStyle_List_tags_5)
		/sizeof(asn_DEF_ric_ReportStyle_List_tags_5[0]) - 1, /* 1 */
	asn_DEF_ric_ReportStyle_List_tags_5,	/* Same as above */
	sizeof(asn_DEF_ric_ReportStyle_List_tags_5)
		/sizeof(asn_DEF_ric_ReportStyle_List_tags_5[0]), /* 2 */
	{ &asn_OER_type_ric_ReportStyle_List_constr_5, &asn_PER_type_ric_ReportStyle_List_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_ric_ReportStyle_List_5,
	1,	/* Single element */
	&asn_SPC_ric_ReportStyle_List_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E2SM_KPM_RANfunction_Description_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_KPM_RANfunction_Description, ranFunction_Name),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANfunction_Name,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ranFunction-Name"
		},
	{ ATF_POINTER, 2, offsetof(struct E2SM_KPM_RANfunction_Description, ric_EventTriggerStyle_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ric_EventTriggerStyle_List_3,
		0,
		{ &asn_OER_memb_ric_EventTriggerStyle_List_constr_3, &asn_PER_memb_ric_EventTriggerStyle_List_constr_3,  memb_ric_EventTriggerStyle_List_constraint_1 },
		0, 0, /* No default value */
		"ric-EventTriggerStyle-List"
		},
	{ ATF_POINTER, 1, offsetof(struct E2SM_KPM_RANfunction_Description, ric_ReportStyle_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ric_ReportStyle_List_5,
		0,
		{ &asn_OER_memb_ric_ReportStyle_List_constr_5, &asn_PER_memb_ric_ReportStyle_List_constr_5,  memb_ric_ReportStyle_List_constraint_1 },
		0, 0, /* No default value */
		"ric-ReportStyle-List"
		},
};
static const int asn_MAP_E2SM_KPM_RANfunction_Description_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_E2SM_KPM_RANfunction_Description_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_KPM_RANfunction_Description_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ranFunction-Name */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ric-EventTriggerStyle-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ric-ReportStyle-List */
};
static asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_RANfunction_Description_specs_1 = {
	sizeof(struct E2SM_KPM_RANfunction_Description),
	offsetof(struct E2SM_KPM_RANfunction_Description, _asn_ctx),
	asn_MAP_E2SM_KPM_RANfunction_Description_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E2SM_KPM_RANfunction_Description_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_RANfunction_Description = {
	"E2SM-KPM-RANfunction-Description",
	"E2SM-KPM-RANfunction-Description",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_KPM_RANfunction_Description_tags_1,
	sizeof(asn_DEF_E2SM_KPM_RANfunction_Description_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_RANfunction_Description_tags_1[0]), /* 1 */
	asn_DEF_E2SM_KPM_RANfunction_Description_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_KPM_RANfunction_Description_tags_1)
		/sizeof(asn_DEF_E2SM_KPM_RANfunction_Description_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_KPM_RANfunction_Description_1,
	3,	/* Elements count */
	&asn_SPC_E2SM_KPM_RANfunction_Description_specs_1	/* Additional specs */
};

