@interface QMapStatus : NSObject
{
    BOOL _isNightStyle; // +0x8
    int _zoomLevel; // +0xc
    CLLocationCoordinate2D _centerCoordinate; // +0x10
    struct _mapRect; // +0x20
}
- (void)setZoomLevel:(int)arg1;
- (int)zoomLevel;
- (struct)mapRect;
- (void)setMapRect:(struct)arg1;
- (CLLocationCoordinate2D)centerCoordinate;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)arg1;
- (BOOL)isNightStyle;
- (void)setIsNightStyle:(BOOL)arg1;
@end

