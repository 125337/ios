@interface QGroundOverlay : QGLOverlay
{
    struct _boundingRect; // +0x8
    UIImage * _icon; // +0x28
}
+ (id)groundOverlayWithBounds:(struct)arg1 icon:(id)arg2;
+ (id)groundOverlayWithCoordinate:(CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 anchor:(CGPoint)arg3 icon:(id)arg4;
+ (struct)calcaulateBounds:(CGPoint)arg1 icon:(id)arg2 position:(const CLLocationCoordinate2D *)arg3 zoomLevel:(double *)arg4;
- (id)initWithBounds:(struct)arg1 icon:(id)arg2;
- (struct)boundingMapRect;
- (void)makeDirty;
- (void)setOpacity:(double)arg1;
- (void)setGroundOverlayWithBounds:(struct)arg1 icon:(id)arg2;
- (void)setGroundOverlayWithCoordinate:(CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 anchor:(CGPoint)arg3 icon:(id)arg4;
- (void)doUpdateBitmapForImpl:(void *)arg1;
- (void *)createImpl;
- (void)destoryImpl;
- (BOOL)validateDisplayLevelParam:(long long)arg1;
- (void)recordGLoverlayCount:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end

