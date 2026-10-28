@interface WAEJFont : NSObject
{
    NSMutableArray * textures; // +0x8
    float txLineX; // +0x10
    float txLineY; // +0x14
    float txLineH; // +0x18
    BOOL useSingleGlyphTextures; // +0x1c
    float pointSize; // +0x20
    float ascent; // +0x24
    float descent; // +0x28
    float leading; // +0x2c
    float contentScale; // +0x30
    float glyphPadding; // +0x34
    float xHeight; // +0x38
    BOOL fill; // +0x3c
    float lineWidth; // +0x40
    __CTFont * ctMainFont; // +0x48
    unsigned short * glyphsBuffer; // +0x50
    CGPoint * positionsBuffer; // +0x58
    long long * indexBuffer; // +0x60
    NSCache * layoutCache; // +0x68
    BOOL isWgfxMode; // +0x70
    unordered_map<unsigned long long, EJFontGlyphInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, EJFontGlyphInfo>>> glyphInfoMap; // +0x78
    float lineHeight; // +0xa0
}
+ (OpaqueJSValue *)loadFontData:(OpaqueJSContext *)arg1 fontData:(id)arg2;
- (id)initWithDescriptor:(id)arg1 fill:(BOOL)arg2 lineWidth:(float)arg3 contentScale:(float)arg4 isWgfxMode:(BOOL)arg5;
- (void)dealloc;
- (unsigned short)createGlyph:(unsigned short)arg1 unicode:(unsigned long long)arg2 withFont:(__CTFont *)arg3;
- (BOOL)isEmoji:(id)arg1;
- (id)getLayoutForString:(id)arg1;
- (id)getTextures;
- (float)getYOffsetForBaseline:(int)arg1;
- (void)drawString:(id)arg1 toContext:(id)arg2 x:(float)arg3 y:(float)arg4;
- (struct)measureString:(id)arg1 forContext:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
