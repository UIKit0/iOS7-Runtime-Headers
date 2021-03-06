/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UITableViewCellEditControlMinusView, UIImageView, UITableViewCell;

@interface UITableViewCellEditControl : UIControl  {
    UITableViewCell *_cell;
    UIImageView *_imageView;
    _UITableViewCellEditControlMinusView *_minusView;
    UIImageView *_shadowView;
    unsigned int _style : 2;
    unsigned int _rotated : 1;
    unsigned int _rotating : 1;
    unsigned int _hiding : 1;
    unsigned int _reserved : 27;
}

@property(getter=isRotated) BOOL rotated;
@property(getter=isHiding) BOOL hiding;

+ (id)_multiSelectSelectedImage;
+ (id)_multiSelectHighlightedImage;
+ (id)_insertImage:(float)arg1;
+ (id)_deleteImage:(float)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_minusRect;
+ (id)_deleteImageBackground:(float)arg1;
+ (id)_multiSelectNotSelectedImage;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)_toggleRotate;
- (void)_updateImageView;
- (id)_minusView;
- (id)_currentImage;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2;
- (void)setRotated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRotated:(BOOL)arg1;
- (id)_shadowImage;
- (BOOL)isRotated;
- (BOOL)isHiding;
- (void)setHiding:(BOOL)arg1;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)_multiselectColorChanged;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isRotating;
- (void)layoutSubviews;

@end
