@interface MTGlyphDisplay : MTDisplay <DownShift>
{
    unsigned short _glyph; // +0x60
    MTFont * _font; // +0x68
    double shiftDown; // +0x70
}
- (id)initWithGlpyh:(unsigned short)arg1 range:(_NSRange)arg2 font:(id)arg3;
- (void)draw:(CGContext *)arg1;
- (double)ascent;
- (double)descent;
- (double)shiftDown;
- (void)setShiftDown:(double)arg1;
- (void).cxx_destruct;
@end
