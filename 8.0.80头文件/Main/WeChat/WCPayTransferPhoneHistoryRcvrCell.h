@interface WCPayTransferPhoneHistoryRcvrCell : UITableViewCell
{
    BOOL _invaild; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    WCPayCss * _css; // +0x20
    NSString * _title; // +0x28
    NSString * _desc; // +0x30
}
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1 desc:(id)arg2 invaild:(BOOL)arg3;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)css;
- (void)setCss:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)invaild;
- (void)setInvaild:(BOOL)arg1;
- (void).cxx_destruct;
@end
