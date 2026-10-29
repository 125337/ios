@interface ColorGradientView : UIView
{
    CAGradientLayer * _gradientLayer; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 color:(id)arg2 alphaTop:(double)arg3 alphaBottom:(double)arg4;
- (void)configureWithColor:(id)arg1 alphaTop:(double)arg2 alphaBottom:(double)arg3;
- (void)configureWithLocationTop:(double)arg1 locationBottom:(double)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4;
- (unsigned long long)countOfSubLayers;
- (void)commonConfiWithColor:(id)arg1 alphaTop:(double)arg2 alphaBottom:(double)arg3;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

