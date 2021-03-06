/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIColorPosterize : CIFilter  {
    CIImage *inputImage;
    NSNumber *inputLevels;
}

@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputLevels;

+ (id)customAttributes;

- (id)inputLevels;
- (void)setInputLevels:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end
