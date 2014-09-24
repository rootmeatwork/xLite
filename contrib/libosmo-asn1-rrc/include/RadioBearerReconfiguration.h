/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RadioBearerReconfiguration_H_
#define	_RadioBearerReconfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioBearerReconfiguration-r3-IEs.h"
#include "RadioBearerReconfiguration-v3a0ext.h"
#include <BIT_STRING.h>
#include "RadioBearerReconfiguration-v4b0ext-IEs.h"
#include "RadioBearerReconfiguration-v590ext-IEs.h"
#include "RadioBearerReconfiguration-v5d0ext-IEs.h"
#include "RadioBearerReconfiguration-v690ext-IEs.h"
#include "RadioBearerReconfiguration-v770ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include "RadioBearerReconfiguration-r4-IEs.h"
#include "RadioBearerReconfiguration-r5-IEs.h"
#include "RadioBearerReconfiguration-r6-IEs.h"
#include "RadioBearerReconfiguration-v6b0ext-IEs.h"
#include "RadioBearerReconfiguration-v6f0ext-IEs.h"
#include "RadioBearerReconfiguration-r7-IEs.h"
#include "RadioBearerReconfiguration-v780ext-IEs.h"
#include "RadioBearerReconfiguration-v790ext-IEs.h"
#include "RadioBearerReconfiguration-v7d0ext-IEs.h"
#include "RadioBearerReconfiguration-v7f0ext-IEs.h"
#include "RadioBearerReconfiguration-v7g0ext-IEs.h"
#include "RadioBearerReconfiguration-r8-IEs.h"
#include "RadioBearerReconfiguration-v890ext-IEs.h"
#include "RadioBearerReconfiguration-v8a0ext-IEs.h"
#include "RadioBearerReconfiguration-r9-IEs.h"
#include "RadioBearerReconfiguration-v950ext-IEs.h"
#include "RadioBearerReconfiguration-v9c0ext-IEs.h"
#include "RadioBearerReconfiguration-r10-IEs.h"
#include "RadioBearerReconfiguration-vaa0ext-IEs.h"
#include "RadioBearerReconfiguration-vb50ext-IEs.h"
#include "RadioBearerReconfiguration-r11-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioBearerReconfiguration_PR {
	RadioBearerReconfiguration_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration_PR_r3,
	RadioBearerReconfiguration_PR_later_than_r3
} RadioBearerReconfiguration_PR;
typedef enum RadioBearerReconfiguration__later_than_r3__criticalExtensions_PR {
	RadioBearerReconfiguration__later_than_r3__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration__later_than_r3__criticalExtensions_PR_r4,
	RadioBearerReconfiguration__later_than_r3__criticalExtensions_PR_criticalExtensions
} RadioBearerReconfiguration__later_than_r3__criticalExtensions_PR;
typedef enum RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions_PR {
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions_PR_r5,
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR_r6,
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r7,
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r8,
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r9,
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r10,
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;
typedef enum RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR {
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_NOTHING,	/* No components present */
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_r11,
	RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR_criticalExtensions
} RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR;

/* RadioBearerReconfiguration */
typedef struct RadioBearerReconfiguration {
	RadioBearerReconfiguration_PR present;
	union RadioBearerReconfiguration_u {
		struct RadioBearerReconfiguration__r3 {
			RadioBearerReconfiguration_r3_IEs_t	 radioBearerReconfiguration_r3;
			struct RadioBearerReconfiguration__r3__v3aoNonCriticalExtensions {
				RadioBearerReconfiguration_v3a0ext_t	 radioBearerReconfiguration_v3a0ext;
				struct RadioBearerReconfiguration__r3__v3aoNonCriticalExtensions__laterNonCriticalExtensions {
					BIT_STRING_t	*radioBearerReconfiguration_r3_add_ext	/* OPTIONAL */;
					struct RadioBearerReconfiguration__r3__v3aoNonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions {
						RadioBearerReconfiguration_v4b0ext_IEs_t	 radioBearerReconfiguration_v4b0ext;
						struct RadioBearerReconfiguration__r3__v3aoNonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions {
							RadioBearerReconfiguration_v590ext_IEs_t	 radioBearerReconfiguration_v590ext;
							struct RadioBearerReconfiguration__r3__v3aoNonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v5d0NonCriticalExtenstions {
								RadioBearerReconfiguration_v5d0ext_IEs_t	 radioBearerReconfiguration_v5d0ext;
								struct RadioBearerReconfiguration__r3__v3aoNonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v5d0NonCriticalExtenstions__v690NonCriticalExtensions {
									RadioBearerReconfiguration_v690ext_IEs_t	 radioBearerReconfiguration_v690ext;
									struct RadioBearerReconfiguration__r3__v3aoNonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v5d0NonCriticalExtenstions__v690NonCriticalExtensions__v770NonCriticalExtensions {
										RadioBearerReconfiguration_v770ext_IEs_t	 radioBearerReconfiguration_v770ext;
										struct RadioBearerReconfiguration__r3__v3aoNonCriticalExtensions__laterNonCriticalExtensions__v4b0NonCriticalExtensions__v590NonCriticalExtensions__v5d0NonCriticalExtenstions__v690NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v770NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v690NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v5d0NonCriticalExtenstions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v590NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v4b0NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *laterNonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v3aoNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct RadioBearerReconfiguration__later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct RadioBearerReconfiguration__later_than_r3__criticalExtensions {
				RadioBearerReconfiguration__later_than_r3__criticalExtensions_PR present;
				union RadioBearerReconfiguration__later_than_r3__criticalExtensions_u {
					struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__r4 {
						RadioBearerReconfiguration_r4_IEs_t	 radioBearerReconfiguration_r4;
						struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions {
							BIT_STRING_t	*radioBearerReconfiguration_r4_add_ext	/* OPTIONAL */;
							struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions {
								RadioBearerReconfiguration_v590ext_IEs_t	 radioBearerReconfiguration_v590ext;
								struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions__v5d0NonCriticalExtenstions {
									RadioBearerReconfiguration_v5d0ext_IEs_t	 radioBearerReconfiguration_v5d0ext;
									struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions__v5d0NonCriticalExtenstions__v690NonCriticalExtensions {
										RadioBearerReconfiguration_v690ext_IEs_t	 radioBearerReconfiguration_v690ext;
										struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions__v5d0NonCriticalExtenstions__v690NonCriticalExtensions__v770NonCriticalExtensions {
											RadioBearerReconfiguration_v770ext_IEs_t	 radioBearerReconfiguration_v770ext;
											struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__r4__v4d0NonCriticalExtensions__v590NonCriticalExtensions__v5d0NonCriticalExtenstions__v690NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *nonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *v770NonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v690NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5d0NonCriticalExtenstions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v590NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v4d0NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r4;
					struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions {
						RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions_PR present;
						union RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions_u {
							struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__r5 {
								RadioBearerReconfiguration_r5_IEs_t	 radioBearerReconfiguration_r5;
								BIT_STRING_t	*radioBearerReconfiguration_r5_add_ext	/* OPTIONAL */;
								struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__r5__v5d0NonCriticalExtenstions {
									RadioBearerReconfiguration_v5d0ext_IEs_t	 radioBearerReconfiguration_v5d0ext;
									struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__r5__v5d0NonCriticalExtenstions__v690NonCriticalExtensions {
										RadioBearerReconfiguration_v690ext_IEs_t	 radioBearerReconfiguration_v690ext;
										struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__r5__v5d0NonCriticalExtenstions__v690NonCriticalExtensions__v770NonCriticalExtensions {
											RadioBearerReconfiguration_v770ext_IEs_t	 radioBearerReconfiguration_v770ext;
											struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__r5__v5d0NonCriticalExtenstions__v690NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *nonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *v770NonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v690NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5d0NonCriticalExtenstions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} r5;
							struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions {
								RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
								union RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions_u {
									struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__r6 {
										RadioBearerReconfiguration_r6_IEs_t	 radioBearerReconfiguration_r6;
										BIT_STRING_t	*radioBearerReconfiguration_r6_add_ext	/* OPTIONAL */;
										struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__r6__v6b0NonCriticalExtensions {
											RadioBearerReconfiguration_v6b0ext_IEs_t	 radioBearerReconfiguration_v6b0ext;
											struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__r6__v6b0NonCriticalExtensions__v6f0NonCriticalExtensions {
												RadioBearerReconfiguration_v6f0ext_IEs_t	 radioBearerRconfiguration_v6f0ext;
												struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__r6__v6b0NonCriticalExtensions__v6f0NonCriticalExtensions__v770NonCriticalExtensions {
													RadioBearerReconfiguration_v770ext_IEs_t	 radioBearerReconfiguration_v770ext;
													struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__r6__v6b0NonCriticalExtensions__v6f0NonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} *nonCriticalExtensions;
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} *v770NonCriticalExtensions;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *v6f0NonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *v6b0NonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} r6;
									struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
										RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
										union RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
											struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7 {
												RadioBearerReconfiguration_r7_IEs_t	 radioBearerReconfiguration_r7;
												struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions {
													RadioBearerReconfiguration_v780ext_IEs_t	 radioBearerReconfiguration_v780ext;
													struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v790NonCriticalExtensions {
														RadioBearerReconfiguration_v790ext_IEs_t	 radioBearerReconfiguration_v790ext;
														struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v790NonCriticalExtensions__v7d0NonCriticalExtensions {
															RadioBearerReconfiguration_v7d0ext_IEs_t	 radioBearerReconfiguration_v7d0ext;
															struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v790NonCriticalExtensions__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions {
																RadioBearerReconfiguration_v7f0ext_IEs_t	 radioBearerReconfiguration_v7f0ext;
																struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v790NonCriticalExtensions__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v7g0NonCriticalExtensions {
																	RadioBearerReconfiguration_v7g0ext_IEs_t	 radioBearerReconfiguration_v7g0ext;
																	struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r7__v780NonCriticalExtensions__v790NonCriticalExtensions__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v7g0NonCriticalExtensions__nonCriticalExtensions {
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} *nonCriticalExtensions;
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *v7g0NonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} *v7f0NonCriticalExtensions;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} *v7d0NonCriticalExtensions;
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} *v790NonCriticalExtensions;
													
													/* Context for parsing across buffer boundaries */
													asn_struct_ctx_t _asn_ctx;
												} *v780NonCriticalExtensions;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} r7;
											struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
												RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
												union RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
													struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8 {
														RadioBearerReconfiguration_r8_IEs_t	 radioBearerReconfiguration_r8;
														BIT_STRING_t	*radioBearerReconfiguration_r8_add_ext	/* OPTIONAL */;
														struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions {
															RadioBearerReconfiguration_v7d0ext_IEs_t	 radioBearerReconfiguration_v7d0ext;
															struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions {
																RadioBearerReconfiguration_v7f0ext_IEs_t	 radioBearerReconfiguration_v7f0ext;
																struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v890NonCriticalExtensions {
																	RadioBearerReconfiguration_v890ext_IEs_t	 radioBearerReconfiguration_v890ext;
																	struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v890NonCriticalExtensions__v7g0NonCriticalExtensions {
																		RadioBearerReconfiguration_v7g0ext_IEs_t	 radioBearerReconfiguration_v7g0ext;
																		struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v890NonCriticalExtensions__v7g0NonCriticalExtensions__v8a0NonCriticalExtensions {
																			RadioBearerReconfiguration_v8a0ext_IEs_t	 radioBearerReconfiguration_v8a0ext;
																			struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r8__v7d0NonCriticalExtensions__v7f0NonCriticalExtensions__v890NonCriticalExtensions__v7g0NonCriticalExtensions__v8a0NonCriticalExtensions__nonCriticalExtensions {
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} *nonCriticalExtensions;
																			
																			/* Context for parsing across buffer boundaries */
																			asn_struct_ctx_t _asn_ctx;
																		} *v8a0NonCriticalExtensions;
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} *v7g0NonCriticalExtensions;
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *v890NonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} *v7f0NonCriticalExtensions;
															
															/* Context for parsing across buffer boundaries */
															asn_struct_ctx_t _asn_ctx;
														} *v7d0NonCriticalExtensions;
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} r8;
													struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
														RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
														union RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
															struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9 {
																RadioBearerReconfiguration_r9_IEs_t	 radioBearerReconfiguration_r9;
																BIT_STRING_t	*radioBearerReconfiguration_r9_add_ext	/* OPTIONAL */;
																struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v950NonCriticalExtensions {
																	RadioBearerReconfiguration_v950ext_IEs_t	 radioBearerReconfiguration_v950ext;
																	struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v950NonCriticalExtensions__v9c0NonCriticalExtensions {
																		RadioBearerReconfiguration_v9c0ext_IEs_t	 radioBearerReconfiguration_v9c0ext;
																		struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r9__v950NonCriticalExtensions__v9c0NonCriticalExtensions__nonCriticalExtensions {
																			
																			/* Context for parsing across buffer boundaries */
																			asn_struct_ctx_t _asn_ctx;
																		} *nonCriticalExtensions;
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} *v9c0NonCriticalExtensions;
																	
																	/* Context for parsing across buffer boundaries */
																	asn_struct_ctx_t _asn_ctx;
																} *v950NonCriticalExtensions;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} r9;
															struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
																RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
																union RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
																	struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10 {
																		RadioBearerReconfiguration_r10_IEs_t	 radioBearerReconfiguration_r10;
																		BIT_STRING_t	*radioBearerReconfiguration_r10_add_ext	/* OPTIONAL */;
																		struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__v9c0NonCriticalExtensions {
																			RadioBearerReconfiguration_v9c0ext_IEs_t	 radioBearerReconfiguration_v9c0ext;
																			struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__v9c0NonCriticalExtensions__vaa0NonCriticalExtensions {
																				RadioBearerReconfiguration_vaa0ext_IEs_t	 radioBearerReconfiguration_vaa0ext;
																				struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__v9c0NonCriticalExtensions__vaa0NonCriticalExtensions__vb50NonCriticalExtensions {
																					RadioBearerReconfiguration_vb50ext_IEs_t	 radioBearerReconfiguration_vb50ext;
																					struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r10__v9c0NonCriticalExtensions__vaa0NonCriticalExtensions__vb50NonCriticalExtensions__nonCriticalExtensions {
																						
																						/* Context for parsing across buffer boundaries */
																						asn_struct_ctx_t _asn_ctx;
																					} *nonCriticalExtensions;
																					
																					/* Context for parsing across buffer boundaries */
																					asn_struct_ctx_t _asn_ctx;
																				} *vb50NonCriticalExtensions;
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} *vaa0NonCriticalExtensions;
																			
																			/* Context for parsing across buffer boundaries */
																			asn_struct_ctx_t _asn_ctx;
																		} *v9c0NonCriticalExtensions;
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} r10;
																	struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
																		RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_PR present;
																		union RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions_u {
																			struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r11 {
																				RadioBearerReconfiguration_r11_IEs_t	 radioBearerReconfiguration_r11;
																				BIT_STRING_t	*radioBearerReconfiguration_r11_add_ext	/* OPTIONAL */;
																				struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__r11__nonCriticalExtensions {
																					
																					/* Context for parsing across buffer boundaries */
																					asn_struct_ctx_t _asn_ctx;
																				} *nonCriticalExtensions;
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} r11;
																			struct RadioBearerReconfiguration__later_than_r3__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions__criticalExtensions {
																				
																				/* Context for parsing across buffer boundaries */
																				asn_struct_ctx_t _asn_ctx;
																			} criticalExtensions;
																		} choice;
																		
																		/* Context for parsing across buffer boundaries */
																		asn_struct_ctx_t _asn_ctx;
																	} criticalExtensions;
																} choice;
																
																/* Context for parsing across buffer boundaries */
																asn_struct_ctx_t _asn_ctx;
															} criticalExtensions;
														} choice;
														
														/* Context for parsing across buffer boundaries */
														asn_struct_ctx_t _asn_ctx;
													} criticalExtensions;
												} choice;
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} criticalExtensions;
										} choice;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} criticalExtensions;
								} choice;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} criticalExtensions;
						} choice;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} criticalExtensions;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerReconfiguration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerReconfiguration;

#ifdef __cplusplus
}
#endif

#endif	/* _RadioBearerReconfiguration_H_ */
#include <asn_internal.h>