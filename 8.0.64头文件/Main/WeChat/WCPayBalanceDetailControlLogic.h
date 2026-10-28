@interface WCPayBalanceDetailControlLogic : WCPayControlLogic <WCPayWalletUpdateExt, WCPayLQTDetailControlLogicDelegate, WCPayECardDetailControlLogicDelegate, WCPayLQTMoneyControlLogicDelegate, WCPayBalanceSaveMoneyControlLogicDelegate, MMUseCaseCallback, WCPayBalanceDetailViewControllerDelegate, WCBaseControlMgrExt>
{
    int m_eWCPayBalanceDetailControlLogicScene; // +0x38
    WCPayAddPayCardLogic * m_oWCPayAddPayCardLogic; // +0x40
    WCPayLQTDetailControlLogic * _lqtDetailControlLogic; // +0x48
    WCPayLQTMoneyControlLogic * _lqtMoneyControlLogic; // +0x50
    WCPayBalanceSaveMoneyControlLogic * _saveMoneyControlLogic; // +0x58
}
- (id)init;
- (void)dealloc;
- (void)startLogic;
- (void)startBalanceDetailLogic;
- (void)pause;
- (void)call:(id)arg1;
- (void)BalanceDetailBack;
- (void)BalanceDetailSaveMoney;
- (void)BalanceDetailFetchMoney;
- (void)BalanceDetailRequeryBalance;
- (void)BalanceDetailBackOpenECardDetail:(id)arg1;
- (void)BalanceDetailJumpToLQTDetail:(id)arg1;
- (void)BalanceDetailJumpToLQTDetail:(id)arg1 vcDelegate:(id)arg2;
- (void)BalanceDetailJumpToLQTSave:(id)arg1;
- (void)BalanceDetailJumpToLQTSave:(id)arg1 entranceType:(int)arg2 bindSerial:(id)arg3 amount:(id)arg4 vcDelegate:(id)arg5;
- (void)doAddCard;
- (void)doAddCardForFetchMoney;
- (void)doFetchMoney;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)BackToRootView;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnRealnameVerifySuccessNotification:(id)arg1;
- (void)onLQTDetailControlLogicStop;
- (void)eCardDeteailLogicDidUnbindCard:(id)arg1;
- (void)onWCPayWalletUpdateDidCall;
- (void)onLQTMoneyControlLogicStop:(BOOL)arg1;
- (void)onBalanceSaveMoneyControlLogicStop:(BOOL)arg1;
- (int)m_eWCPayBalanceDetailControlLogicScene;
- (void)setM_eWCPayBalanceDetailControlLogicScene:(int)arg1;
- (id)lqtDetailControlLogic;
- (void)setLqtDetailControlLogic:(id)arg1;
- (id)lqtMoneyControlLogic;
- (void)setLqtMoneyControlLogic:(id)arg1;
- (id)saveMoneyControlLogic;
- (void)setSaveMoneyControlLogic:(id)arg1;
- (void).cxx_destruct;
@end
