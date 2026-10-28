@interface YYTextDecoration : NSObject <NSCoding, NSCopying>
{
    long long _style; // +0x8
    NSNumber * _width; // +0x10
    UIColor * _color; // +0x18
    YYTextShadow * _shadow; // +0x20
}
+ (id)decorationWithStyle:(long long)arg1;
+ (id)decorationWithStyle:(long long)arg1 width:(id)arg2 color:(id)arg3;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)shadow;
- (void)setShadow:(id)arg1;
- (void).cxx_destruct;
@end
