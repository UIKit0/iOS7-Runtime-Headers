/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUIControlCenterButtonDelegate>, UIImage;

@interface SBUIControlCenterButton : UIButton <SBUIControlCenterControl> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _bgCapInsets;
    <SBUIControlCenterButtonDelegate> *_delegate;
    UIImage *_bgMaskImage;
    UIImage *_selectedBGMaskImage;
    UIImage *_glyphMaskImage;
    UIImage *_selectedGlyphMaskImage;
    float _naturalHeight;
}

@property <SBUIControlCenterButtonDelegate> * delegate;
@property(setter=setBGMaskImage:,retain) UIImage * bgMaskImage;
@property(setter=setSelectedBGMaskImage:,retain) UIImage * selectedBGMaskImage;
@property(retain) UIImage * glyphMaskImage;
@property(retain) UIImage * selectedGlyphMaskImage;
@property float naturalHeight;

+ (id)roundRectButton;
+ (id)circularButton;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })visibleContentInsets;
+ (id)_roundRectSelectedBackgroundImage;
+ (id)_roundRectBackgroundImage;
+ (id)_buttonWithBGImage:(id)arg1 selectedBGImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(float)arg4;
+ (id)_circleBackgroundImage;
+ (id)roundRectButtonWithGlyphImage:(id)arg1;
+ (id)circularButtonWithGlyphImage:(id)arg1;

- (struct CGSize { float x1; float x2; })visibleContentSize;
- (void)_updateDisabledImage;
- (void)_updateForStateChange;
- (void)setNaturalHeight:(float)arg1;
- (void)_updateHighlightImage;
- (void)_updateNormalImage;
- (id)selectedGlyphMaskImage;
- (id)glyphMaskImage;
- (id)selectedBGMaskImage;
- (id)bgMaskImage;
- (void)setSelectedGlyphMaskImage:(id)arg1;
- (void)setGlyphMaskImage:(id)arg1;
- (void)setSelectedBGMaskImage:(id)arg1;
- (void)setBGMaskImage:(id)arg1;
- (void)_pressAction;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)_setBackgroundImage:(id)arg1 selectedBackgroundImage:(id)arg2 naturalHeight:(float)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundImage:(id)arg2 selectedBackgroundImage:(id)arg3 glyphImage:(id)arg4 naturalHeight:(float)arg5;
- (void)controlConfigurationDidChangeForState:(int)arg1;
- (void)controlAppearanceDidChangeForState:(int)arg1;
- (int)_currentState;
- (BOOL)_drawingAsSelected;
- (void)_updateSelected:(BOOL)arg1 highlighted:(BOOL)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)naturalHeight;
- (void)setEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
