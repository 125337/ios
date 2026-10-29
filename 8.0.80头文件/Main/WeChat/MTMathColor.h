@interface MTMathColor : MTMathAtom
{
    NSString * _colorString; // +0x48
    MTMathList * _innerList; // +0x50
}
- (id)init;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;
- (id)stringValue;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)finalized;
- (id)colorString;
- (void)setColorString:(id)arg1;
- (id)innerList;
- (void)setInnerList:(id)arg1;
- (void).cxx_destruct;
@end
