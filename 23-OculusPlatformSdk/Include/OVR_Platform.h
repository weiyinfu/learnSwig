// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

#ifndef OVR_PLATFORM_H
#define OVR_PLATFORM_H

#include <stdbool.h>

#include "OVR_Types.h"
#include "Enums/OVR_MessageType.h"
#include "OVR_Platform_Defs.h"
#include "OVR_Voip_LowLevel.h"
#include "OVR_PlatformVersion.h"

#include "Message/OVR_AbuseReportRecording.h"
#include "Message/OVR_AchievementDefinition.h"
#include "MessageArray/OVR_AchievementDefinitionArray.h"
#include "Message/OVR_AchievementProgress.h"
#include "MessageArray/OVR_AchievementProgressArray.h"
#include "Message/OVR_AchievementUpdate.h"
#include "Message/OVR_ApplicationInvite.h"
#include "MessageArray/OVR_ApplicationInviteArray.h"
#include "Message/OVR_ApplicationVersion.h"
#include "Message/OVR_AssetDetails.h"
#include "MessageArray/OVR_AssetDetailsArray.h"
#include "Message/OVR_AssetFileDeleteResult.h"
#include "Message/OVR_AssetFileDownloadCancelResult.h"
#include "Message/OVR_AssetFileDownloadResult.h"
#include "Message/OVR_AssetFileDownloadUpdate.h"
#include "Message/OVR_CalApplicationFinalized.h"
#include "Message/OVR_CalApplicationProposed.h"
#include "Message/OVR_CalApplicationSuggestion.h"
#include "MessageArray/OVR_CalApplicationSuggestionArray.h"
#include "Message/OVR_Challenge.h"
#include "MessageArray/OVR_ChallengeArray.h"
#include "Message/OVR_ChallengeEntry.h"
#include "MessageArray/OVR_ChallengeEntryArray.h"
#include "Message/OVR_CloudStorageConflictMetadata.h"
#include "Message/OVR_CloudStorageData.h"
#include "Message/OVR_CloudStorageMetadata.h"
#include "MessageArray/OVR_CloudStorageMetadataArray.h"
#include "Message/OVR_CloudStorageUpdateResponse.h"
#include "Message/OVR_DataStore.h"
#include "Message/OVR_Destination.h"
#include "MessageArray/OVR_DestinationArray.h"
#include "Message/OVR_Error.h"
#include "Message/OVR_GroupPresenceJoinIntent.h"
#include "Message/OVR_GroupPresenceLeaveIntent.h"
#include "Message/OVR_HttpTransferUpdate.h"
#include "Message/OVR_InstalledApplication.h"
#include "MessageArray/OVR_InstalledApplicationArray.h"
#include "Message/OVR_InvitePanelResultInfo.h"
#include "Message/OVR_LanguagePackInfo.h"
#include "Message/OVR_LaunchBlockFlowResult.h"
#include "Message/OVR_LaunchDetails.h"
#include "Message/OVR_LaunchFriendRequestFlowResult.h"
#include "Message/OVR_LaunchInvitePanelFlowResult.h"
#include "Message/OVR_LaunchReportFlowResult.h"
#include "Message/OVR_LaunchUnblockFlowResult.h"
#include "Message/OVR_Leaderboard.h"
#include "MessageArray/OVR_LeaderboardArray.h"
#include "Message/OVR_LeaderboardEntry.h"
#include "MessageArray/OVR_LeaderboardEntryArray.h"
#include "MessageComplicate/OVR_LeaderboardUpdateStatus.h"
#include "Message/OVR_LinkedAccount.h"
#include "MessageArray/OVR_LinkedAccountArray.h"
#include "Message/OVR_LivestreamingApplicationStatus.h"
#include "Message/OVR_LivestreamingStartResult.h"
#include "Message/OVR_LivestreamingStatus.h"
#include "Message/OVR_LivestreamingVideoStats.h"
#include "Message/OVR_MatchmakingAdminSnapshot.h"
#include "Message/OVR_MatchmakingAdminSnapshotCandidate.h"
#include "MessageArray/OVR_MatchmakingAdminSnapshotCandidateArray.h"
#include "Message/OVR_MatchmakingBrowseResult.h"
#include "Message/OVR_MatchmakingEnqueueResult.h"
#include "Message/OVR_MatchmakingEnqueueResultAndRoom.h"
#include "MessageComplicate/OVR_MatchmakingEnqueuedUser.h"
#include "MessageArray/OVR_MatchmakingEnqueuedUserArray.h"
#include "Message/OVR_MatchmakingRoom.h"
#include "MessageArray/OVR_MatchmakingRoomArray.h"
#include "Message/OVR_MatchmakingStats.h"
#include "Message/OVR_Message.h"
#include "LocalService/OVR_Microphone.h"
#include "Message/OVR_MicrophoneAvailabilityState.h"
#include "Message/OVR_NetSyncConnection.h"
#include "Message/OVR_NetSyncSession.h"
#include "MessageArray/OVR_NetSyncSessionArray.h"
#include "Message/OVR_NetSyncSessionsChangedNotification.h"
#include "Message/OVR_NetSyncSetSessionPropertyResult.h"
#include "Message/OVR_NetSyncVoipAttenuationValue.h"
#include "MessageArray/OVR_NetSyncVoipAttenuationValueArray.h"
#include "Message/OVR_NetworkingPeer.h"
#include "Message/OVR_OrgScopedID.h"
#include "LocalService/OVR_Packet.h"
#include "Message/OVR_Party.h"
#include "Message/OVR_PartyID.h"
#include "Message/OVR_PartyUpdateNotification.h"
#include "Message/OVR_Pid.h"
#include "MessageArray/OVR_PidArray.h"
#include "Message/OVR_PingResult.h"
#include "Message/OVR_PlatformInitialize.h"
#include "Message/OVR_Product.h"
#include "MessageArray/OVR_ProductArray.h"
#include "Message/OVR_Purchase.h"
#include "MessageArray/OVR_PurchaseArray.h"
#include "Message/OVR_RejoinDialogResult.h"
#include "Message/OVR_Room.h"
#include "MessageArray/OVR_RoomArray.h"
#include "Message/OVR_RoomInviteNotification.h"
#include "MessageArray/OVR_RoomInviteNotificationArray.h"
#include "Message/OVR_SdkAccount.h"
#include "MessageArray/OVR_SdkAccountArray.h"
#include "Message/OVR_SendInvitesResult.h"
#include "Message/OVR_ShareMediaResult.h"
#include "Message/OVR_SupplementaryMetric.h"
#include "Message/OVR_SystemVoipState.h"
#include "Message/OVR_Team.h"
#include "MessageArray/OVR_TeamArray.h"
#include "Message/OVR_User.h"
#include "Message/OVR_UserAndRoom.h"
#include "MessageArray/OVR_UserAndRoomArray.h"
#include "MessageArray/OVR_UserArray.h"
#include "Message/OVR_UserDataStoreUpdateResponse.h"
#include "Message/OVR_UserProof.h"
#include "Message/OVR_UserReportID.h"
#include "LocalService/OVR_VoipDecoder.h"
#include "LocalService/OVR_VoipEncoder.h"

