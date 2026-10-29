@interface MTGlyphConstructionDisplay : MTDisplay <DownShift>
{
    unsigned short * _glyphs; // +0x60
    CGPoint * _positions; // +0x68
    MTFont * _font; // +0x70
    long long _numGlyphs; // +0x78
    double shiftDown; // +0x80
}
- (id)initWithGlyphs:(id)arg1 offsets:(id)arg2 font:(id)arg3;
- (void)draw:(CGContext *)arg1;
- (double)ascent;
- (double)descent;
- (void)dealloc;
- (double)shiftDown;
- (void)setShiftDown:(double)arg1;
- (void).cxx_destruct;
@end
