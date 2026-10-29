@interface WCPayCheckNameView : UIView
{
    UITextField * _textField; // +0x8
    UIView * _container; // +0x10
    UIView * _inputContainer; // +0x18
    UILabel * _tailLabel; // +0x20
    NSString * _tail; // +0x28
    WCPayCss * _css; // +0x30
}
- (void)updateInputTail:(id)arg1;
- (void)layoutSubviews;
- (void)updateContainer;
- (void)updateInputContainer;
- (void)updateTextField;
- (void)updateInputTailLabel;
- (id)attributedString:(id)arg1 kern:(double)arg2 font:(id)arg3;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)inputContainer;
- (void)setInputContainer:(id)arg1;
- (id)tailLabel;
- (void)setTailLabel:(id)arg1;
- (id)tail;
- (void)setTail:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (void).cxx_destruct;
@end

