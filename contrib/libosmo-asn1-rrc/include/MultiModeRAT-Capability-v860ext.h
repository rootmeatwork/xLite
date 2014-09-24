/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MultiModeRAT_Capability_v860ext_H_
#define	_MultiModeRAT_Capability_v860ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MultiModeRAT_Capability_v860ext__supportOfEUTRAFDD {
	MultiModeRAT_Capability_v860ext__supportOfEUTRAFDD_doesSupportEUTRAFDD	= 0
} e_MultiModeRAT_Capability_v860ext__supportOfEUTRAFDD;
typedef enum MultiModeRAT_Capability_v860ext__supportOfInterRATHOToEUTRAFDD {
	MultiModeRAT_Capability_v860ext__supportOfInterRATHOToEUTRAFDD_doesSupportInterRATHOToEUTRAFDD	= 0
} e_MultiModeRAT_Capability_v860ext__supportOfInterRATHOToEUTRAFDD;
typedef enum MultiModeRAT_Capability_v860ext__supportOfEUTRATDD {
	MultiModeRAT_Capability_v860ext__supportOfEUTRATDD_doesSupportEUTRATDD	= 0
} e_MultiModeRAT_Capability_v860ext__supportOfEUTRATDD;
typedef enum MultiModeRAT_Capability_v860ext__supportOfInterRATHOToEUTRATDD {
	MultiModeRAT_Capability_v860ext__supportOfInterRATHOToEUTRATDD_doesSupportInterRATHOToEUTRATDD	= 0
} e_MultiModeRAT_Capability_v860ext__supportOfInterRATHOToEUTRATDD;

/* MultiModeRAT-Capability-v860ext */
typedef struct MultiModeRAT_Capability_v860ext {
	long	*supportOfEUTRAFDD	/* OPTIONAL */;
	long	*supportOfInterRATHOToEUTRAFDD	/* OPTIONAL */;
	long	*supportOfEUTRATDD	/* OPTIONAL */;
	long	*supportOfInterRATHOToEUTRATDD	/* OPTIONAL */;
	BIT_STRING_t	*eutraFeatureGroupIndicators	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiModeRAT_Capability_v860ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfEUTRAFDD_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfInterRATHOToEUTRAFDD_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfEUTRATDD_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfInterRATHOToEUTRATDD_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MultiModeRAT_Capability_v860ext;

#ifdef __cplusplus
}
#endif

#endif	/* _MultiModeRAT_Capability_v860ext_H_ */
#include <asn_internal.h>