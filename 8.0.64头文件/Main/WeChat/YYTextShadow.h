@interface YYTextShadow : NSObject <NSCoding, NSCopying>
{
    int _blendMode; // +0x8
    UIColor * _color; // +0x10
    double _radius; // +0x18
    YYTextShadow * _subShadow; // +0x20
    CGSize _offset; // +0x28
}
+ (id)shadowWithColor:(id)arg1 offset:(CGSize)arg2 radius:(double)arg3;
+ (id)shadowWithNSShadow:(id)arg1;
- (id)nsShadow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (CGSize)offset;
- (void)setOffset:(CGSize)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (int)blendMode;
- (void)setBlendMode:(int)arg1;
- (id)subShadow;
- (void)setSubShadow:(id)arg1;
- (void).cxx_destruct;
@end
