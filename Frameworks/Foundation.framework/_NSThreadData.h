/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;

@interface _NSThreadData : NSObject  {
    id dict;
    id name;
    id target;
    SEL selector;
    id argument;
    int seqNum;
    unsigned char qstate;
    unsigned char ____;
    unsigned char cancel;
    unsigned char status;
    id performQ;
    NSMutableDictionary *performD;
    struct _opaque_pthread_attr_t { 
        long __sig; 
        BOOL __opaque[36]; 
    } attr;
    struct _opaque_pthread_t { long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[596]; } *tid;
}



@end