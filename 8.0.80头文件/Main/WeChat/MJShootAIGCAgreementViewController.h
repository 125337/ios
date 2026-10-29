@interface MJShootAIGCAgreementViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    id /* block */ _didTapAgreeButtonAction; // +0x70
    id /* block */ _didTapCancelButtonAction; // +0x78
    UIView * _contentView; // +0x80
    MMUILabel * _titleLabel; // +0x88
    MMUILabel * _descriptionLabel; // +0x90
}
- (id)init;
- (void)viewDidLoad;
- (id)contentView;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetCancelButtonTitle;
- (id)colorForPageSheetCancelButton;
- (id /* block */)didTapAgreeButtonAction;
- (void)setDidTapAgreeButtonAction:(id /* block */)arg1;
- (id /* block */)didTapCancelButtonAction;
- (void)setDidTapCancelButtonAction:(id /* block */)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end
