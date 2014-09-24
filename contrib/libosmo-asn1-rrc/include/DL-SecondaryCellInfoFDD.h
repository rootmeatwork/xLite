/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_SecondaryCellInfoFDD_H_
#define	_DL_SecondaryCellInfoFDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "H-RNTI.h"
#include <NativeEnumerated.h>
#include "HS-DSCH-TBSizeTable.h"
#include "PrimaryCPICH-Info.h"
#include "SecondaryScramblingCode.h"
#include "MeasurementPowerOffset.h"
#include "UARFCN.h"
#include "HS-SCCH-Codes.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_SecondaryCellInfoFDD_PR {
	DL_SecondaryCellInfoFDD_PR_NOTHING,	/* No components present */
	DL_SecondaryCellInfoFDD_PR_continue,
	DL_SecondaryCellInfoFDD_PR_newConfiguration
} DL_SecondaryCellInfoFDD_PR;
typedef enum DL_SecondaryCellInfoFDD__newConfiguration__dl_64QAM_Configured {
	DL_SecondaryCellInfoFDD__newConfiguration__dl_64QAM_Configured_true	= 0
} e_DL_SecondaryCellInfoFDD__newConfiguration__dl_64QAM_Configured;

/* DL-SecondaryCellInfoFDD */
typedef struct DL_SecondaryCellInfoFDD {
	DL_SecondaryCellInfoFDD_PR present;
	union DL_SecondaryCellInfoFDD_u {
		NULL_t	 Continue;
		struct DL_SecondaryCellInfoFDD__newConfiguration {
			H_RNTI_t	 new_H_RNTI;
			long	*dl_64QAM_Configured	/* OPTIONAL */;
			HS_DSCH_TBSizeTable_t	*hs_DSCH_TBSizeTable	/* OPTIONAL */;
			PrimaryCPICH_Info_t	 primaryCPICH_Info;
			SecondaryScramblingCode_t	*dl_ScramblingCode	/* OPTIONAL */;
			struct DL_SecondaryCellInfoFDD__newConfiguration__hS_SCCHChannelisationCodeInfo {
				A_SEQUENCE_OF(HS_SCCH_Codes_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} hS_SCCHChannelisationCodeInfo;
			MeasurementPowerOffset_t	 measurementPowerOffset;
			UARFCN_t	 uarfcn_DL;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} newConfiguration;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_SecondaryCellInfoFDD_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_64QAM_Configured_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_SecondaryCellInfoFDD;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_SecondaryCellInfoFDD_H_ */
#include <asn_internal.h>