/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand  {
}

@property(copy) NSData * certificate;

+ (id)getSessionCertificateResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getSessionCertificateResponse;

- (void)setCertificate:(id)arg1;
- (id)certificate;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
