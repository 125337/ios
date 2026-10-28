@interface RTELayoutManager : NSLayoutManager
{
    id <RTELayoutManagerDelegate> _layoutDelegate; // +0x8
}
- (void)drawGlyphsForGlyphRange:(_NSRange)arg1 atPoint:(CGPoint)arg2;
- (void)setNeedsLayout:(id)arg1;
- (void)setNeedsDisplay:(id)arg1;
- (void)relayoutForContentRange:(_NSRange)arg1;
- (id)storage;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (void).cxx_destruct;
@end
