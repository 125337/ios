@interface MMMusicFadeOutView : UIView <MMMusicFadeOutItem>
{
    MMMusicFadeOutLayer * _gradientMaskLayer; // +0x8
}
- (id)initWithGradientStep:(double)arg1 step2:(double)arg2 isVertical:(BOOL)arg3;
- (id)initWithGradientStepValue:(double)arg1 stepValue2:(double)arg2 isVertical:(BOOL)arg3;
- (void)setFrame:(CGRect)arg1;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg1;
- (void).cxx_destruct;
@end
