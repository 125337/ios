@interface MTLargeOpLimitsDisplay : MTDisplay
{
    double _limitShift; // +0x60
    double _upperLimitGap; // +0x68
    double _lowerLimitGap; // +0x70
    double _extraPadding; // +0x78
    MTDisplay * _nucleus; // +0x80
    MTMathListDisplay * _upperLimit; // +0x88
    MTMathListDisplay * _lowerLimit; // +0x90
}
- (id)initWithNucleus:(id)arg1 upperLimit:(id)arg2 lowerLimit:(id)arg3 limitShift:(double)arg4 extraPadding:(double)arg5;
- (double)ascent;
- (double)descent;
- (void)setLowerLimitGap:(double)arg1;
- (void)setUpperLimitGap:(double)arg1;
- (void)setPosition:(CGPoint)arg1;
- (void)updateLowerLimitPosition;
- (void)updateUpperLimitPosition;
- (void)updateNucleusPosition;
- (void)setTextColor:(id)arg1;
- (void)draw:(CGContext *)arg1;
- (id)upperLimit;
- (id)lowerLimit;
- (double)upperLimitGap;
- (double)lowerLimitGap;
- (void).cxx_destruct;
@end
