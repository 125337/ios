@interface MTAccentDisplay : MTDisplay
{
    MTMathListDisplay * _accentee; // +0x60
    MTGlyphDisplay * _accent; // +0x68
}
- (id)initWithAccent:(id)arg1 accentee:(id)arg2 range:(_NSRange)arg3;
- (void)setTextColor:(id)arg1;
- (void)setPosition:(CGPoint)arg1;
- (void)updateAccenteePosition;
- (void)draw:(CGContext *)arg1;
- (id)accentee;
- (id)accent;
- (void).cxx_destruct;
@end
