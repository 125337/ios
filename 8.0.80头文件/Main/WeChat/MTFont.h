@interface MTFont : NSObject
{
    CGFont * _defaultCGFont; // +0x8
    __CTFont * _ctFont; // +0x10
    MTFontMathTable * _mathTable; // +0x18
    NSDictionary * _rawMathTable; // +0x20
}
+ (id)fontBundle;
- (id)initFontWithName:(id)arg1 size:(double)arg2;
- (void)setDefaultCGFont:(CGFont *)arg1;
- (void)setCtFont:(__CTFont *)arg1;
- (id)copyFontWithSize:(double)arg1;
- (id)getGlyphName:(unsigned short)arg1;
- (unsigned short)getGlyphWithName:(id)arg1;
- (double)fontSize;
- (void)dealloc;
- (CGFont *)defaultCGFont;
- (__CTFont *)ctFont;
- (id)mathTable;
- (void)setMathTable:(id)arg1;
- (id)rawMathTable;
- (void)setRawMathTable:(id)arg1;
- (void).cxx_destruct;
@end
