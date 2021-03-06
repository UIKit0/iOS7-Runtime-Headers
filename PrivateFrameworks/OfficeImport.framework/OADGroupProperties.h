/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, OADShape3D, OADScene3D, OADFill;

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
}

+ (id)defaultProperties;

- (id)shape3D;
- (id)scene3D;
- (BOOL)hasShape3D;
- (BOOL)hasScene3D;
- (void)setShape3D:(id)arg1;
- (void)setScene3D:(id)arg1;
- (id)initWithDefaults;
- (void)setEffects:(id)arg1;
- (BOOL)hasEffects;
- (id)effects;
- (void)setFill:(id)arg1;
- (BOOL)hasFill;
- (void)dealloc;
- (id)fill;

@end
