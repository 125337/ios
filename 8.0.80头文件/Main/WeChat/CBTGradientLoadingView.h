@interface CBTGradientLoadingView : UIView
{
    CAGradientLayer * _gradientLayer; // +0x8
    CAShapeLayer * _arcMask; // +0x10
    UIColor * _color; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (id)color;
- (void)setColor:(id)arg1;
- (void).cxx_destruct;
@end
