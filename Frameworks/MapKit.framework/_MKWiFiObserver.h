/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <_MKWiFiObserverDelegate>;

@interface _MKWiFiObserver : NSObject  {
    BOOL _wifiEnabled;
    <_MKWiFiObserverDelegate> *_delegate;
}

@property(getter=isWifiEnabled,readonly) BOOL wifiEnabled;
@property <_MKWiFiObserverDelegate> * delegate;


- (void)_updateWiFiState:(BOOL)arg1;
- (BOOL)isWifiEnabled;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end
