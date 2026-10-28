@interface WAWebViewBottomBannerButtonViewModel : MMObject
{
    NSString * _title; // +0x8
    double _cornerRadius; // +0x10
    UIFont * _titleFont; // +0x18
    UIColor * _backgroundColor; // +0x20
    UIColor * _titleColor; // +0x28
    UIImage * _highlightImage; // +0x30
    double _maxWitdh; // +0x38
    unsigned long long _index; // +0x40
    double _buttonTitleSpacing; // +0x48
    double _buttonHeight; // +0x50
}
- (id)init;
- (double)calculateButtonWidth;
- (id)title;
- (void)setTitle:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)highlightImage;
- (void)setHighlightImage:(id)arg1;
- (double)maxWitdh;
- (void)setMaxWitdh:(double)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (double)buttonTitleSpacing;
- (void)setButtonTitleSpacing:(double)arg1;
- (double)buttonHeight;
- (void)setButtonHeight:(double)arg1;
- (void).cxx_destruct;
@end
