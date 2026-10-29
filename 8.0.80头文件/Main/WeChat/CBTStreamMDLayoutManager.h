@interface CBTStreamMDLayoutManager : NSLayoutManager <NSLayoutManagerDelegate>
{
    id <CBTStreamMDLayoutManagerDelegate> _layoutDelegate; // +0x8
}
- (id)init;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(_NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(_NSRange)arg5;
- (void)drawGlyphsForGlyphRange:(_NSRange)arg1 atPoint:(CGPoint)arg2;
- (void)setNeedsLayout:(id)arg1;
- (void)setNeedsDisplay:(id)arg1;
- (_NSRange)rangeForAttachment:(id)arg1;
- (id)storage;
- (void)drawBackgroundForGlyphRange:(_NSRange)arg1 atPoint:(CGPoint)arg2;
- (void)drawRoundedBackgroundForRange:(_NSRange)arg1 config:(id)arg2 atPoint:(CGPoint)arg3;
- (CGRect)glyphDrawRectForGlyphRange:(_NSRange)arg1 lineFragmentRect:(CGRect)arg2 lineOrigin:(CGPoint)arg3;
- (void)drawBlockquoteBarsForCharacterRange:(_NSRange)arg1 atPoint:(CGPoint)arg2;
- (BOOL)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (void).cxx_destruct;
@end
