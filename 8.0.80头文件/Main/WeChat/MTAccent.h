@interface MTAccent : MTMathAtom
{
    MTMathList * _innerList; // +0x48
}
- (id)initWithValue:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)finalized;
- (id)innerList;
- (void)setInnerList:(id)arg1;
- (void).cxx_destruct;
@end
