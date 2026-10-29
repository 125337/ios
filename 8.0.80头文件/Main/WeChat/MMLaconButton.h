@interface MMLaconButton : MMUIButton
{
    BOOL _bUseMaskHighlightedEffect; // +0x8
    UIView * _leftImage; // +0x10
    MMUILabel * _label; // +0x18
    UIView * _rightImage; // +0x20
    double _buttonLeftPadding; // +0x28
    double _buttonRightPadding; // +0x30
    double _leftImageMargin; // +0x38
    double _rightImageMargin; // +0x40
    UIView * _curMaskView; // +0x48
    id /* block */ _callback; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)updateStatus;
- (void)doLayouts;
- (void)layoutSubviews;
- (id)leftImage;
- (void)setLeftImage:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)rightImage;
- (void)setRightImage:(id)arg1;
- (double)buttonLeftPadding;
- (void)setButtonLeftPadding:(double)arg1;
- (double)buttonRightPadding;
- (void)setButtonRightPadding:(double)arg1;
- (double)leftImageMargin;
- (void)setLeftImageMargin:(double)arg1;
- (double)rightImageMargin;
- (void)setRightImageMargin:(double)arg1;
- (BOOL)bUseMaskHighlightedEffect;
- (void)setBUseMaskHighlightedEffect:(BOOL)arg1;
- (id)curMaskView;
- (void)setCurMaskView:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
