@interface MTFractionDisplay : MTDisplay
{
    MTMathListDisplay * _numerator; // +0x60
    MTMathListDisplay * _denominator; // +0x68
    double _numeratorUp; // +0x70
    double _denominatorDown; // +0x78
    double _linePosition; // +0x80
    double _lineThickness; // +0x88
}
- (id)initWithNumerator:(id)arg1 denominator:(id)arg2 position:(CGPoint)arg3 range:(_NSRange)arg4;
- (double)ascent;
- (double)descent;
- (double)width;
- (void)setDenominatorDown:(double)arg1;
- (void)setNumeratorUp:(double)arg1;
- (void)updateDenominatorPosition;
- (void)updateNumeratorPosition;
- (void)setPosition:(CGPoint)arg1;
- (void)setTextColor:(id)arg1;
- (void)draw:(CGContext *)arg1;
- (id)numerator;
- (id)denominator;
- (double)numeratorUp;
- (double)denominatorDown;
- (double)linePosition;
- (void)setLinePosition:(double)arg1;
- (double)lineThickness;
- (void)setLineThickness:(double)arg1;
- (void).cxx_destruct;
@end
