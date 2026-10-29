@interface LocationData : NSObject
{
    double _longitude; // +0x8
    double _latitude; // +0x10
    double _speed; // +0x18
    double _accuracy; // +0x20
}
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (double)accuracy;
- (void)setAccuracy:(double)arg1;
@end
