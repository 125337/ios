@interface MTLineDisplay : MTDisplay
{
    MTMathListDisplay * _inner; // +0x60
    double _lineShiftUp; // +0x68
    double _lineThickness; // +0x70
}
- (id)initWithInner:(id)arg1 position:(CGPoint)arg2 range:(_NSRange)arg3;
- (void)setTextColor:(id)arg1;
- (void)draw:(CGContext *)arg1;
- (void)setPosition:(CGPoint)arg1;
- (void)updateInnerPosition;
- (id)inner;
- (double)lineShiftUp;
- (void)setLineShiftUp:(double)arg1;
- (double)lineThickness;
- (void)setLineThickness:(double)arg1;
- (void).cxx_destruct;
@end
