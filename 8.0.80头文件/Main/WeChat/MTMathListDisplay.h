@interface MTMathListDisplay : MTDisplay
{
    unsigned long long _index; // +0x60
    unsigned int _type; // +0x68
    NSArray * _subDisplays; // +0x70
}
- (id)initWithDisplays:(id)arg1 range:(_NSRange)arg2;
- (void)setType:(unsigned int)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)draw:(CGContext *)arg1;
- (void)recomputeDimensions;
- (unsigned int)type;
- (id)subDisplays;
- (unsigned long long)index;
- (void).cxx_destruct;
@end
