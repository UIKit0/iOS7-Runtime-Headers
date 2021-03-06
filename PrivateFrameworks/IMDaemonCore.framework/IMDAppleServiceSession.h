/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSArray, NSString, IDSAccount;

@interface IMDAppleServiceSession : IMDServiceSession  {
    NSString *_serviceName;
    NSString *_GUID;
}

@property(readonly) IDSAccount * idsAccount;
@property(readonly) NSArray * aliases;
@property(readonly) NSArray * vettedAliases;
@property(readonly) NSString * callerID;
@property(readonly) NSString * serviceType;
@property(readonly) NSString * callerURI;
@property(readonly) NSArray * registeredURIs;
@property(readonly) NSString * GUID;


- (id)callerID;
- (void)reIdentify;
- (void)reregister;
- (void)activeDevicesUpdated;
- (id)callerURI;
- (int)_validationStatusForAlias:(id)arg1;
- (id)_aliasStrings;
- (id)certForURI:(id)arg1;
- (void)clearCallerID;
- (BOOL)_isDeviceRegistered;
- (void)_updateAccountStatusToUnregistered:(BOOL)arg1;
- (void)refreshRegistration;
- (void)loginServiceSession;
- (void)logoutServiceSession;
- (id)idsAccount;
- (void)sessionWillBecomeInactive;
- (void)sessionDidBecomeActive;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (void)deactivateAndPurgeIdentify;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)validateProfile;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)passwordUpdated;
- (void)authenticateAccount;
- (id)registeredURIs;
- (id)vettedAliases;
- (id)aliases;
- (int)validationStatusForAlias:(id)arg1;
- (id)_aliases;
- (id)serviceType;
- (id)GUID;
- (void)dealloc;

@end
