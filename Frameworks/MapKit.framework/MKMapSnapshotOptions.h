/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSCopying> {
    MKMapCamera *_camera;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _mapRect;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _region;
    unsigned int _mapType;
    int _mode;
    BOOL _showsPointsOfInterest;
    BOOL _showsBuildings;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    float _scale;
    BOOL _usingRect;
}

@property(copy) MKMapCamera * camera;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } mapRect;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property unsigned int mapType;
@property BOOL showsPointsOfInterest;
@property BOOL showsBuildings;
@property struct CGSize { float x1; float x2; } size;
@property float scale;
@property(readonly) BOOL usingRect;


- (void)setMapType:(unsigned int)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (BOOL)showsBuildings;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (BOOL)showsPointsOfInterest;
- (unsigned int)mapType;
- (BOOL)usingRect;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRect;
- (void)setCamera:(id)arg1;
- (id)camera;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setScale:(float)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)scale;

@end
