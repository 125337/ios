@interface QNavigationGravityLine : NSObject
{
    double _width; // +0x8
    UIColor * _color; // +0x10
    CLLocationCoordinate2D _destination; // +0x18
}
- (double)width;
- (void)setWidth:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (CLLocationCoordinate2D)destination;
- (void)setDestination:(CLLocationCoordinate2D)arg1;
- (void).cxx_destruct;
@end

