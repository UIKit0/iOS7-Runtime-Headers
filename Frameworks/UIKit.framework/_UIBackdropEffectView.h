/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CABackdropLayer;

@interface _UIBackdropEffectView : UIView  {
    CABackdropLayer *_backdropLayer;
    float _zoom;
}

@property(retain) CABackdropLayer * backdropLayer;
@property float zoom;

+ (Class)layerClass;

- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (id)init;
- (void)dealloc;
- (float)zoom;
- (void)setBackdropLayer:(id)arg1;
- (void)setZoom:(float)arg1;
- (id)backdropLayer;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
