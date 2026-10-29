@interface AppChatBotShareContentView : UIView
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
    UIView * _aiIconContainer; // +0x18
    UIImageView * _aiIconView; // +0x20
    UIView * _accountView; // +0x28
    UIImageView * _accountIconView; // +0x30
    MMUILabel * _accountLabel; // +0x38
}
+ (double)labelHeightForLabel:(id)arg1 width:(double)arg2 maxLines:(long long)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (double)measuredHeightForWidth:(double)arg1;
- (void)updateDisplay:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)aiIconContainer;
- (void)setAiIconContainer:(id)arg1;
- (id)aiIconView;
- (void)setAiIconView:(id)arg1;
- (id)accountView;
- (void)setAccountView:(id)arg1;
- (id)accountIconView;
- (void)setAccountIconView:(id)arg1;
- (id)accountLabel;
- (void)setAccountLabel:(id)arg1;
- (void).cxx_destruct;
@end
