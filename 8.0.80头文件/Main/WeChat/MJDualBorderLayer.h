@interface MJDualBorderLayer : CALayer
{
    CALayer * _innerBorderLayer; // +0x8
}
- (id)init;
- (void)setFrame:(CGRect)arg1 animationDuration:(double)arg2 timingFunction:(id)arg3;
- (void)setCornerRadius:(double)arg1;
- (double)outerBorderWidth;
- (void)setOuterBorderWidth:(double)arg1;
- (double)innerBorderWidth;
- (void)setInnerBorderWidth:(double)arg1;
- (CGColor *)outerBorderColor;
- (void)setOuterBorderColor:(CGColor *)arg1;
- (CGColor *)innerBorderColor;
- (void)setInnerBorderColor:(CGColor *)arg1;
- (void).cxx_destruct;
@end
