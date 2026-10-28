@interface WCPayCardListViewController : WCPayBaseViewController <WCPayNoticeBannerDelegate, HoneyPayReceiverCardViewDelegate, HoneyPayReceiverCardDetailControlLogicDelegate, WCActionSheetDelegate, WCPayCardDetailViewDelegate, MMUseCaseCallback, WCPayLogicMgrExt, ILinkEventExt, MMWebViewDelegate>
{
    NSMutableArray * m_arrPayCardDetailView; // +0x98
    unsigned int totalHeight; // +0xa0
    NSDictionary * m_dicBanners; // +0xa8
    UIButton * m_applyCardButton; // +0xb0
    id <WCPayCardListViewControllerDelegate> _m_delegate; // +0xb8
}
- (id)init;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)onLeftBarButtonDone;
- (void)viewDidLoad;
- (void)reloadNavigationItem;
- (void)rightBarButtonClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)makeBaseExtentionCell:(id)arg1;
- (void)makeWXBorrowMoneyItemCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeVirtualCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeAddCardCell:(id)arg1;
- (id)makeAddNewCardView;
- (void)makeApplyNewCardCell:(id)arg1;
- (void)makeLoanMoneyCell:(id)arg1;
- (void)willShowAddCard;
- (void)didShowAddCard;
- (void)didShowApplyNewCard;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2 fromScene:(unsigned long long)arg3;
- (void)refreshViewWithData:(id)arg1;
- (void)onClickVirtualCard:(id)arg1;
- (void)onClickVirtualCardAndChecking:(id)arg1;
- (void)onClickWXBorrowMoneyItem:(id)arg1;
- (void)onClickWXBorrowMoneyItemView:(id)arg1;
- (void)onClickBalanceView:(id)arg1;
- (void)onClickCard:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)gotoLoanMoney;
- (void)webViewReturn:(id)arg1;
- (void)onQAButtonClick;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getNoticeBanner;
- (void)honeyPayCardViewDidBeClicked:(id)arg1;
- (void)call:(id)arg1;
- (void)honeyPayReceiverCardDetailLogicDidUnbindCard:(id)arg1;
- (void)OnResetPasswordCancel:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
