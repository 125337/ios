@interface YYTextLineBorder : NSObject <NSCoding, NSCopying>
{
    UIColor * _color; // +0x8
    NSNumber * _borderWidth; // +0x10
}
+ (id)lineBorderWithColor:(id)arg1 borderWidth:(id)arg2;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)borderWidth;
- (void)setBorderWidth:(id)arg1;
- (void).cxx_destruct;
@end
