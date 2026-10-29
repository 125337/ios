@interface BrandProfileRichTextTagViewLayout : NSObject <RichTextLayoutDelegate>
{
    BOOL _hasTag; // +0x8
    CGSize _tagImageSize; // +0x10
}
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (BOOL)hasTag;
- (void)setHasTag:(BOOL)arg1;
- (CGSize)tagImageSize;
- (void)setTagImageSize:(CGSize)arg1;
@end

