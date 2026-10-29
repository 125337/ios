@interface _YYCGImage : NSObject <NSCoding, NSCopying>
{
    CGImage * _CGImage; // +0x8
}
+ (id)imageWithCGImage:(CGImage *)arg1;
- (void)setCGImage:(CGImage *)arg1;
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CGImage *)CGImage;
@end

