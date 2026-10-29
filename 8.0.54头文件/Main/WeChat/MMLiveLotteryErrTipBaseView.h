@interface MMLiveLotteryErrTipBaseView : MMPageSheetBaseView
{
    id /* block */ _actionButtonBlock; // +0x8
    long long _previousOrientation; // +0x10
    UIView * _contentView; // +0x18
    UIImageView * _logoImageView; // +0x20
    UILabel * _titleLabel; // +0x28
    UIButton * _actionButton; // +0x30
    NSString * _title; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateErrTipBaseViewTitle:(id)arg1;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)pageSheetDidRotation;
- (id)contentView;
- (id)logoImageView;
- (id)titleLabel;
- (id)actionButton;
- (id /* block */)actionButtonBlock;
- (void)setActionButtonBlock:(id /* block */)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

