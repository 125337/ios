@interface MMLiveHiddenAudienceNameTipsView : MMPageSheetBaseView
{
    id /* block */ _clickAction; // +0x8
    UIView * _contentView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    MMUIButton * _okButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)okButton;
- (void)setOkButton:(id)arg1;
- (void).cxx_destruct;
@end