#include "Requests/OVR_Requests_Achievements.h"
#include "Requests/OVR_Requests_Application.h"
#include "Requests/OVR_Requests_ApplicationLifecycle.h"
#include "Requests/OVR_Requests_AssetFile.h"
#include "Requests/OVR_Requests_Challenges.h"
#include "Requests/OVR_Requests_CloudStorage.h"
#include "Requests/OVR_Requests_CloudStorage2.h"
#include "Requests/OVR_Requests_Entitlement.h"
#include "Requests/OVR_Requests_GroupPresence.h"
#include "Requests/OVR_Requests_IAP.h"
#include "Requests/OVR_Requests_LanguagePack.h"
#include "Requests/OVR_Requests_Leaderboard.h"
#include "Requests/OVR_Requests_Matchmaking.h"
#include "Requests/OVR_Requests_Media.h"
#include "Requests/OVR_Requests_Notification.h"
#include "Requests/OVR_Requests_Party.h"
#include "Requests/OVR_Requests_RichPresence.h"
#include "Requests/OVR_Requests_Room.h"
#include "Requests/OVR_Requests_User.h"
#include "Requests/OVR_Requests_UserDataStore.h"
#include "Requests/OVR_Requests_Voip.h"
#include "Options/OVR_AbuseReportOptions.h"
#include "Options/OVR_AdvancedAbuseReportOptions.h"
#include "Options/OVR_ApplicationOptions.h"
#include "Options/OVR_ChallengeOptions.h"
#include "Options/OVR_GroupPresenceOptions.h"
#include "OptionsComplicate/OVR_InviteOptions.h"
#include "OptionsComplicate/OVR_MatchmakingOptions.h"
#include "Options/OVR_MultiplayerErrorOptions.h"
#include "Options/OVR_NetSyncOptions.h"
#include "OptionsComplicate/OVR_RichPresenceOptions.h"
#include "OptionsComplicate/OVR_RoomOptions.h"
#include "OptionsComplicate/OVR_RosterOptions.h"
#include "Options/OVR_UserOptions.h"
#include "Options/OVR_VoipOptions.h"
#include "Functions/OVR_Functions_ApplicationLifecycle.h"
#include "Functions/OVR_Functions_Networking.h"
#include "Functions/OVR_Functions_Voip.h"

