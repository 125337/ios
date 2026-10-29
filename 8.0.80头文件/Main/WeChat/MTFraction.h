@interface MTFraction : MTMathAtom
{
    BOOL _hasRule; // +0x48
    BOOL _useOverrideStyle; // +0x49
    unsigned int _overrideStyle; // +0x4c
    MTMathList * _numerator; // +0x50
    MTMathList * _denominator; // +0x58
    NSString * _leftDelimiter; // +0x60
    NSString * _rightDelimiter; // +0x68
}
- (id)init;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)initWithRule:(BOOL)arg1;
- (id)stringValue;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)finalized;
- (id)numerator;
- (void)setNumerator:(id)arg1;
- (id)denominator;
- (void)setDenominator:(id)arg1;
- (BOOL)hasRule;
- (id)leftDelimiter;
- (void)setLeftDelimiter:(id)arg1;
- (id)rightDelimiter;
- (void)setRightDelimiter:(id)arg1;
- (BOOL)useOverrideStyle;
- (void)setUseOverrideStyle:(BOOL)arg1;
- (unsigned int)overrideStyle;
- (void)setOverrideStyle:(unsigned int)arg1;
- (void).cxx_destruct;
@end
