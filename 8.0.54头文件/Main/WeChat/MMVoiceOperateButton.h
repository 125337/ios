@interface MMVoiceOperateButton : MMUIButton
{
    BOOL _isAnimating; // +0x8
    UIColor * _normalColor; // +0x10
    UIColor * _highlightedColor; // +0x18
}
- (void)setHighlighted:(BOOL)arg1;
- (void)animateToHighlighted:(BOOL)arg1;
- (void)animateWithScale:(CGAffineTransform)arg1;
- (void)layoutButtonWithImageTitleSpace:(double)arg1;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (id)highlightedColor;
- (void)setHighlightedColor:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end

