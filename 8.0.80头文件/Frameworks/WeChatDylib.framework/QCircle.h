@interface QCircle : QShape <QOverlay>
{
    double _radius; // +0x8
    CLLocationCoordinate2D _coordinate; // +0x10
    struct _boundingMapRect; // +0x20
}
+ (id)circleWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2;
+ (id)circleWithMapRect:(struct)arg1;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (void)setRadius:(double)arg1;
- (void)calculateBoundingMapRect;
- (id)initWithWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (void)updateCircleCenter:(CLLocationCoordinate2D)arg1;
- (CLLocationCoordinate2D)coordinate;
- (double)radius;
- (struct)boundingMapRect;
- (void)setBoundingMapRect:(struct)arg1;
@end
