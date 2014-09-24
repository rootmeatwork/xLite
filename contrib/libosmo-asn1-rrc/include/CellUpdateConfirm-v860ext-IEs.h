/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CellUpdateConfirm_v860ext_IEs_H_
#define	_CellUpdateConfirm_v860ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAB-InformationSetup-r7.h"
#include "RAB-InformationSetup-v820ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellUpdateConfirm-v860ext-IEs */
typedef struct CellUpdateConfirm_v860ext_IEs {
	struct CellUpdateConfirm_v860ext_IEs__rab_InformationSetup {
		RAB_InformationSetup_r7_t	 rab_InformationSetup_r7;
		RAB_InformationSetup_v820ext_t	 rab_InformationSetup_v820ext;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rab_InformationSetup;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellUpdateConfirm_v860ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellUpdateConfirm_v860ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _CellUpdateConfirm_v860ext_IEs_H_ */
#include <asn_internal.h>