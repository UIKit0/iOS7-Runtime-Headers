/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIEditorialCardCellLayout;

@interface SKUIEditorialCardCell : SKUICollectionViewCell <SKUICellLayoutParentView> {
    SKUIEditorialCardCellLayout *_layout;
    BOOL _layoutNeedsLayout;
}

@property(readonly) SKUIEditorialCardCellLayout * layout;


- (void)configureForSearchEditorial:(id)arg1;
- (void)setCellLayoutNeedsLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layout;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
