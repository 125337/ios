@interface WCPayBalanceSaveMoneyControlLogic : WCPayControlLogic <MMTipsViewControllerDelegate, MMWebViewDelegate, WCPayLQTMoneyControlLogicDelegate, MMUseCaseCallback, WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPaySaveViewControllerDelegate, WCBaseControlMgrExt>
{
    WCPayPayMoneyLogic * m_payLogic; // +0x38
    BOOL _bIsFromSaveViewControllerBindQuery; // +0x40
    BOOL _bShouldRefreshSelect; // +0x41
    BOOL _bIsChargeBalanceSucc; // +0x42
    id <WCPayBalanceSaveMoneyControlLogicDelegate> _logicDelegate; // +0x48
    WCPayLQTMoneyControlLogic * _lqtMoneyControlLogic; // +0x50
}
- (void)startLogic;
- (void)pause;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (BOOL)gotoViewController:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)OnResetPasswordFinish:(id)arg1;
- (void)WCPaySaveViewControllerCancel:(BOOL)arg1;
- (void)WCPaySaveViewControllerNext:(id)arg1;
- (void)WCPaySaveViewControllerClickLQTEntryViewWithAmount:(id)arg1 selectCardInfo:(id)arg2;
- (BOOL)WCPaySaveIsCurrentLogicTop;
- (void)WCPaySaveViewControllerBackFromPop;
- (void)OnGetBalanceSaveRequest:(id)arg1 Error:(id)arg2 retryPayInfo:(id)arg3;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)startPayMoneyLogicWithReqKey:(id)arg1 retryPayInfo:(id)arg2 selectedCardInfo:(id)arg3;
- (void)onLQTMoneyControlLogicStop:(BOOL)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)webViewReturn:(id)arg1;
- (void)delayActiveViewControllerTextField;
- (void)ActiveSaveViewControllerTextField:(BOOL)arg1;
- (void)startKindaSaveBalance:(unsigned long long)arg1;
- (void)call:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (BOOL)bIsFromSaveViewControllerBindQuery;
- (void)setBIsFromSaveViewControllerBindQuery:(BOOL)arg1;
- (BOOL)bShouldRefreshSelect;
- (void)setBShouldRefreshSelect:(BOOL)arg1;
- (id)lqtMoneyControlLogic;
- (void)setLqtMoneyControlLogic:(id)arg1;
- (BOOL)bIsChargeBalanceSucc;
- (void)setBIsChargeBalanceSucc:(BOOL)arg1;
- (void).cxx_destruct;
@end

