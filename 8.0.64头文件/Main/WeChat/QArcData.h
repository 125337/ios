@interface QArcData : NSObject
{
    CLLocationCoordinate2D _startPoint; // +0x8
    CLLocationCoordinate2D _endPoint; // +0x18
}
- (CLLocationCoordinate2D)startPoint;
- (void)setStartPoint:(CLLocationCoordinate2D)arg1;
- (CLLocationCoordinate2D)endPoint;
- (void)setEndPoint:(CLLocationCoordinate2D)arg1;
@end
