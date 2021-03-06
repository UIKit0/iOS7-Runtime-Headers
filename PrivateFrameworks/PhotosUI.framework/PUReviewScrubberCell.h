/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class UIImageView, UIImage;

@interface PUReviewScrubberCell : UICollectionViewCell  {
    BOOL _favorite;
    BOOL _suggested;
    BOOL _wantsSmallSuggestionIndicators;
    UIImage *_image;
    UIImageView *__thumbnailImageView;
    UIImageView *__checkmarkImageView;
    UIImageView *__suggestedImageView;
}

@property(retain) UIImage * image;
@property(getter=isFavorite) BOOL favorite;
@property(getter=isSuggested) BOOL suggested;
@property BOOL wantsSmallSuggestionIndicators;
@property(readonly) UIImageView * _thumbnailImageView;
@property(readonly) UIImageView * _checkmarkImageView;
@property(readonly) UIImageView * _suggestedImageView;


- (id)_thumbnailImageView;
- (id)_suggestedImageView;
- (id)_checkmarkImageView;
- (void)setWantsSmallSuggestionIndicators:(BOOL)arg1;
- (BOOL)wantsSmallSuggestionIndicators;
- (BOOL)isSuggested;
- (void)setSuggested:(BOOL)arg1;
- (void)setFavorite:(BOOL)arg1;
- (void)setSuggested:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFavorite:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateThumbnailImageView;
- (void)_commonPUReviewScrubberCellInitialization;
- (void)_updateSuggestedView;
- (void)_updateFavoriteView;
- (BOOL)isFavorite;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end
