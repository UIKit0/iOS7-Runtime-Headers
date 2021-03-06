/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class IMAVChat;

@interface TUFaceTimeAudioCall : TUCall  {
    IMAVChat *_chat;
}


- (void)disconnect;
- (int)service;
- (id)isoCountryCode;
- (BOOL)needsManualInCallSounds;
- (BOOL)managesAudioInterruptions;
- (id)audioMode;
- (id)audioCategory;
- (double)callDuration;
- (BOOL)isAlerting;
- (void)leaveConference;
- (void)joinConference;
- (id)bundleIDForHostingApplication;
- (BOOL)unhold;
- (BOOL)hold;
- (void)answer;
- (id)initWithChat:(id)arg1;
- (id)remoteParticipant;
- (id)chat;
- (BOOL)isOutgoing;
- (BOOL)isConferenced;
- (int)status;
- (BOOL)isBlocked;
- (id)callerNameFromNetwork;
- (id)destinationID;
- (int)callIdentifier;
- (BOOL)setMuted:(BOOL)arg1;
- (BOOL)isTTY;
- (BOOL)isMuted;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)resume;
- (double)startTime;

@end
