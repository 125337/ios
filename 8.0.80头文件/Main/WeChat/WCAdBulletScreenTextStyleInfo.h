@interface WCAdBulletScreenTextStyleInfo : NSObject <NSCoding>
{
    double _fontSize; // +0x8
    double _fontSizeMax; // +0x10
    NSString * _color; // +0x18
    NSString * _fontWeight; // +0x20
    NSString * _backgroundColor; // +0x28
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fontWeight;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (double)fontSizeMax;
- (void)setFontSizeMax:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setFontWeight:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end
