@interface MMLiveSEIConnectMicSeatInfo : NSObject
{
    unsigned int _st; // +0x8
    double _x; // +0x10
    double _y; // +0x18
    double _w; // +0x20
    double _h; // +0x28
    unsigned long long _i; // +0x30
}
- (void)updateWithMicSeatInfo:(id)arg1;
- (BOOL)isInOtherRoom;
- (CGRect)normalizedSeatFrame;
- (unsigned int)st;
- (void)setSt:(unsigned int)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (double)w;
- (void)setW:(double)arg1;
- (double)h;
- (void)setH:(double)arg1;
- (unsigned long long)i;
- (void)setI:(unsigned long long)arg1;
@end
