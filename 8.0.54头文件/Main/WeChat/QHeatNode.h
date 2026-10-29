@interface QHeatNode : NSObject <QHeatNodeProtocol>
{
    double _value; // +0x8
    CLLocationCoordinate2D _coordinate; // +0x10
}
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (double)value;
- (void)setValue:(double)arg1;
@end

