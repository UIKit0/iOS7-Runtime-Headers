/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITransitionView, NSDictionary;

@interface PLUIController : NSObject  {
    id _delegate;
    UITransitionView *_fullScreenTransitionView;
    NSDictionary *_configuration;
}

+ (id)sharedInstance;

- (id)contentViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)configuration;
- (void)setConfiguration:(id)arg1;

@end
