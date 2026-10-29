@interface WCPayInputMoneyView : UIView
{
    id <WCPayInputMoneyViewDelegate> _delegate; // +0x8
    NSString * _titleText; // +0x10
    UIColor * _titleColor; // +0x18
    NSString * _unitText; // +0x20
    UIColor * _unitColor; // +0x28
    UIColor * _separatorColor; // +0x30
    UILabel * _title; // +0x38
    UILabel * _unitLabel; // +0x40
    UITextField * _textField; // +0x48
    UIView * _separator; // +0x50
}
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (void)textFieldDidChange:(id)arg1;
- (id)title;
- (id)unitLabel;
- (void)updateTintColor:(id)arg1;
- (id)textField;
- (id)separator;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)unitText;
- (void)setUnitText:(id)arg1;
- (id)unitColor;
- (void)setUnitColor:(id)arg1;
- (id)separatorColor;
- (void)setSeparatorColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnitLabel:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void).cxx_destruct;
@end

