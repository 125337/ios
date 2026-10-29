@interface TencentLBSGpsPoint : NSObject
{
    double _longitude; // +0x8
    double _latitude; // +0x10
    double _x; // +0x18
    double _y; // +0x20
}
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
@end

