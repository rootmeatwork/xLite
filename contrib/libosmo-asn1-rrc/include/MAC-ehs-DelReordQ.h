/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MAC_ehs_DelReordQ_H_
#define	_MAC_ehs_DelReordQ_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MAC-ehs-QueueId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAC-ehs-DelReordQ */
typedef struct MAC_ehs_DelReordQ {
	MAC_ehs_QueueId_t	 mac_ehs_QueueId;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_ehs_DelReordQ_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_ehs_DelReordQ;

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_ehs_DelReordQ_H_ */
#include <asn_internal.h>