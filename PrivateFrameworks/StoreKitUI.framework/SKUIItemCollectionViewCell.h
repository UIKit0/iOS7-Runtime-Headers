/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIItemCellLayout;

@interface SKUIItemCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView> {
    BOOL _layoutNeedsLayout;
}

@property(readonly) SKUIItemCellLayout * layout;


- (void)setCellLayoutNeedsLayout;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;

@end
