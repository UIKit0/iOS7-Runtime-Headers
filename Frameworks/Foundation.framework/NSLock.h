/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)tryLock;
- (id)init;
- (id)name;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (BOOL)lockBeforeDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)unlock;
- (void)lock;
- (void)mf_waitForLock;

@end