OVRP_PUBLIC_FUNCTION(bool) ovr_IsPlatformInitialized();

#ifdef __ANDROID__
#include <jni.h>
OVRP_PUBLIC_FUNCTION(ovrPlatformInitializeResult) ovr_PlatformInitializeAndroid(const char* appId, jobject activityObject, JNIEnv * jni);

// Asynchronously Initialize Platform SDK. The result will be put on the message
// queue with the message type: ovrMessage_PlatformInitializeAndroidAsynchronous
//
// While the platform is in an initializing state, it's not fully functional.
// [Requests]: will queue up and run once platform is initialized.
//    For example: ovr_User_GetLoggedInUser() can be called immediately after
//    asynchronous init and once platform is initialized, this request will run
// [Synchronous Methods]: will return the default value;
//    For example: ovr_GetLoggedInUserID() will return 0 until platform is
//    fully initialized
OVRP_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeAndroidAsynchronous(const char* appId, jobject activityObject, JNIEnv * jni);
#endif

/// This enum describes the type of versionable structs in the Oculus Platform
/// API. Older versions of structs will not be declared here, but they will be
/// seamlessly updated for all supported older versions of the SDK.
typedef enum ovrPlatformStructureType_ {
  ovrPlatformStructureType_Unknown = 0,
  ovrPlatformStructureType_OculusInitParams = 1,
} ovrPlatformStructureType;

/// sType - Credential struct type, must be: ovrPlatformStructureType_OculusInitParams
/// email - Email address associated with Oculus account.
/// password - Password for the Oculus account.
/// appID - ID of the application (user must be entitled).
/// uriPrefixOverride - optional override for https://graph.oculus.com
typedef struct {
  ovrPlatformStructureType sType;
  const char *email;
  const char *password;
  ovrID appId;
  const char *uriPrefixOverride;
} ovrOculusInitParams;

#ifdef __ANDROID__ //Needed for compatibility. 1.13 introduced this method

/// Initializes the SDK in Standalone mode and doesn't try to connect to a locally running Oculus
/// Service process.  Not all functionality will work when when the SDK is initialized this
/// way.  In particular: IAP, Cloud Storage, Parties, Events, Live Streaming.
/// Listen for the message ovrMessage_Platform_InitializeStandaloneOculus to detect when
/// the platform has finished initializing.
/// \param params non-nullptr to a struct with the required Oculus Authentication data.
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_Platform_InitializeStandaloneOculus(
  const ovrOculusInitParams *params);
#else
#if defined(OVRPL_DISABLED)

