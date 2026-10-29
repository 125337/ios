@interface WCFinderHighEntropyHotCommentLayoutContext : NSObject <RichTextLayoutDelegate>
{
    double _firstLineOriginX; // +0x8
    double _contentWidth; // +0x10
    double _truncatedFY; // +0x18
    double _suffixReservedWidth; // +0x20
}
- (id)init;
- (double)originXForLineAtHeight:(double)arg1 richTextView:(id)arg2;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (double)firstLineOriginX;
- (void)setFirstLineOriginX:(double)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (double)truncatedFY;
- (void)setTruncatedFY:(double)arg1;
- (double)suffixReservedWidth;
- (void)setSuffixReservedWidth:(double)arg1;
@end
