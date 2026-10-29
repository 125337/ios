@interface MTLargeOperator : MTMathAtom
{
    BOOL _limits; // +0x48
}
- (id)initWithValue:(id)arg1 limits:(BOOL)arg2;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)limits;
- (void)setLimits:(BOOL)arg1;
@end
