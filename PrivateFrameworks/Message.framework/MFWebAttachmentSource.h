/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary, MFLock;

@interface MFWebAttachmentSource : NSObject  {
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
    NSMutableDictionary *_removedAttachmentsByURL;
}

@property BOOL keepRemovedAttachments;

+ (id)_setOfAllSources;
+ (id)allSources;

- (BOOL)keepRemovedAttachments;
- (id)attachmentForURL:(id)arg1 includeRemoved:(BOOL)arg2;
- (BOOL)setAttachment:(id)arg1 forURL:(id)arg2;
- (id)attachmentForURL:(id)arg1;
- (void)setKeepRemovedAttachments:(BOOL)arg1;
- (void)removeAttachmentForURL:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
