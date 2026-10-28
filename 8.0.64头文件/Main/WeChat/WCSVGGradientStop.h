@interface WCSVGGradientStop : NSObject
{
    double _offset; // +0x8
    UIColor * _color; // +0x10
}
- (id)init;
- (double)offset;
- (void)setOffset:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void).cxx_destruct;
@end
