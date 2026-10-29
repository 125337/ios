@interface QTrailNode : NSObject
{
    int _timeStamp; // +0x8
    CLLocationCoordinate2D _coordinate; // +0x10
}
- (void)setTimeStamp:(int)arg1;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (int)timeStamp;
@end
