@interface QGPColor : QGPBaseModel
{
    double _r; // +0x8
    double _g; // +0x10
    double _b; // +0x18
}
- (id)toUIColor;
- (double)r;
- (void)setR:(double)arg1;
- (double)g;
- (void)setG:(double)arg1;
- (double)b;
- (void)setB:(double)arg1;
@end

