/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapFeatureFinder : GEOMapRequest  {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    GEOMapTileFinder *_tileFinder;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _roadHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pointHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _polygonHandler;

    BOOL _ignoreUnnamedFeatures;
}

@property BOOL ignoreUnnamedFeatures;
@property(copy) id roadHandler;
@property(copy) id pointHandler;
@property(copy) id polygonHandler;
@property(readonly) GEOMapAccess * map;


- (BOOL)ignoreUnnamedFeatures;
- (id)polygonHandler;
- (id)pointHandler;
- (id)roadHandler;
- (void)_pickRoadInTile:(id)arg1 tileRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 localPoint:(const struct Vec2Imp<float> { float x1; float x2; }*)arg3;
- (void)setPolygonHandler:(id)arg1;
- (void)setPointHandler:(id)arg1;
- (void)setRoadHandler:(id)arg1;
- (id)map;
- (void)findFeatures:(id)arg1 pointHandler:(id)arg2 polygonHandler:(id)arg3 completionHandler:(id)arg4;
- (void)setIgnoreUnnamedFeatures:(BOOL)arg1;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2;
- (void)dealloc;
- (id).cxx_construct;
- (void)cancel;

@end
