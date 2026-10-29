@interface WCFinderSizingRichTextView : UIView <ILinkEventExt>
{
    BOOL _pinWidth; // +0x8
    WCFinderSizingRichTextLayout * _layout; // +0x10
    id /* block */ _onClickAction; // +0x18
    RichTextView * _textView; // +0x20
    unsigned long long _useStyleHash; // +0x28
    RichTextView * _suffixTextView; // +0x30
    NSLayoutConstraint * _heightConstraint; // +0x38
    UIEdgeInsets _insets; // +0x40
}
+ (long long)defaultParserType;
- (id)initWithFrame:(CGRect)arg1;
- (void)setInsets:(UIEdgeInsets)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (void)_useLayout:(id)arg1;
- (void)layoutSubviews;
- (void)_onLayoutStyleChanged;
- (void)_onLayoutStyleChanged:(BOOL)arg1;
- (void)_onLayoutStyleChangeDelayFlush;
- (void)_setupSuffixTextView;
- (void)_checkConstraints;
- (BOOL)_isUsingAutoLayout;
- (CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (id /* block */)onClickAction;
- (void)setOnClickAction:(id /* block */)arg1;
- (UIEdgeInsets)insets;
- (BOOL)pinWidth;
- (void)setPinWidth:(BOOL)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (unsigned long long)useStyleHash;
- (void)setUseStyleHash:(unsigned long long)arg1;
- (id)suffixTextView;
- (void)setSuffixTextView:(id)arg1;
- (id)heightConstraint;
- (void)setHeightConstraint:(id)arg1;
- (void).cxx_destruct;
@end
