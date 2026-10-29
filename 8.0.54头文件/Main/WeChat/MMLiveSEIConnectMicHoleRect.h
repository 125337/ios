@interface MMLiveSEIConnectMicHoleRect : NSObject
{
    double _x; // +0x8
    double _y; // +0x10
    double _w; // +0x18
    double _h; // +0x20
}
- (CGRect)normalizedHoleFrame;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (double)w;
- (void)setW:(double)arg1;
- (double)h;
- (void)setH:(double)arg1;
@end

