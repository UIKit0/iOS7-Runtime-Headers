/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIReviewMetadata, <SKUIComposeReviewFormDelegate>, SKUIComposeReviewView;

@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate> {
    SKUIComposeReviewView *_composeView;
    <SKUIComposeReviewFormDelegate> *_delegate;
    SKUIReviewMetadata *_review;
}

@property <SKUIComposeReviewFormDelegate> * delegate;
@property(readonly) SKUIReviewMetadata * editedReviewMetadata;


- (void)composeReviewViewValidityChanged:(id)arg1;
- (void)_submit;
- (id)initWithReviewMetadata:(id)arg1;
- (id)editedReviewMetadata;
- (void)setRating:(float)arg1;
- (void)_cancel;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;

@end
