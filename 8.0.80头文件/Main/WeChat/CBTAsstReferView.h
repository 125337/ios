@interface CBTAsstReferView : UIView
{
    id <CBTAsstReferViewDelegate> _delegate; // +0x8
    unsigned long long _barPosition; // +0x10
    UIView * _leadingBarView; // +0x18
    UIView * _pressedOverlayView; // +0x20
    NSString * _content; // +0x28
    NSString * _layoutContent; // +0x30
    NSAttributedString * _attributedContent; // +0x38
    CBTReferTextView * _textView; // +0x40
    UIButton * _clearButton; // +0x48
    unsigned long long _style; // +0x50
    double _cachedTextWidth; // +0x58
    double _lastIntrinsicWidth; // +0x60
    CGSize _cachedTextSize; // +0x68
}
- (id)initWithStyle:(unsigned long long)arg1 barPosition:(unsigned long long)arg2;
- (void)setupViews;
- (void)setReferringText:(id)arg1;
- (void)setBarPosition:(unsigned long long)arg1;
- (CGSize)measureTextForWidth:(double)arg1;
- (void)invalidateTextMeasurementCache;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onTapClear:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)barPosition;
- (id)leadingBarView;
- (void)setLeadingBarView:(id)arg1;
- (id)pressedOverlayView;
- (void)setPressedOverlayView:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)layoutContent;
- (void)setLayoutContent:(id)arg1;
- (id)attributedContent;
- (void)setAttributedContent:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)clearButton;
- (void)setClearButton:(id)arg1;
- (unsigned long long)style;
- (double)cachedTextWidth;
- (void)setCachedTextWidth:(double)arg1;
- (CGSize)cachedTextSize;
- (void)setCachedTextSize:(CGSize)arg1;
- (double)lastIntrinsicWidth;
- (void)setLastIntrinsicWidth:(double)arg1;
- (void).cxx_destruct;
@end
