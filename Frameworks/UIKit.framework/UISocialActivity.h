/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, NSString, SLComposeViewController;

@interface UISocialActivity : UIActivity  {
    NSString *_socialActivityType;
    SLComposeViewController *_socialComposeViewController;
    UIImage *_composedImage;
}

@property(copy) NSString * socialActivityType;
@property(retain) SLComposeViewController * socialComposeViewController;
@property(retain) UIImage * composedImage;

+ (int)activityCategory;

- (void)dealloc;
- (id)composedImage;
- (id)socialComposeViewController;
- (void)setSocialComposeViewController:(id)arg1;
- (int)_maxImageDataSize;
- (int)_blockingActivityItemTypes;
- (int)_activityItemTypes;
- (void)setComposedImage:(id)arg1;
- (id)_serviceType;
- (id)socialActivityType;
- (void)setSocialActivityType:(id)arg1;
- (id)initActivityType:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (void)_cleanup;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityType;
- (id)activityTitle;
- (id)_activityImage;
- (struct CGSize { float x1; float x2; })_thumbnailSize;

@end
