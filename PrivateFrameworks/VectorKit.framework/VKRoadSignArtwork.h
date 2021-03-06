/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadSignArtwork : NSObject  {
    struct __CTLine { } *_line;
    int _orientation;
    BOOL _onRoute;
    float _contentScale;
    float _scale;
    struct CGSize { 
        float width; 
        float height; 
    } _layoutSize;
}


- (struct BRectImp<float> { struct Vec2Imp<float> { float x_1_1_1; float x_1_1_2; } x1; struct Vec2Imp<float> { float x_2_1_1; float x_2_1_2; } x2; })boundsAtOrigin;
- (struct Vec2Imp<float> { float x1; float x2; })offsetPixelForPixel:(struct Vec2Imp<float> { float x1; float x2; })arg1;
- (id)initWithString:(id)arg1 orientation:(int)arg2 contentScale:(float)arg3 onRoute:(BOOL)arg4;
- (void)_updateLayoutSize;
- (id)image;
- (void)dealloc;
- (id).cxx_construct;

@end
