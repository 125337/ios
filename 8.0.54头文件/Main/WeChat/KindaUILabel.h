@interface KindaUILabel : UILabel
{
    id <KindaUILabelDelegate> _delegate; // +0x8
    NSArray * _highlightRanges; // +0x10
    UIColor * _highlightColor; // +0x18
    NSArray * _bkgDataItems; // +0x20
    NSMutableArray * _links; // +0x28
    long long _expandHitWidth; // +0x30
    long long _expandHitHeight; // +0x38
    NSAttributedString * _backupAttributedText; // +0x40
    UITextView * _textView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (long long)indexInLocation:(CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)rangeForIndex:(long long)arg1;
- (void)drawTextInRect:(CGRect)arg1;
- (void)drawTextBackground;
- (CGRect)boundingRectForCharacterRange:(_NSRange)arg1;
- (id)textView;
- (void)refreshAccessibilityElement;
- (CGRect)rectWithStringRange:(_NSRange)arg1;
- (id)makeAccessibilityElements;
- (BOOL)isAccessibilityElement;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)highlightRanges;
- (void)setHighlightRanges:(id)arg1;
- (id)highlightColor;
- (void)setHighlightColor:(id)arg1;
- (id)bkgDataItems;
- (void)setBkgDataItems:(id)arg1;
- (id)links;
- (void)setLinks:(id)arg1;
- (long long)expandHitWidth;
- (void)setExpandHitWidth:(long long)arg1;
- (long long)expandHitHeight;
- (void)setExpandHitHeight:(long long)arg1;
- (id)backupAttributedText;
- (void)setBackupAttributedText:(id)arg1;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end

