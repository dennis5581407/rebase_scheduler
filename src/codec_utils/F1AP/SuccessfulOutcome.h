/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Descriptions"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SuccessfulOutcome_H_
#define	_SuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "Reset.h"
#include "ResetAcknowledge.h"
#include "F1SetupRequest.h"
#include "F1SetupResponse.h"
#include "F1SetupFailure.h"
#include "GNBDUConfigurationUpdate.h"
#include "GNBDUConfigurationUpdateAcknowledge.h"
#include "GNBDUConfigurationUpdateFailure.h"
#include "GNBCUConfigurationUpdate.h"
#include "GNBCUConfigurationUpdateAcknowledge.h"
#include "GNBCUConfigurationUpdateFailure.h"
#include "UEContextSetupRequest.h"
#include "UEContextSetupResponse.h"
#include "UEContextSetupFailure.h"
#include "UEContextReleaseCommand.h"
#include "UEContextReleaseComplete.h"
#include "UEContextModificationRequest.h"
#include "UEContextModificationResponse.h"
#include "UEContextModificationFailure.h"
#include "UEContextModificationRequired.h"
#include "UEContextModificationConfirm.h"
#include "UEContextModificationRefuse.h"
#include "WriteReplaceWarningRequest.h"
#include "WriteReplaceWarningResponse.h"
#include "PWSCancelRequest.h"
#include "PWSCancelResponse.h"
#include "GNBDUResourceCoordinationRequest.h"
#include "GNBDUResourceCoordinationResponse.h"
#include "ErrorIndication.h"
#include "UEContextReleaseRequest.h"
#include "DLRRCMessageTransfer.h"
#include "ULRRCMessageTransfer.h"
#include "UEInactivityNotification.h"
#include "PrivateMessage.h"
#include "InitialULRRCMessageTransfer.h"
#include "SystemInformationDeliveryCommand.h"
#include "Paging.h"
#include "Notify.h"
#include "PWSRestartIndication.h"
#include "PWSFailureIndication.h"
#include "GNBDUStatusIndication.h"
#include "RRCDeliveryReport.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SuccessfulOutcome__value_PR {
	SuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	SuccessfulOutcome__value_PR_ResetAcknowledge,
	SuccessfulOutcome__value_PR_F1SetupResponse,
	SuccessfulOutcome__value_PR_GNBDUConfigurationUpdateAcknowledge,
	SuccessfulOutcome__value_PR_GNBCUConfigurationUpdateAcknowledge,
	SuccessfulOutcome__value_PR_UEContextSetupResponse,
	SuccessfulOutcome__value_PR_UEContextReleaseComplete,
	SuccessfulOutcome__value_PR_UEContextModificationResponse,
	SuccessfulOutcome__value_PR_UEContextModificationConfirm,
	SuccessfulOutcome__value_PR_WriteReplaceWarningResponse,
	SuccessfulOutcome__value_PR_PWSCancelResponse,
	SuccessfulOutcome__value_PR_GNBDUResourceCoordinationResponse
} SuccessfulOutcome__value_PR;

/* SuccessfulOutcome */
typedef struct SuccessfulOutcome {
	ProcedureCode_t	 procedureCode;
	Criticality_t	 criticality;
	struct SuccessfulOutcome__value {
		SuccessfulOutcome__value_PR present;
		union SuccessfulOutcome__value_u {
			ResetAcknowledge_t	 ResetAcknowledge;
			F1SetupResponse_t	 F1SetupResponse;
			GNBDUConfigurationUpdateAcknowledge_t	 GNBDUConfigurationUpdateAcknowledge;
			GNBCUConfigurationUpdateAcknowledge_t	 GNBCUConfigurationUpdateAcknowledge;
			UEContextSetupResponse_t	 UEContextSetupResponse;
			UEContextReleaseComplete_t	 UEContextReleaseComplete;
			UEContextModificationResponse_t	 UEContextModificationResponse;
			UEContextModificationConfirm_t	 UEContextModificationConfirm;
			WriteReplaceWarningResponse_t	 WriteReplaceWarningResponse;
			PWSCancelResponse_t	 PWSCancelResponse;
			GNBDUResourceCoordinationResponse_t	 GNBDUResourceCoordinationResponse;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_SuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_SuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SuccessfulOutcome_H_ */
#include <asn_internal.h>
