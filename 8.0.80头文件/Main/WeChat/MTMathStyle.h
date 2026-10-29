@interface MTMathStyle : MTMathAtom
{
    unsigned int _style; // +0x48
}
- (id)initWithStyle:(unsigned int)arg1;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)style;
@end
