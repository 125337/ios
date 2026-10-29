@interface MMMusicFadeOutLayer : CAGradientLayer <MMMusicFadeOutItem>
{
    GradientStep m_gradientStep; // +0x8
    BOOL m_isVertical; // +0x18
}
- (id)initWithGradientStep:(double)arg1 step2:(double)arg2 isVertical:(BOOL)arg3;
- (id)initWithGradientStepValue:(double)arg1 stepValue2:(double)arg2 isVertical:(BOOL)arg3;
- (id)initWithMidAlpha:(double)arg1 gradientStepValue:(double)arg2 stepValue2:(double)arg3 isVertical:(BOOL)arg4;
- (void)updateStepValue:(double)arg1 stepValue2:(double)arg2;
- (void)setBounds:(CGRect)arg1;
@end
