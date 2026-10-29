@interface MMFinderLiveFreeMicFeatureDescriptionPanel : MMPageSheetBaseView
{
    id /* block */ _freeMicFeatureDescriptionPanelDidCloseBlock; // +0x8
    UIView * _contentView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _dotLabel1; // +0x20
    UILabel * _dotLabel2; // +0x28
    UILabel * _tipLabel1; // +0x30
    UILabel * _tipLabel2; // +0x38
    UIButton * _confirmButton; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)onClickConfirmButton:(id)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id /* block */)freeMicFeatureDescriptionPanelDidCloseBlock;
- (void)setFreeMicFeatureDescriptionPanelDidCloseBlock:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)dotLabel1;
- (void)setDotLabel1:(id)arg1;
- (id)dotLabel2;
- (void)setDotLabel2:(id)arg1;
- (id)tipLabel1;
- (void)setTipLabel1:(id)arg1;
- (id)tipLabel2;
- (void)setTipLabel2:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end

