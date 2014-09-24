/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionSetup_r5_IEs_H_
#define	_RRCConnectionSetup_r5_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActivationTime.h"
#include "U-RNTI.h"
#include "C-RNTI.h"
#include "RRC-StateIndicator.h"
#include "UTRAN-DRX-CycleLengthCoefficient.h"
#include "MaxAllowedUL-TX-Power.h"
#include "SRB-InformationSetupList2.h"
#include <constr_SEQUENCE.h>
#include "PredefinedConfigIdentity.h"
#include "DefaultConfigMode.h"
#include "DefaultConfigIdentity-r5.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionSetup_r5_IEs__specificationMode_PR {
	RRCConnectionSetup_r5_IEs__specificationMode_PR_NOTHING,	/* No components present */
	RRCConnectionSetup_r5_IEs__specificationMode_PR_complete,
	RRCConnectionSetup_r5_IEs__specificationMode_PR_preconfiguration
} RRCConnectionSetup_r5_IEs__specificationMode_PR;
typedef enum RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR {
	RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR_NOTHING,	/* No components present */
	RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR_predefinedConfigIdentity,
	RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR_defaultConfig
} RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR;

/* Forward declarations */
struct CapabilityUpdateRequirement_r5;
struct FrequencyInfo;
struct UL_ChannelRequirement_r4;
struct DL_CommonInformation_r4;
struct DL_InformationPerRL_List_r5bis;
struct UL_CommonTransChInfo_r4;
struct UL_AddReconfTransChInfoList;
struct DL_CommonTransChInfo_r4;
struct DL_AddReconfTransChInfoList_r4;

/* RRCConnectionSetup-r5-IEs */
typedef struct RRCConnectionSetup_r5_IEs {
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	U_RNTI_t	 new_U_RNTI;
	C_RNTI_t	*new_c_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	 utran_DRX_CycleLengthCoeff;
	struct CapabilityUpdateRequirement_r5	*capabilityUpdateRequirement	/* OPTIONAL */;
	struct RRCConnectionSetup_r5_IEs__specificationMode {
		RRCConnectionSetup_r5_IEs__specificationMode_PR present;
		union RRCConnectionSetup_r5_IEs__specificationMode_u {
			struct RRCConnectionSetup_r5_IEs__specificationMode__complete {
				SRB_InformationSetupList2_t	 srb_InformationSetupList;
				struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
				struct UL_AddReconfTransChInfoList	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
				struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
				struct DL_AddReconfTransChInfoList_r4	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} complete;
			struct RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration {
				struct RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration__preConfigMode {
					RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration__preConfigMode_PR present;
					union RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration__preConfigMode_u {
						PredefinedConfigIdentity_t	 predefinedConfigIdentity;
						struct RRCConnectionSetup_r5_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig {
							DefaultConfigMode_t	 defaultConfigMode;
							DefaultConfigIdentity_r5_t	 defaultConfigIdentity;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} defaultConfig;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} preConfigMode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} preconfiguration;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} specificationMode;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_ChannelRequirement_r4	*ul_ChannelRequirement	/* OPTIONAL */;
	struct DL_CommonInformation_r4	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r5bis	*dl_InformationPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionSetup_r5_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_r5_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CapabilityUpdateRequirement-r5.h"
#include "FrequencyInfo.h"
#include "UL-ChannelRequirement-r4.h"
#include "DL-CommonInformation-r4.h"
#include "DL-InformationPerRL-List-r5bis.h"
#include "UL-CommonTransChInfo-r4.h"
#include "UL-AddReconfTransChInfoList.h"
#include "DL-CommonTransChInfo-r4.h"
#include "DL-AddReconfTransChInfoList-r4.h"

#endif	/* _RRCConnectionSetup_r5_IEs_H_ */
#include <asn_internal.h>