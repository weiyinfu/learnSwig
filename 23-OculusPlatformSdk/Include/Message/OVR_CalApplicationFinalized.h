// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

#ifndef OVR_CALAPPLICATIONFINALIZED_H
#define OVR_CALAPPLICATIONFINALIZED_H

#include "../OVR_Platform_Defs.h"
#include "../OVR_Types.h"

typedef struct ovrCalApplicationFinalized *ovrCalApplicationFinalizedHandle;

/// Number of milliseconds to wait before launching the app. Launcher should
/// display a countdown to the user while waiting.
OVRP_PUBLIC_FUNCTION(int) ovr_CalApplicationFinalized_GetCountdownMS(const ovrCalApplicationFinalizedHandle obj);

/// ID of the application we should launch into.
OVRP_PUBLIC_FUNCTION(ovrID) ovr_CalApplicationFinalized_GetID(const ovrCalApplicationFinalizedHandle obj);

/// Launch argument generated by the CAL system. This must be passed unmodified
/// to the application as an intent extra or command line argument
OVRP_PUBLIC_FUNCTION(const char *) ovr_CalApplicationFinalized_GetLaunchDetails(const ovrCalApplicationFinalizedHandle obj);


#endif
