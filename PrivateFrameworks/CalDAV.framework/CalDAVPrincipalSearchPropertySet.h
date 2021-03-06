/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject  {
    NSSet *_properties;
}

@property(readonly) NSSet * stringProperties;
@property(readonly) BOOL supportsPropertySearch;

+ (id)searchSetWithProperties:(id)arg1;

- (BOOL)isEqualToPropertySet:(id)arg1;
- (BOOL)supportsPropertySearch;
- (BOOL)supportsWellKnownType:(int)arg1;
- (id)initWithStringProperties:(id)arg1;
- (id)stringProperties;
- (id)initWithSearchProperties:(id)arg1;
- (BOOL)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)dealloc;

@end
