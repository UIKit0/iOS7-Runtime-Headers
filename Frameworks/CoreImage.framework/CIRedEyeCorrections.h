/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSString, NSArray;

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties> {
    CIImage *inputImage;
    NSString *inputCameraModel;
    NSArray *inputCorrectionInfo;
}

@property(retain) CIImage * inputImage;
@property(copy) NSString * inputCameraModel;
@property(copy) NSArray * inputCorrectionInfo;


- (id)inputCorrectionInfo;
- (id)inputCameraModel;
- (void)setInputCameraModel:(id)arg1;
- (void)setInputCorrectionInfo:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;
- (void)setDefaults;

@end
