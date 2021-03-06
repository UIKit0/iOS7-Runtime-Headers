/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmarksXPCConnection, <WebBookmarksClientDelegateProtocol>;

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate> {
    WebBookmarksXPCConnection *_connection;
    <WebBookmarksClientDelegateProtocol> *_delegate;
}

@property <WebBookmarksClientDelegateProtocol> * delegate;


- (void)didStopFetchingReadingListItemWithMessage:(id)arg1;
- (void)didStartFetchingReadingListItemWithMessage:(id)arg1;
- (void)didUpdateProgressWithMessage:(id)arg1;
- (void)didFinishFetching;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)startReadingListFetcher;
- (void)clearAllReadingListArchives;
- (void)clearReadingListArchiveWithUUID:(id)arg1;
- (void)_clearConnection;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)delegate;

@end
