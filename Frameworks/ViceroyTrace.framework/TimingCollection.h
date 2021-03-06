/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface TimingCollection : NSObject  {
    NSMutableDictionary *timings;
    NSObject<OS_dispatch_queue> *queue;
}


- (void)resetTotalTimeForKey:(id)arg1;
- (float)timingForKey:(id)arg1;
- (BOOL)hasKey:(id)arg1;
- (void)removeTimingForKey:(id)arg1;
- (float)totalTimeForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
