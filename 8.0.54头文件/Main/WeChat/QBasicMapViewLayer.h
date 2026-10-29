@interface QBasicMapViewLayer : CALayer
{
    double _zoomLevel; // +0x8
    double _rotation; // +0x10
    double _overlooking; // +0x18
    CGPoint _centerCoordinate; // +0x20
    CGPoint _centerOffset; // +0x30
    CGRect _anchorZoomLevel; // +0x40
}
+ (BOOL)isMatchAnimateKey:(id)arg1;
+ (unsigned long long)regionChangeOptionForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
- (id)basicMapView;
- (void)setCenterCoordinate:(CGPoint)arg1;
- (void)setZoomLevel:(double)arg1;
- (void)setAnchorZoomLevel:(CGRect)arg1;
- (void)setRotation:(double)arg1;
- (void)setOverlooking:(double)arg1;
- (void)setCenterOffset:(CGPoint)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (CGPoint)centerCoordinate;
- (double)zoomLevel;
- (double)rotation;
- (double)overlooking;
- (CGPoint)centerOffset;
- (CGRect)anchorZoomLevel;
@end

