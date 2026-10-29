@interface HoneyPayPrepareCardView : UIView <UITextFieldDelegate>
{
    id <HoneyPayPrepareCardViewDelegate> _delegate; // +0x8
    UILabel * _titleLabel; // +0x10
    NSString * _title; // +0x18
    NSString * _cardAmount; // +0x20
    NSString * _iconUrl; // +0x28
    unsigned long long _type; // +0x30
    UIView * _contentView; // +0x38
    UILabel * _unitLabel; // +0x40
    UITextField * _textField; // +0x48
    WCPayWebImageView * _icon; // +0x50
}
- (void)layoutSubviews;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textFieldDidChange:(id)arg1;
- (id)contentView;
- (id)titleLabel;
- (id)unitLabel;
- (id)textField;
- (id)icon;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)cardAmount;
- (void)setCardAmount:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setUnitLabel:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end

