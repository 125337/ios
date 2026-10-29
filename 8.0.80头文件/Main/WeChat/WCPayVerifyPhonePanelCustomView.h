@interface WCPayVerifyPhonePanelCustomView : UIView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _descLabel; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
}
- (void)layoutSubviews;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end
