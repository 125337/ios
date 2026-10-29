@interface FaceRecogTipsPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UIView * _tipsContainerView; // +0x8
    id /* block */ _onDismiss; // +0x10
}
- (id)initWithDismiss:(id /* block */)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (id)genImageViewWithName:(id)arg1;
- (id)genTipsLabelWithTitle:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)tipsContainerView;
- (void)setTipsContainerView:(id)arg1;
- (id /* block */)onDismiss;
- (void)setOnDismiss:(id /* block */)arg1;
- (void).cxx_destruct;
@end

