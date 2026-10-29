@interface WCPayBizF2FPaidSuccViewController : WCPayBaseViewController <WCPayTransferMoneyPaidSuccessViewV2Delegate>
{
    id <WCPayBizF2FPaidSuccViewControllerDelegate> _delegate; // +0x90
    WCPayTransferMoneyPaidSuccessViewV2 * _m_layoutV2; // +0x98
}
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateView;
- (void)refreshActivityContent;
- (void)refreshViewWithData:(id)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickDone;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickLotteryBtn:(id)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2StartDrawLottery:(unsigned int)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ReturnWithoutDrawLottery;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)m_layoutV2;
- (void)setM_layoutV2:(id)arg1;
- (void).cxx_destruct;
@end

