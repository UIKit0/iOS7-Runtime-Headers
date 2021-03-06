/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUViewController;

@interface SURotationController : NSObject  {
    SUViewController *_viewController;
}

@property SUViewController * viewController;


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })viewFrameForInterfaceOrientation:(int)arg1;
- (BOOL)orientationAffectsViewFrame;
- (id)initWithViewController:(id)arg1;
- (void)prepareToRotateToInterfaceOrientation:(int)arg1;
- (void)animateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)finishRotationFromInterfaceOrientation:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)viewController;
- (void)setViewController:(id)arg1;

@end
