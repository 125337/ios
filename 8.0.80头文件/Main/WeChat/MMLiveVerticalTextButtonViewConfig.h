@interface MMLiveVerticalTextButtonViewConfig : NSObject
{
    BOOL _buttonRoundCorner; // +0x8
    unsigned long long _displayType; // +0x10
    double _textPadding; // +0x18
    UIFont * _textFont; // +0x20
    UIColor * _buttonBgColor; // +0x28
    UIColor * _textColor; // +0x30
    UIColor * _buttonBlurColor; // +0x38
    double _maxLabelWidth; // +0x40
    CGSize _buttonSize; // +0x48
}
+ (id)defaultConfig;
- (unsigned long long)displayType;
- (void)setDisplayType:(unsigned long long)arg1;
- (double)textPadding;
- (void)setTextPadding:(double)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (id)buttonBgColor;
- (void)setButtonBgColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (BOOL)buttonRoundCorner;
- (void)setButtonRoundCorner:(BOOL)arg1;
- (id)buttonBlurColor;
- (void)setButtonBlurColor:(id)arg1;
- (CGSize)buttonSize;
- (void)setButtonSize:(CGSize)arg1;
- (double)maxLabelWidth;
- (void)setMaxLabelWidth:(double)arg1;
- (void).cxx_destruct;
@end
