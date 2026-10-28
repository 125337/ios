@interface MMGlowingLabel : UILabel
{
    double _glowSize; // +0x8
    UIColor * _glowColor; // +0x10
    double _innerGlowSize; // +0x18
    UIColor * _innerGlowColor; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;
- (void)drawTextInRect:(CGRect)arg1;
- (double)glowSize;
- (void)setGlowSize:(double)arg1;
- (id)glowColor;
- (void)setGlowColor:(id)arg1;
- (double)innerGlowSize;
- (void)setInnerGlowSize:(double)arg1;
- (id)innerGlowColor;
- (void)setInnerGlowColor:(id)arg1;
- (void).cxx_destruct;
@end
