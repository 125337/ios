@interface ZZShadowModel : NSObject
{
    UIColor * _color; // +0x8
    double _radius; // +0x10
    double _opacity; // +0x18
    CGSize _offset; // +0x20
}
+ (id)create;
- (CGSize)offset;
- (void)setOffset:(CGSize)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (double)opacity;
- (void)setOpacity:(double)arg1;
- (void).cxx_destruct;
@end
