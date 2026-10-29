@interface WAEJFontLayout : NSObject
{
    NSData * glyphLayout; // +0x8
    struct metrics; // +0x10
    long long glyphCount; // +0x20
}
- (id)initWithGlyphLayout:(id)arg1 glyphCount:(long long)arg2 metrics:(struct)arg3;
- (void)dealloc;
- (struct *)glyphLayout;
- (struct)metrics;
- (long long)glyphCount;
@end

