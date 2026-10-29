@interface WCPayTranferMoneyPaidSuccessViewController : WCPayBaseViewController <WCPayTransferMoneyPaidSuccessViewV2Delegate, MMTipsViewControllerDelegate, WCBaseControlMgrExt>
{
    BOOL m_bNeedBindCard; // +0x90
    id <WCPayTranferMoneyPaidSuccessViewControllerDelegate> m_delegate; // +0x98
    WCPayTransferMoneyPaidSuccessViewV2 * _m_layoutV2; // +0xa0
    WCPaySelectVerifyTypeLogic * _m_realNameLogic; // +0xa8
}
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)OnHistoryOrderDetailBack;
- (void)showSetPwdTipsView;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)ContinueOnHistoryOrderDetailBack;
- (void)initNavigationBar;
- (void)selectNeedBindCard:(id)arg1;
- (void)layoutV2;
- (void)reloadTableView;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickDone;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickLotteryBtn:(id)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2StartDrawLottery:(unsigned int)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ReturnWithoutDrawLottery;
- (id)m_layoutV2;
- (void)setM_layoutV2:(id)arg1;
- (id)m_realNameLogic;
- (void)setM_realNameLogic:(id)arg1;
- (void).cxx_destruct;
@end

