/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILongPressGestureRecognizer, UIImage, UIView<_UISwitchInternalViewProtocol>, UIPanGestureRecognizer, UIColor;

@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding> {
    UILongPressGestureRecognizer *_pressGesture;
    UIPanGestureRecognizer *_panGesture;
    UIView<_UISwitchInternalViewProtocol> *_control;
    BOOL _onStateChangedByLongPressGestureRecognizer;
    BOOL _onStateChangedByPanGestureRecognizer;
    BOOL _on;
    float _enabledAlpha;
}

@property(getter=_onColor,setter=_setOnColor:,retain) UIColor * onColor;
@property(getter=_alwaysShowOnOffLabel,setter=_setAlwaysShowsOnOffLabel:) BOOL alwaysShowOnOffLabel;
@property(retain) UIColor * onTintColor;
@property(retain) UIColor * tintColor;
@property(retain) UIColor * thumbTintColor;
@property(retain) UIImage * onImage;
@property(retain) UIImage * offImage;
@property(getter=isOn) BOOL on;
@property float enabledAlpha;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (void)_setKnobBounceMass:(float)arg1;
- (float)_knobBounceMass;
- (void)_setKnobBounceStiffness:(float)arg1;
- (float)_knobBounceStiffness;
- (void)_setKnobBounceDamping:(float)arg1;
- (float)_knobBounceDamping;
- (void)_setKnobBounceDuration:(float)arg1;
- (float)_knobBounceDuration;
- (void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (void)setAlternateColors:(BOOL)arg1;
- (float)enabledAlpha;
- (BOOL)_alwaysShowOnOffLabel;
- (void)_setAlwaysShowsOnOffLabel:(BOOL)arg1;
- (id)_onColor;
- (void)_setOnColor:(id)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isOn;
- (void)_commonInitNewLookNeue1;
- (void)_commonInitNewLook;
- (BOOL)_useOldSize;
- (void)_animateToOn:(BOOL)arg1 withDuration:(float)arg2 sendAction:(BOOL)arg3;
- (BOOL)_handleTranslationInPanGestureRecognizer:(id)arg1;
- (void)_handleLongPressNL:(id)arg1;
- (void)_handleTapNL:(id)arg1;
- (void)_handlePanNL:(id)arg1;
- (void)setEnabledAlpha:(float)arg1;
- (id)_onTintColor;
- (void)setOn:(BOOL)arg1;
- (void)setOffImage:(id)arg1;
- (id)offImage;
- (void)setOnImage:(id)arg1;
- (id)onImage;
- (void)setOnTintColor:(id)arg1;
- (id)onTintColor;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setOnTintColor:(id)arg1;
- (id)thumbTintColor;
- (void)setThumbTintColor:(id)arg1;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_scriptingInfo;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)_encodeFrameWithCoder:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAlpha:(float)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
