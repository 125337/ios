@interface FTSRadialGradientLayer : CALayer
{
    double _gradientRadius; // +0x8
    UIColor * _gradientColor; // +0x10
    NSArray * _gradientLocations; // +0x18
    NSArray * _gradientColors; // +0x20
    CGPoint _gradientCenter; // +0x28
}
- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)drawInContext:(CGContext *)arg1;
- (double)gradientRadius;
- (void)setGradientRadius:(double)arg1;
- (id)gradientColor;
- (void)setGradientColor:(id)arg1;
- (CGPoint)gradientCenter;
- (void)setGradientCenter:(CGPoint)arg1;
- (id)gradientLocations;
- (void)setGradientLocations:(id)arg1;
- (id)gradientColors;
- (void)setGradientColors:(id)arg1;
- (void).cxx_destruct;
@end
