@interface WCPayLQTDepositDetailCell : UITableViewCell
{
    BOOL _invaild; // +0x8
    UIView * _container; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
    UIView * _lineView; // +0x28
    WCPayCss * _css; // +0x30
    NSString * _title; // +0x38
    NSString * _desc; // +0x40
}
- (void)layoutSubviews;
- (void)updateContainer;
- (void)updateTitle:(id)arg1 desc:(id)arg2 invaild:(BOOL)arg3;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)updateLineView;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
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
