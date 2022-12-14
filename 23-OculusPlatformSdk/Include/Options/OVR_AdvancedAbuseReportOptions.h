// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

#ifndef OVR_ADVANCED_ABUSE_REPORT_OPTIONS_H
#define OVR_ADVANCED_ABUSE_REPORT_OPTIONS_H

#include "../OVR_Platform_Defs.h"
#include "../OVR_Types.h"
#include <stddef.h>
#include <stdbool.h>

#include "../Enums/OVR_AbuseReportType.h"
#include "../Enums/OVR_AbuseReportVideoMode.h"

struct ovrAdvancedAbuseReportOptions;
typedef struct ovrAdvancedAbuseReportOptions* ovrAdvancedAbuseReportOptionsHandle;

OVRP_PUBLIC_FUNCTION(ovrAdvancedAbuseReportOptionsHandle) ovr_AdvancedAbuseReportOptions_Create();
OVRP_PUBLIC_FUNCTION(void) ovr_AdvancedAbuseReportOptions_Destroy(ovrAdvancedAbuseReportOptionsHandle handle);
/// If report_type is content, a string representing the type of content being
/// reported. This should correspond to the object_type string used in the UI
OVRP_PUBLIC_FUNCTION(void) ovr_AdvancedAbuseReportOptions_SetObjectType(ovrAdvancedAbuseReportOptionsHandle handle, const char * value);
OVRP_PUBLIC_FUNCTION(void) ovr_AdvancedAbuseReportOptions_SetReportType(ovrAdvancedAbuseReportOptionsHandle handle, ovrAbuseReportType value);
OVRP_PUBLIC_FUNCTION(void) ovr_AdvancedAbuseReportOptions_SetVideoMode(ovrAdvancedAbuseReportOptionsHandle handle, ovrAbuseReportVideoMode value);

#endif
