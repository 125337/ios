@interface MMUILabel : UILabel <MultiLineTextView, UIGestureRecognizerDelegate>
{
    BOOL _useRedesignLinespacing; // +0x8
    BOOL _enableLongPressCopy; // +0x9
    BOOL _wantsExtendedDynamicRangeContent; // +0xa
    unsigned long long _textStyle; // +0x10
    double _linespacingFactor; // +0x18
    double _fixedLineHeight; // +0x20
    UIColor * _highlightCopyColor; // +0x28
    NSString * _textToCopy; // +0x30
    double _edrHeadroom; // +0x38
    UILongPressGestureRecognizer * _longPressCopyGesture; // +0x40
}
+ (id)DynamicLabel:(id)arg1 textStyle:(unsigned long long)arg2;
+ (id)dotWithMultilineIntros:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)sizeToFitWidth:(double)arg1;
- (void)applyMultiLineConfig:(id)arg1;
- (void)setMultilineText:(id)arg1;
- (void)setMultilineAttrText:(id)arg1;
- (double)baselineOffset;
- (id)paragraphStyle;
- (void)setText:(id)arg1 lineSpacing:(double)arg2;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithTextStyle:(unsigned long long)arg1;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)setTextStyle:(unsigned long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setUseRedesignLinespacing:(BOOL)arg1;
- (void)setLinespacingFactor:(double)arg1;
- (void)setFixedLineHeight:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (double)edrHeadroom;
- (void)setWantsExtendedDynamicRangeContent:(BOOL)arg1;
- (double)calcLineSpacing;
- (void)setDotWithMultilineIntros:(id)arg1;
- (void)setEnableLongPressCopy:(BOOL)arg1;
- (void)menuItemHidden:(id)arg1;
- (void)longPressToCopy:(id)arg1;
- (id)textToCopy;
- (void)onLongPressCopy:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (double)dotLeadIndent;
- (unsigned long long)textStyle;
- (BOOL)useRedesignLinespacing;
- (double)linespacingFactor;
- (double)fixedLineHeight;
- (BOOL)enableLongPressCopy;
- (id)highlightCopyColor;
- (void)setHighlightCopyColor:(id)arg1;
- (void)setTextToCopy:(id)arg1;
- (BOOL)wantsExtendedDynamicRangeContent;
- (void)setEdrHeadroom:(double)arg1;
- (id)longPressCopyGesture;
- (void)setLongPressCopyGesture:(id)arg1;
- (void).cxx_destruct;
@end
