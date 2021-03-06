/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_NonUsedFreqParameter_r11_H_
#define	_NonUsedFreqParameter_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Threshold-r6.h"
#include "W.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NonUsedFreqParameter_r11__nonUsedFreqTriggeringConditionDetectedCells {
	NonUsedFreqParameter_r11__nonUsedFreqTriggeringConditionDetectedCells_true	= 0
} e_NonUsedFreqParameter_r11__nonUsedFreqTriggeringConditionDetectedCells;

/* Forward declarations */
struct CellInfoListToBeExcluded;

/* NonUsedFreqParameter-r11 */
typedef struct NonUsedFreqParameter_r11 {
	Threshold_r6_t	 nonUsedFreqThreshold;
	W_t	 nonUsedFreqW;
	long	*nonUsedFreqTriggeringConditionDetectedCells	/* OPTIONAL */;
	struct CellInfoListToBeExcluded	*excludedCellInfoList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NonUsedFreqParameter_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nonUsedFreqTriggeringConditionDetectedCells_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NonUsedFreqParameter_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellInfoListToBeExcluded.h"

#endif	/* _NonUsedFreqParameter_r11_H_ */
#include <asn_internal.h>
