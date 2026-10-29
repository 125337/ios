@interface BTRichTextTagViewLayout : NSObject <RichTextLayoutDelegate>
{
    BOOL _hasTag; // +0x8
    double _customTextTagLeftSpacing; // +0x10
    CGSize _tagSize; // +0x18
}
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (BOOL)hasTag;
- (void)setHasTag:(BOOL)arg1;
- (CGSize)tagSize;
- (void)setTagSize:(CGSize)arg1;
- (double)customTextTagLeftSpacing;
- (void)setCustomTextTagLeftSpacing:(double)arg1;
@end
