@interface MTRadical : MTMathAtom
{
    MTMathList * _radicand; // +0x48
    MTMathList * _degree; // +0x50
}
- (id)init;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)stringValue;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)finalized;
- (id)radicand;
- (void)setRadicand:(id)arg1;
- (id)degree;
- (void)setDegree:(id)arg1;
- (void).cxx_destruct;
@end
