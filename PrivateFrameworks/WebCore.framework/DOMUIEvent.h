/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent  {
}

@property(readonly) DOMAbstractView * view;
@property(readonly) int detail;
@property(readonly) int keyCode;
@property(readonly) int charCode;
@property(readonly) int layerX;
@property(readonly) int layerY;
@property(readonly) int pageX;
@property(readonly) int pageY;
@property(readonly) int which;


- (void)initUIEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5;
- (void)initUIEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5;
- (int)which;
- (int)layerY;
- (int)layerX;
- (int)detail;
- (int)pageY;
- (int)pageX;
- (int)charCode;
- (int)keyCode;
- (id)view;

@end
