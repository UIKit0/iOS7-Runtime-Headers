/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet;

@interface UITouchesEvent : UIInternalEvent  {
    NSMutableSet *_touches;
    struct __CFDictionary { } *_keyedTouches;
    struct __CFDictionary { } *_keyedTouchesByWindow;
    struct __CFDictionary { } *_gestureRecognizersByWindow;
}


- (void)dealloc;
- (id)description;
- (void)_moveTouchesFromView:(id)arg1 toView:(id)arg2;
- (id)_touchesForGesture:(id)arg1 withPhase:(int)arg2;
- (void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (id)_allTouches;
- (void)_removeTouchesForWindow:(id)arg1;
- (void)_removeTouchesForKey:(id)arg1;
- (id)_touchesForWindow:(id)arg1;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (id)_cloneEvent;
- (id)_firstTouchForView:(id)arg1;
- (void)_invalidateGestureRecognizerForWindowCache;
- (id)_touchesForView:(id)arg1 withPhase:(int)arg2;
- (id)_viewsForWindow:(id)arg1;
- (void)_touchesForGesture:(id)arg1 withPhase:(int)arg2 intoSet:(id)arg3;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_touchesForKey:(id)arg1;
- (BOOL)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2 currentTouchMap:(struct __CFDictionary { }*)arg3 newTouchMap:(struct __CFDictionary { }*)arg4;
- (void)_dismissSharedCalloutBarIfNeeded;
- (void)_clearTouches;
- (id)_windows;
- (id)allTouches;
- (void)_removeTouch:(id)arg1;
- (void)_clearViewForTouch:(id)arg1;
- (id)touchesForGestureRecognizer:(id)arg1;
- (void)_addTouch:(id)arg1 forDelayedDelivery:(BOOL)arg2;
- (int)type;
- (id)_init;

@end
