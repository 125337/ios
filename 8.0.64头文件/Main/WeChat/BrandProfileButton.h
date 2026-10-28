@interface BrandProfileButton : MMUIButton
{
    UIColor * _highlightColor; // +0x8
    UIView * _animatedMaskView; // +0x10
}
- (void)addTouchAnimations;
- (void)layoutSubviews;
- (id)init;
- (id)highlightColor;
- (void)setHighlightColor:(id)arg1;
- (id)animatedMaskView;
- (void)setAnimatedMaskView:(id)arg1;
- (void).cxx_destruct;
@end
