@interface QMUInternalPoint : NSObject <QMULocation>
{
    CLLocationCoordinate2D _coordinate; // +0x8
}
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
@end

