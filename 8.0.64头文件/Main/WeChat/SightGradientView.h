@interface SightGradientView : UIView
{
    CAGradientLayer * _gradientMaskLayer; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 color:(id)arg2 alphaTop:(double)arg3 alphaBottom:(double)arg4;
- (void)layoutSubviews;
- (void)_relayoutGradientLayer;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
