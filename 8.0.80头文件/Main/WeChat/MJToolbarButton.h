@interface MJToolbarButton : MMUIButton
{
    MMUIButton * _buttonLabel; // +0x8
    MMUIButton * _buttonIcon; // +0x10
    double _spacing; // +0x18
    UIFont * _textFont; // +0x20
    CGSize _iconSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)setSelected:(BOOL)arg1;
- (void)configIconSize:(CGSize)arg1;
- (void)configSpacing:(double)arg1;
- (void)configTextFont:(id)arg1;
- (void)configTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)configImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_relayoutButtonLabel;
- (CGSize)calcButtonSize;
- (double)calcButtonHeight;
- (double)calcButtonWidth;
- (id)buttonLabel;
- (void)setButtonLabel:(id)arg1;
- (id)buttonIcon;
- (void)setButtonIcon:(id)arg1;
- (double)spacing;
- (void)setSpacing:(double)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (void).cxx_destruct;
@end
