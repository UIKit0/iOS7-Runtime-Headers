/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUWebView, ISStoreURLOperation;

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate> {
    ISStoreURLOperation *_loadOperation;
    SUWebView *_webView;
}

@property(readonly) id windowScriptObject;
@property(readonly) struct OpaqueJSContext { }* globalExecutionContext;


- (id)parentViewControllerForWebView:(id)arg1;
- (void)evaluateScriptWithURLBagKey:(id)arg1;
- (id)_newLoadOperation;
- (void)_cancelLoadOperation;
- (void)evaluateScriptAtURL:(id)arg1;
- (BOOL)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (struct OpaqueJSContext { }*)globalExecutionContext;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (id)windowScriptObject;
- (id)_webView;
- (void)dealloc;

@end