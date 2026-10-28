@interface WCPayTransferStatusViewPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UIView * _tipsContainerView; // +0x8
    TipsInfo * _viewData; // +0x10
}
- (id)initWithTipsInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id)tipsContainerView;
- (void)setTipsContainerView:(id)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (void).cxx_destruct;
@end
