@interface MTInnerDisplay : MTDisplay
{
    MTMathListDisplay * _inner; // +0x60
    MTDisplay * _leftDelimiter; // +0x68
    MTDisplay * _rightDelimiter; // +0x70
    unsigned long long _index; // +0x78
}
- (id)initWithInner:(id)arg1 leftDelimiter:(id)arg2 rightDelimiter:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)setPosition:(CGPoint)arg1;
- (void)updateLeftDelimiterPosition;
- (void)updateRightDelimiterPosition;
- (void)updateInnerPosition;
- (double)ascent;
- (double)descent;
- (double)width;
- (void)setTextColor:(id)arg1;
- (void)draw:(CGContext *)arg1;
- (id)inner;
- (void)setInner:(id)arg1;
- (id)leftDelimiter;
- (void)setLeftDelimiter:(id)arg1;
- (id)rightDelimiter;
- (void)setRightDelimiter:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
