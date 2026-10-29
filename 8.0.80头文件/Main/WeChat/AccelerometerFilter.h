@interface AccelerometerFilter : NSObject
{
    double x; // +0x8
    double y; // +0x10
    double z; // +0x18
}
- (double)x;
- (double)y;
- (double)z;
@end
