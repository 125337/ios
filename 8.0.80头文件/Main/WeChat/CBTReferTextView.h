@interface CBTReferTextView : UIView
{
    NSTextStorage * _textStorage; // +0x8
    NSLayoutManager * _layoutManager; // +0x10
    NSTextContainer * _textContainer; // +0x18
    NSAttributedString * _attributedText; // +0x20
    unsigned long long _maximumNumberOfLines; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (id)textStorage;
- (void)setTextStorage:(id)arg1;
- (id)layoutManager;
- (void)setLayoutManager:(id)arg1;
- (id)textContainer;
- (void)setTextContainer:(id)arg1;
- (id)attributedText;
- (unsigned long long)maximumNumberOfLines;
- (void).cxx_destruct;
@end
