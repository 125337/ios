@interface WCCoinSubscriptionAgreementView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    WecoinSubscriptionAgreementHalfPage * _pageData; // +0x70
    id /* block */ _clickConfirmCallback; // +0x78
    id /* block */ _clickCancelCallback; // +0x80
    WCCoinSubscriptionAgreementDetailView * _panelDetailView; // +0x88
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)pageData;
- (void)setPageData:(id)arg1;
- (id /* block */)clickConfirmCallback;
- (void)setClickConfirmCallback:(id /* block */)arg1;
- (id /* block */)clickCancelCallback;
- (void)setClickCancelCallback:(id /* block */)arg1;
- (id)panelDetailView;
- (void)setPanelDetailView:(id)arg1;
- (void).cxx_destruct;
@end
