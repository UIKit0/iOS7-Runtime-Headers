/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFContactsSearchManager, NSString, NSOrderedSet, NSNumber;

@interface MFContactsSearchOperation : NSOperation  {
    void *_addressBook;
    MFContactsSearchManager *_owner;
    NSNumber *_taskID;
    NSString *_text;
    NSOrderedSet *_properties;
    NSString *_sendingAddress;
}

@property(readonly) void* addressBook;
@property(readonly) MFContactsSearchManager * owner;
@property(readonly) NSNumber * taskID;
@property(readonly) NSString * text;
@property(readonly) NSOrderedSet * properties;
@property(readonly) NSString * sendingAddress;

+ (id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;

- (id)taskID;
- (id)sendingAddress;
- (id)owner;
- (void*)addressBook;
- (id)text;
- (void)dealloc;
- (int)type;
- (id)properties;

@end
