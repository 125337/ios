@interface MMLiveBlurButton : MMUIButton
{
    UIView * _backgroundBlurView; // +0x8
    UIView * _highlightMaskView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (void).cxx_destruct;
@end
