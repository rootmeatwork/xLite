/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UECapabilityEnquiry_v4b0ext_IEs_H_
#define	_UECapabilityEnquiry_v4b0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CapabilityUpdateRequirement-r4-ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UECapabilityEnquiry-v4b0ext-IEs */
typedef struct UECapabilityEnquiry_v4b0ext_IEs {
	CapabilityUpdateRequirement_r4_ext_t	 capabilityUpdateRequirement_r4_ext;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_v4b0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_v4b0ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_v4b0ext_IEs_H_ */
#include <asn_internal.h>
