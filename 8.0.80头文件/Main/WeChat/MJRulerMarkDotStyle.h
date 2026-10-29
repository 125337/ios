@interface MJRulerMarkDotStyle : MJRulerMarkStyle
{
    double _radius; // +0x10
    double _marginTop; // +0x18
}
- (id)initWithBackgroundColor:(id)arg1 radius:(double)arg2 marginTop:(double)arg3;
- (double)radius;
- (void)setRadius:(double)arg1;
- (double)marginTop;
- (void)setMarginTop:(double)arg1;
@end
