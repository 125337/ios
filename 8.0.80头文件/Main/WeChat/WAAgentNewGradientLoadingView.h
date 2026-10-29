@interface WAAgentNewGradientLoadingView : UIView
{
    CAGradientLayer * _gradientLayer; // +0x8
    CAShapeLayer * _arcMask; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)arcMask;
- (void)setArcMask:(id)arg1;
- (void).cxx_destruct;
@end
