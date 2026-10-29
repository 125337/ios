@interface WCFinderDynamicRichTextView : UIView <WCFinderDynamicRichTextViewDelegate>
{
    id <WCFinderDynamicRichTextViewDelegate> _delegate; // +0x8
    UIFont * _font; // +0x10
    UIColor * _textColor; // +0x18
    NSString * _richText; // +0x20
    double _horizontalPadding; // +0x28
    double _verticalPadding; // +0x30
    long long _lineBreakMode; // +0x38
    YYLabel * _label; // +0x40
    WCFinderDynamicRichTextParser * _richTextParser; // +0x48
    CGSize _iconSize; // +0x50
    CGSize _iconPadding; // +0x60
    CGSize _fontIconSize; // +0x70
}
+ (id)covertRichTextToRichTextViewContent:(id)arg1 iconSize:(CGSize)arg2 iconColor:(id)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (long long)numberOfLines;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (long long)textAlignment;
- (void)setIsAccessibilityElement:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)iconSize;
- (void)setRichText:(id)arg1;
- (void)sizeToFit;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onTextView:(id)arg1 onClickLinkWithHref:(id)arg2;
- (void)onClickText;
- (void)traitCollectionDidChange:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)font;
- (id)textColor;
- (void)setIconSize:(CGSize)arg1;
- (CGSize)iconPadding;
- (void)setIconPadding:(CGSize)arg1;
- (id)richText;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;
- (double)verticalPadding;
- (void)setVerticalPadding:(double)arg1;
- (long long)lineBreakMode;
- (CGSize)fontIconSize;
- (void)setFontIconSize:(CGSize)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)richTextParser;
- (void)setRichTextParser:(id)arg1;
- (void).cxx_destruct;
@end

