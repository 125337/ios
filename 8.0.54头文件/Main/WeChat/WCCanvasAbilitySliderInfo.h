@interface WCCanvasAbilitySliderInfo : MMObject <NSCoding>
{
    NSString * _label; // +0x8
    double _value; // +0x10
    double _fontSize; // +0x18
    NSString * _backgroundColor; // +0x20
    NSString * _foregroundColor; // +0x28
    NSString * _foregroundImage; // +0x30
    NSString * _backgroundImage; // +0x38
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)foregroundColor;
- (void)setForegroundColor:(id)arg1;
- (id)foregroundImage;
- (void)setForegroundImage:(id)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (void).cxx_destruct;
@end

