/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DefaultConfigForCellFACH_H_
#define	_DefaultConfigForCellFACH_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DefaultConfigMode.h"
#include "DefaultConfigIdForCellFACH.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DefaultConfigForCellFACH */
typedef struct DefaultConfigForCellFACH {
	DefaultConfigMode_t	 defaultConfigMode;
	DefaultConfigIdForCellFACH_t	 defaultConfigIdForCellFACH;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DefaultConfigForCellFACH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DefaultConfigForCellFACH;

#ifdef __cplusplus
}
#endif

#endif	/* _DefaultConfigForCellFACH_H_ */
#include <asn_internal.h>