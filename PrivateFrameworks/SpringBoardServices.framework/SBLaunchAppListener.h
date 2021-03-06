/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSLock;

@interface SBLaunchAppListener : NSObject  {
    NSString *_displayIdentifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSLock *_lock;
    BOOL _launched;
    int _notifyToken;
    int _notifyAppExitedToken;
    unsigned int _notifyRegisterStatus;
    unsigned int _notifyAppExitedStatus;
}

+ (BOOL)waitForLaunchThatSpringBoardKnowsAbout:(id)arg1 timeout:(double)arg2;

- (id)initWithDisplayIdentifier:(id)arg1 handlerBlock:(id)arg2;
- (void)_didFailToLaunch;
- (void)_didLaunch;
- (void)invalidate;
- (void)dealloc;

@end
