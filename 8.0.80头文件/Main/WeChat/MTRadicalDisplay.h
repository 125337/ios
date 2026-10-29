@interface MTRadicalDisplay : MTDisplay
{
    MTDisplay * _radicalGlyph; // +0x60
    double _radicalShift; // +0x68
    MTMathListDisplay * _radicand; // +0x70
    MTMathListDisplay * _degree; // +0x78
    double _topKern; // +0x80
    double _lineThickness; // +0x88
}
- (id)initWitRadicand:(id)arg1 glpyh:(id)arg2 position:(CGPoint)arg3 range:(_NSRange)arg4;
- (void)setDegree:(id)arg1 fontMetrics:(id)arg2;
- (void)setPosition:(CGPoint)arg1;
- (void)updateRadicandPosition;
- (void)setTextColor:(id)arg1;
- (void)draw:(CGContext *)arg1;
- (id)radicand;
- (id)degree;
- (double)topKern;
- (void)setTopKern:(double)arg1;
- (double)lineThickness;
- (void)setLineThickness:(double)arg1;
- (void).cxx_destruct;
@end
