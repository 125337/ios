@interface QMultiPoint : QShape <QOverlay>
{
    struct * _points; // +0x8
    unsigned long long _pointCount; // +0x10
    struct _boundingRect; // +0x18
}
- (id)initWithPoints:(struct *)arg1 count:(unsigned long long)arg2;
- (id)initWithCoordinates:(CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (void)getCoordinates:(CLLocationCoordinate2D *)arg1 range:(_NSRange)arg2;
- (void)dealloc;
- (void)calculateBoundingMapRect;
- (void)updateOverlayPoints:(CLLocationCoordinate2D *)arg1 count:(int)arg2;
- (struct *)points;
- (unsigned long long)pointCount;
@end

