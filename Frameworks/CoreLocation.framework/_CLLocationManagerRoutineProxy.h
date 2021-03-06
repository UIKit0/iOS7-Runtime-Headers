/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class <CLLocationManagerDelegate>, NSXPCConnection, NSObject<OS_dispatch_queue>, CLLocationManagerRoutine;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _updating;
    NSXPCConnection *_connection;
    <CLLocationManagerDelegate> *_delegate;
    CLLocationManagerRoutine *_locationManagerRoutine;
}

@property(retain) NSXPCConnection * connection;
@property <CLLocationManagerDelegate> * delegate;
@property CLLocationManagerRoutine * locationManagerRoutine;
@property BOOL updating;


- (void)setUpdating:(BOOL)arg1;
- (id)initWithCLLocationManagerRoutine:(id)arg1;
- (BOOL)updating;
- (void)didUpdateLocations:(id)arg1;
- (id)locationManagerRoutine;
- (void)setLocationManagerRoutine:(id)arg1;
- (void)createConnection;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setConnection:(id)arg1;
- (id)connection;

@end
