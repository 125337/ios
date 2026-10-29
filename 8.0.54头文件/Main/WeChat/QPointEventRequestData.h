@interface QPointEventRequestData : NSObject
{
    float _zoomLevel; // +0x8
    NSString * _bounds; // +0x10
    CLLocationCoordinate2D _location; // +0x18
}
- (id)bounds;
- (void)setBounds:(id)arg1;
- (float)zoomLevel;
- (void)setZoomLevel:(float)arg1;
- (CLLocationCoordinate2D)location;
- (void)setLocation:(CLLocationCoordinate2D)arg1;
- (void).cxx_destruct;
@end

