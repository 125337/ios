@interface WCPayTransferOpenMiniGuidePageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id <WCPayTransferOpenMiniGuidePageSheetDelegate> _m_delegate; // +0x8
    UIView * _tipsContainerView; // +0x10
    OpenMinimchGuide * _viewData; // +0x18
}
- (id)initWithTipsInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)onClickLinkBtn:(id)arg1;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)showWithAnimated:(BOOL)arg1;
- (id)getOpenMiniGuideReportStr;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)tipsContainerView;
- (void)setTipsContainerView:(id)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (void).cxx_destruct;
@end
