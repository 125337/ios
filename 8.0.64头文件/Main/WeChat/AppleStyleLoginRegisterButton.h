@interface AppleStyleLoginRegisterButton : UIButton
{
    BOOL _useFlexibleWidth; // +0x8
    long long _style; // +0x10
    long long _alignment; // +0x18
    NSString * _svgIconName; // +0x20
    double _cornerRadius; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setStyle:(long long)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setUseFlexibleWidth:(BOOL)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setSvgIconName:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)updateImage;
- (void)updateFlexibleWidth;
- (id)styleContentColor;
- (id)styleBackgroundColor;
- (id)styleBorderColor;
- (double)styleBorderWidth;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (long long)style;
- (long long)alignment;
- (BOOL)useFlexibleWidth;
- (id)svgIconName;
- (double)cornerRadius;
- (void).cxx_destruct;
@end
