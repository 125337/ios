@interface QScatterNode : NSObject <QScatterNodeProtocol>
{
    int _type; // +0x8
    CLLocationCoordinate2D _coordinate; // +0x10
}
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (int)type;
- (void)setType:(int)arg1;
@end
