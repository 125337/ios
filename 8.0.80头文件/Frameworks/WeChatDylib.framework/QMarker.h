@interface QMarker : QShape <QOverlay>
{
    CLLocationCoordinate2D _coordinate; // +0x8
    struct _boundingMapRect; // +0x18
}
- (id)initWithCoordinate:(CLLocationCoordinate2D)arg1;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (void)calculateBoundingMapRect;
- (struct)boundingMapRect;
- (void)setBoundingMapRect:(struct)arg1;
- (CLLocationCoordinate2D)coordinate;
@end
