/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_GNB_CU_TNL_Association_To_Update_Item_H_
#define	_GNB_CU_TNL_Association_To_Update_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CP-TransportLayerAddress.h"
#include "TNLAssociationUsage.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* GNB-CU-TNL-Association-To-Update-Item */
typedef struct GNB_CU_TNL_Association_To_Update_Item {
	CP_TransportLayerAddress_t	 tNLAssociationTransportLayerAddress;
	TNLAssociationUsage_t	*tNLAssociationUsage;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNB_CU_TNL_Association_To_Update_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNB_CU_TNL_Association_To_Update_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _GNB_CU_TNL_Association_To_Update_Item_H_ */
#include <asn_internal.h>