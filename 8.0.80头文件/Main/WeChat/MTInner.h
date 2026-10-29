@interface MTInner : MTMathAtom
{
    MTMathList * _innerList; // +0x48
    MTMathAtom * _leftBoundary; // +0x50
    MTMathAtom * _rightBoundary; // +0x58
}
- (id)init;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (void)setLeftBoundary:(id)arg1;
- (void)setRightBoundary:(id)arg1;
- (id)stringValue;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)finalized;
- (id)innerList;
- (void)setInnerList:(id)arg1;
- (id)leftBoundary;
- (id)rightBoundary;
- (void).cxx_destruct;
@end
