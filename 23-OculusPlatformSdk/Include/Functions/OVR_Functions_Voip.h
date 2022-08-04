// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

#ifndef OVR_VOIP_H
#define OVR_VOIP_H

#include "../OVR_Platform_Defs.h"
#include "../Enums/OVR_SystemVoipStatus.h"
#include "../OVR_Types.h"
#include "../Enums/OVR_VoipBitrate.h"
#include "../Enums/OVR_VoipMuteState.h"
#include "../Options/OVR_VoipOptions.h"
#include "../Enums/OVR_VoipSampleRate.h"

/// Accepts a VoIP connection from a given user.
OVRP_PUBLIC_FUNCTION(void) ovr_Voip_Accept(ovrID userID);

/// Gets whether or not a voice connection is using discontinuous transmission
/// (DTX). Both sides must set to using DTX when their connection is
/// established in order for this to be true. Returns unknown if there is no
/// connection.
OVRP_PUBLIC_FUNCTION(ovrVoipDtxState) ovr_Voip_GetIsConnectionUsingDtx(ovrID peerID);

/// Gets the current local bitrate used for the connection to the specified
/// user. This is set by the current client. Returns unknown if there is no
/// connection.
OVRP_PUBLIC_FUNCTION(ovrVoipBitrate) ovr_Voip_GetLocalBitrate(ovrID peerID);

/// Returns the size of the internal ringbuffer used by the voip system in
/// elements. This size is the maximum number of elements that can ever be
/// returned by ovr_Voip_GetPCM().
///
/// This function can be safely called from any thread.
OVRP_PUBLIC_FUNCTION(size_t) ovr_Voip_GetOutputBufferMaxSize();

/// Gets all available samples of voice data for the specified peer and copies
/// it into outputBuffer. The voip system will generate data at roughly the
/// rate of 480 samples per 10ms. This function should be called every frame
/// with 50ms (2400 elements) of buffer size to account for frame rate
/// variations. The data format is 16 bit fixed point 48khz mono.
///
/// This function can be safely called from any thread.
OVRP_PUBLIC_FUNCTION(size_t) ovr_Voip_GetPCM(ovrID senderID, int16_t *outputBuffer, size_t outputBufferNumElements);

/// Gets all available samples of voice data for the specified peer and copies
/// it into outputBuffer. The voip system will generate data at roughly the
/// rate of 480 samples per 10ms. This function should be called every frame
/// with 50ms (2400 elements) of buffer size to account for frame rate
/// variations. The data format is 32 bit floating point 48khz mono.
///
/// This function can be safely called from any thread.
OVRP_PUBLIC_FUNCTION(size_t) ovr_Voip_GetPCMFloat(ovrID senderID, float *outputBuffer, size_t outputBufferNumElements);

/// Returns the current number of audio samples available to read for the
/// specified user. This function is inherently racy; it's possible that more
/// data can be added between a call to this function and a subsequent call to
/// ovr_Voip_GetPCM().
///
/// This function can be safely called from any thread.
OVRP_PUBLIC_FUNCTION(size_t) ovr_Voip_GetPCMSize(ovrID senderID);

/// Like ovr_Voip_GetPCM(), this function copies available audio samples into a
/// provided buffer, but also stores the timestamp of the first sample in the
/// output parameter 'timestamp'. This timestamp can be used for
/// synchronization; see ovr_Voip_GetSyncTimestamp() for more details.
///
/// This function returns a number of samples copied. Note that it may return
/// early, even if there's more data available, in order to keep the batch of
/// audio samples with a single timestamp small; for example, if there's 30ms
/// worth of audio in the buffer, this function may return 480 samples (10ms)
/// each time it's called. Therefore, it's recommended to call this as long as
/// there's data in the buffer (i.e. the function returns a non-zero result).
OVRP_PUBLIC_FUNCTION(size_t) ovr_Voip_GetPCMWithTimestamp(ovrID senderID, int16_t *outputBuffer, size_t outputBufferNumElements, uint32_t *timestamp);

/// See ovr_Voip_GetPCMWithTimestamp(). Uses a 32-bit floating-point data
/// format.
OVRP_PUBLIC_FUNCTION(size_t) ovr_Voip_GetPCMWithTimestampFloat(ovrID senderID, float *outputBuffer, size_t outputBufferNumElements, uint32_t *timestamp);

