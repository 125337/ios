@interface WCCanvasFlyingFlipSpecialAnimationView : UIView
{
    CAShapeLayer * _insideStrokeLayer; // +0x8
    CAGradientLayer * _gradientLayer; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)generateSubviews;
- (id)insideStrokeLayer;
- (id)gradientLayer;
- (void)startSpecialAnimations;
- (void)startStrokeAnimation;
- (void)startGradientAnimation;
- (void)setInsideStrokeLayer:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
