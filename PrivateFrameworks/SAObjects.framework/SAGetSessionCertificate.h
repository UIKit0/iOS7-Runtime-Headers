/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAGetSessionCertificate : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)getSessionCertificateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getSessionCertificate;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
