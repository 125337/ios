@interface GradientMaskBottomView : UIView
{
    double _paddingTop; // +0x8
    double _paddingBottom; // +0x10
    UIView * _contentView; // +0x18
    CAGradientLayer * _gradientLayer; // +0x20
}
- (id)initWithContentView:(id)arg1;
- (double)heightWithoutSafeAreaInset;
- (void)addGradientMask;
- (void)didMoveToSuperview;
- (void)safeAreaInsetsDidChange;
- (void)updateLayout;
- (id)gradientLayer;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutMaskBottomOrigin;
- (double)paddingTop;
- (void)setPaddingTop:(double)arg1;
- (double)paddingBottom;
- (void)setPaddingBottom:(double)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