/// Gets the current remote bitrate used for the connection to the specified
/// user. This is set by the client on the other side of the connection.
/// Returns unknown if there is no connection.
OVRP_PUBLIC_FUNCTION(ovrVoipBitrate) ovr_Voip_GetRemoteBitrate(ovrID peerID);

/// Returns a timestamp used for synchronizing audio samples sent to the given
/// user with an external data stream.
///
/// Timestamps associated with audio frames are implicitly transmitted to
/// remote peers; on the receiving side, they can be obtained by using
/// ovr_Voip_GetPCMWithTimestamp(). ovr_Voip_GetPCMWithTimestamp() is used to
/// fetch those timestamps on the sending side -- an application can insert the
/// value returned by this function into each data packet and compare it to the
/// value returned by GetPCMWithTimestamp() on the receiving side in order to
/// determine the ordering of two events (sampling audio and composing a data
/// packet).
///
/// Note: the timestamp is generated by an unspecified clock; it's doesn't
/// generally represent wall-clock time. Use
/// ovr_Voip_GetSyncTimestampDifference() to convert the difference between two
/// timestamps to microseconds.
///
/// This function assumes that a voice connection to the user already exists;
/// it returns 0 if that isn't the case.
OVRP_PUBLIC_FUNCTION(uint32_t) ovr_Voip_GetSyncTimestamp(ovrID userID);

/// Calculates the difference between two sync timestamps, returned by either
/// ovr_Voip_GetSyncTimestamp() or ovr_Voip_GetPCMWithTimestamp(), and converts
/// it to microseconds.
///
/// Return value will be negative if lhs is smaller than rhs, zero if both
/// timestamps are the same, and positive otherwise. The absolute value of the
/// result is the time in microseconds between two sync timestamps.
OVRP_PUBLIC_FUNCTION(long long) ovr_Voip_GetSyncTimestampDifference(uint32_t lhs, uint32_t rhs);

/// Returns SystemVoip microphone's mute state.
OVRP_PUBLIC_FUNCTION(ovrVoipMuteState) ovr_Voip_GetSystemVoipMicrophoneMuted();

/// Returns SystemVoip status.
OVRP_PUBLIC_FUNCTION(ovrSystemVoipStatus) ovr_Voip_GetSystemVoipStatus();

/// This function allows you to set a callback that will be called every time
/// audio data is captured by the microphone. The callback function must match
/// this signature: void filterCallback(int16_t pcmData[], size_t
/// pcmDataLength, int frequency, int numChannels); The pcmData param is used
/// for both input and output. pcmDataLength is the size of pcmData in
/// elements. numChannels will be 1 or 2. If numChannels is 2, then the channel
/// data will be interleaved in pcmData. Frequency is the input data sample
/// rate in hertz.
///
/// This function can be safely called from any thread.
OVRP_PUBLIC_FUNCTION(void) ovr_Voip_SetMicrophoneFilterCallback(VoipFilterCallback cb);

/// This function is used to enable or disable the local microphone. When
/// muted, the microphone will not transmit any audio. Voip connections are
/// unaffected by this state. New connections can be established or closed
/// whether the microphone is muted or not. This can be used to implement push-
/// to-talk, or a local mute button. The default state is unmuted.
///
/// This function can be safely called from any thread.
OVRP_PUBLIC_FUNCTION(void) ovr_Voip_SetMicrophoneMuted(ovrVoipMuteState state);

/// The options set for newly created connections to use. Existing connections
/// will continue to use their current settings until they are destroyed and
/// recreated.
OVRP_PUBLIC_FUNCTION(void) ovr_Voip_SetNewConnectionOptions(ovrVoipOptionsHandle voipOptions);

/// Sets the output sample rate. Audio data will be resampled as it is placed
/// into the internal ringbuffer.
///
/// This function can be safely called from any thread.
OVRP_PUBLIC_FUNCTION(void) ovr_Voip_SetOutputSampleRate(ovrVoipSampleRate rate);

/// Attempts to establish a VoIP session with the specified user. A message of
/// type ovrNotification_Voip_StateChange will be posted when the session is
/// established.
///
/// This function can be safely called from any thread.
OVRP_PUBLIC_FUNCTION(void) ovr_Voip_Start(ovrID userID);

/// Terminates a VoIP session with the specified user. Note that a muting
/// functionality should be used to temporarily stop sending audio; restarting
/// a VoIP session after tearing it down may be an expensive operation.
///
/// This function can be safely called from any thread.
OVRP_PUBLIC_FUNCTION(void) ovr_Voip_Stop(ovrID userID);


#endif
