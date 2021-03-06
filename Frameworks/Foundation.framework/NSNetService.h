/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, <NSNetServiceDelegate>, NSString;

@interface NSNetService : NSObject  {
    id _netService;
    id _delegate;
    id _reserved;
}

@property <NSNetServiceDelegate> * delegate;
@property BOOL includesPeerToPeer;
@property(readonly) NSString * name;
@property(readonly) NSString * type;
@property(readonly) NSString * domain;
@property(readonly) NSString * hostName;
@property(readonly) NSArray * addresses;
@property(readonly) int port;

+ (id)dictionaryFromTXTRecordData:(id)arg1;
+ (id)dataFromTXTRecordDictionary:(id)arg1;

- (void)resolve;
- (int)port;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;
- (id)domain;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (id)TXTRecordData;
- (void)stopMonitoring;
- (void)startMonitoring;
- (BOOL)getInputStream:(out id*)arg1 outputStream:(out id*)arg2;
- (void)_dispatchCallBackWithError:(struct { int x1; int x2; })arg1;
- (void)publish;
- (void)setIncludesPeerToPeer:(BOOL)arg1;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithCFNetService:(struct __CFNetService { }*)arg1;
- (void)resolveWithTimeout:(double)arg1;
- (void)publishWithOptions:(unsigned int)arg1;
- (void)publishWithServer:(unsigned int)arg1;
- (void)_internal_publishWithOptions:(unsigned int)arg1;
- (BOOL)includesPeerToPeer;
- (id)normalizedType;
- (id)type;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg1;
- (struct __CFNetService { }*)_internalNetService;
- (void)stop;
- (id)hostName;
- (id)_monitors;
- (id)addresses;
- (BOOL)setTXTRecordData:(id)arg1;

@end