/// Initializes the SDK in Standalone mode and doesn't try to connect to a locally running Oculus
/// Service process.  Not all functionality will work when when the SDK is initialized this
/// way.  In particular: IAP, Cloud Storage, Parties, Events, Live Streaming.
/// Listen for the message ovrMessage_Platform_InitializeStandaloneOculus to detect when
/// the platform has finished initializing.
/// \param params non-nullptr to a struct with the required Oculus Authentication data.
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_Platform_InitializeStandaloneOculus(
  const ovrOculusInitParams *params);

/// (BETA) For use on platforms where the Oculus service isn't running.  
/// You'll need to know how to get an access token for the user to use this.
/// While the platform is in an initializing state, it's not fully functional.
/// [Requests]: will queue up and run once platform is initialized.
///    For example: ovr_User_GetLoggedInUser() can be called immediately after
///    asynchronous init and once platform is initialized, this request will run
/// [Synchronous Methods]: will return the default value;
///    For example: ovr_GetLoggedInUserID() will return 0 until platform is
///    fully initialized
///
/// Not all functionality will work when when the SDK is initialized this
/// way.  In particular: In-App Purchases, Cloud Storage, Parties, Events, Live Streaming
/// will not work.
/// Listen for the message ovrMessage_PlatformInitializeWithAccessToken to detect when
/// the platform has finished initializing.
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeWithAccessToken(
  ovrID appId,
  const char *serviceAccessToken);

/// Performs the initialization of the platform for use on Windows. Requires your app
/// ID (not access token). This call may fail for a variety of reasons, and will return
/// an error code in that case. It is critical to respect this error code and either
/// exit or make no further platform calls.
OVRPL_PUBLIC_FUNCTION(ovrPlatformInitializeResult) ovr_PlatformInitializeWindows(const char* appId);

// Asynchronously Initialize Platform SDK. The result will be put on the message
// queue with the message type: ovrMessage_PlatformInitializeWindowsAsynchronous
//
// While the platform is in an initializing state, it's not fully functional.
// [Requests]: will queue up and run once platform is initialized.
//    For example: ovr_User_GetLoggedInUser() can be called immediately after
//    asynchronous init and once platform is initialized, this request will run
// [Synchronous Methods]: will return the default value;
//    For example: ovr_GetLoggedInUserID() will return 0 until platform is
//    fully initialized
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeWindowsAsynchronous(const char* appId);
#else

/// Initializes the SDK in Standalone mode and doesn't try to connect to a locally running Oculus
/// Service process.  Not all functionality will work when when the SDK is initialized this
/// way.  In particular: IAP, Cloud Storage, Parties, Events, Live Streaming.
/// Listen for the message ovrMessage_Platform_InitializeStandaloneOculus to detect when
/// the platform has finished initializing.
/// \param params non-nullptr to a struct with the required Oculus Authentication data.
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_Platform_InitializeStandaloneOculusEx(
  const ovrOculusInitParams *params, ovrPlatformInitializeResult *outResult, int productVersion, int majorVersion);

/// Wrapper for ovr_Platform_InitializeStandaloneOculusEx that automatically passes the key
/// version information as defined in this header package. This is used to ensure that the
/// version in your headers matches the version of the static library.
#define ovr_Platform_InitializeStandaloneOculus(params, outResult) ovr_Platform_InitializeStandaloneOculusEx(params, outResult, PLATFORM_PRODUCT_VERSION, PLATFORM_MAJOR_VERSION)

/// (BETA) For use on platforms where the Oculus service isn't running.  
/// You'll need to know how to get an access token for the user to use this.
/// While the platform is in an initializing state, it's not fully functional.
/// [Requests]: will queue up and run once platform is initialized.
///    For example: ovr_User_GetLoggedInUser() can be called immediately after
///    asynchronous init and once platform is initialized, this request will run
/// [Synchronous Methods]: will return the default value;
///    For example: ovr_GetLoggedInUserID() will return 0 until platform is
///    fully initialized
///
/// outResult will contain the result of attempting to load the DLL.
/// If that fails, the returning ovrRequest will be 0.
///
/// NOTE: Just because the DLL is loaded successfully does NOT mean that the
/// initialization was successful.
/// Listen for the message ovrMessage_PlatformInitializeWithAccessToken to detect when
/// the platform has finished initializing.
///
/// Not all functionality will work when when the SDK is initialized this
/// way.  In particular: In-App Purchases, Cloud Storage, Parties, Events, Live Streaming
/// will not work.

OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeWithAccessTokenEx(
  ovrID appId,
  const char *serviceAccessToken,
  ovrPlatformInitializeResult *outResult,
  int productVersion,
  int majorVersion);

#define ovr_PlatformInitializeWithAccessToken(appId, serviceAccessToken, outResult) \
  ovr_PlatformInitializeWithAccessTokenEx(appId, serviceAccessToken, outResult, \
  PLATFORM_PRODUCT_VERSION, PLATFORM_MAJOR_VERSION)

/// Performs the initialization of the platform for use on Windows. Requires your app
/// ID (not access token). This call may fail for a variety of reasons, and will return
/// an error code in that case. It is critical to respect this error code and either
/// exit or make no further platform calls.
OVRPL_PUBLIC_FUNCTION(ovrPlatformInitializeResult) ovr_PlatformInitializeWindowsEx(const char* appId, int productVersion, int majorVersion);

/// Wrapper for ovr_PlatformInitializeWindowsEx that automatically passes the key version
/// information as defined in this header package. This is used to ensure that the version
/// in your headers matches the version of the static library.
#define ovr_PlatformInitializeWindows(appId) ovr_PlatformInitializeWindowsEx((appId), PLATFORM_PRODUCT_VERSION, PLATFORM_MAJOR_VERSION)


/// Performs the initialization of the platform for use on Windows. Requires your app
/// ID (not access token). This call may fail for a variety of reasons, and will return
/// an error code in that case. It is critical to respect this error code and either
/// exit or make no further platform calls.
///
/// outResult will contain the result of attempting to load the DLL.
/// If that fails, the returning ovrRequest will be 0.
///
/// NOTE: Just because the DLL is loaded successfully does NOT mean that the
/// initialization was successful, you still need to check the message queue
/// for the result in ovrMessage_PlatformInitializeWindowsAsynchronous
OVRPL_PUBLIC_FUNCTION(ovrRequest) ovr_PlatformInitializeWindowsAsynchronousEx(const char* appId, ovrPlatformInitializeResult *outResult, int productVersion, int majorVersion);

/// Wrapper for ovr_PlatformInitializeWindowsAsynchronousEx that automatically passes the key version
/// information as defined in this header package. This is used to ensure that the version
/// in your headers matches the version of the static library.
///
/// outResult will contain the result of attempting to load the DLL.
/// If that fails, the returning ovrRequest will be 0.
///
/// NOTE: Just because the DLL is loaded successfully does NOT mean that the
/// initialization was successful, you still need to check the message queue
/// for the result in ovrMessage_PlatformInitializeWindowsAsynchronous
#define ovr_PlatformInitializeWindowsAsynchronous(appId, outResult) ovr_PlatformInitializeWindowsAsynchronousEx(appId, outResult, PLATFORM_PRODUCT_VERSION, PLATFORM_MAJOR_VERSION)
#endif
#endif //Android

/// Returns the id of the currently logged in user, or a 0 id if there
/// is none.
OVRP_PUBLIC_FUNCTION(ovrID) ovr_GetLoggedInUserID();

/// Returns the currently logged-in user's locale as a string, or empty string on error.
/// Return value format conforms to BCP47: https://tools.ietf.org/html/bcp47
/// The return value is borrowed, and should not be freed
OVRP_PUBLIC_FUNCTION(const char*) ovr_GetLoggedInUserLocale();


/// Return the next message in the queue (FIFO order), or null if none
/// is available.  Safe to call on any thread.  Each returned message
/// should eventually be freed with ovr_FreeMessage.
///
/// TODO: comment on whether it's safe to process messages out of
/// order.
OVRPL_PUBLIC_FUNCTION(ovrMessageHandle) ovr_PopMessage();

OVRP_PUBLIC_FUNCTION(void) ovr_FreeMessage(ovrMessageHandle);

OVRP_PUBLIC_FUNCTION(void) ovr_SetDeveloperAccessToken(const char *accessToken);

#endif
