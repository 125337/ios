@interface WCPayBalanceFetchMoneyControlLogic : WCPayControlLogic <WCPayFetchIdentifyTipsViewControllerDelegate, MMUseCaseCallback, WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPayNewFetchViewControllerDelegate, WCBaseControlMgrExt>
{
    WCPayPayMoneyLogic * m_payLogic; // +0x38
    WCPayAddPayCardLogic * m_oWCPayAddPayCardLogic; // +0x40
    WCPayBalanceTipsLogic * m_oContinueTipLogic; // +0x48
    WCPayBalanceTipsLogic * m_oFirstChargeTipLogic; // +0x50
    WCPayBalanceTipsLogic * m_oNotEnoughtFeeTipLogic; // +0x58
    WCPayBalanceTipsLogic * m_fetchChargesTipLogic; // +0x60
    BOOL m_bHaveShowFisrtChargeTip; // +0x68
    NSArray * m_arrMyAllCardsBeforeAddCard; // +0x70
    BOOL m_bAddingNewCard; // +0x78
    WCPayPayResponseRetryInfo * m_retryInfo; // +0x80
    WCPayFetchBalanceReport * m_reportLogic; // +0x88
}
- (id)getReportLogic;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (BOOL)gotoViewController:(id)arg1;
- (BOOL)WCPayFetchIsCurrentLogicTop;
- (void)WCPayFetchViewControllerCancel:(BOOL)arg1;
- (void)dismissCurrentViewAndCheckStopLogicWithAnimated:(BOOL)arg1;
- (void)WCPayFetchViewControllerNext:(id)arg1 FetchAll:(BOOL)arg2;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)WCPayFetchViewControllerAddCard;
- (void)doAddCard;
- (void)OnContinueFetch;
- (void)WCPayFetchViewControlllerNeedUpdateData;
- (void)OnGetBalanceFetchRequest:(id)arg1 ExtData:(id)arg2 Error:(id)arg3;
- (void)showFetchChargeAlert:(id)arg1;
- (void)showFirstFetchInfoAlert:(id)arg1 notEnoughtForFee:(id)arg2;
- (void)showNotEnoughForFeeAlert:(id)arg1;
- (void)onClickFetchAll;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)storeAllExistCards;
- (id)getNewBindCard;
- (id)getAvailableCards;
- (void)onWCPayFetchIdentifyTipsViewControllerConfirm:(id)arg1;
- (void)onWCPayFetchIdentifyTipsViewControllerCancel;
- (void)startKindaFetchBalance:(unsigned long long)arg1 fetchAll:(BOOL)arg2;
- (void)call:(id)arg1;
- (void)ActiveFetchViewControllerTextField:(BOOL)arg1;
- (void).cxx_destruct;
@end
