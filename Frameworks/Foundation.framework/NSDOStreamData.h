/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDOStreamData : NSMutableData  {
    id refObject;
    struct { 
        id data; 
        char *datap; 
        char *limitp; 
        char *startp; 
        id callback; 
        BOOL datapVM; 
    } stream;
}


- (id)init;
- (unsigned int)length;
- (void*)mutableBytes;
- (const void*)bytes;
- (void)finalize;
- (void)dealloc;

@end
