/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKCollectionViewCell;

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer  {
    GKCollectionViewCell *_currentEditingCell;
}

@property(retain) GKCollectionViewCell * currentEditingCell;


- (void)setCurrentEditingCell:(id)arg1;
- (id)currentEditingCell;
- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end