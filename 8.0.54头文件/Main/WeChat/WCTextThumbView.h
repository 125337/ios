@interface WCTextThumbView : UIView <RichTextLayoutDelegate>
{
    BOOL _needsUpdateTextContent; // +0x8
    RichTextView * _richTextView; // +0x10
    NSString * _text; // +0x18
    long long _textVerticalAlignment; // +0x20
    UIEdgeInsets _textPadding; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setText:(id)arg1;
- (void)setTextPadding:(UIEdgeInsets)arg1;
- (void)setTextVerticalAlignment:(long long)arg1;
- (CGSize)textMaxSize;
- (void)layoutSubviews;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (id)richTextView;
- (id)text;
- (UIEdgeInsets)textPadding;
- (long long)textVerticalAlignment;
- (void).cxx_destruct;
@end

