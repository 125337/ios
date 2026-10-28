@interface _YYCGColor : NSObject <NSCopying, NSCoding>
{
    CGColor * _CGColor; // +0x8
}
+ (id)colorWithCGColor:(CGColor *)arg1;
- (void)setCGColor:(CGColor *)arg1;
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CGColor *)CGColor;
@end
