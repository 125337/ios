@interface WCPayCreateOfflinePayLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, IWCPayControlLogicExt>
{
    WCPayAddPayCardLogic * m_cardLogic; // +0x38
    BOOL _bHasHandleBindQueryResp; // +0x40
}
- (void)startLogic;
- (void)startGetUserData;
- (void)onNeedVerifyConfirm;
- (void)onNeedVerifyCancel;
- (void)EndCreateOfflinePayWithResponse:(id)arg1;
- (void)justEndCreateOfflinePay:(BOOL)arg1;
- (void)handleEnterOfflinePayAfterUpdateCard:(id)arg1 error:(id)arg2;
- (void)OnQueryOfflinePayLimit:(id)arg1 fromCache:(BOOL)arg2 Error:(id)arg3;
- (void)enterOfflinePayInternal;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnPreFinishedWCPayLogic:(id)arg1 waitUntilDone:(BOOL *)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (BOOL)isRegButNotRealnameUser;
- (void)showAddPayCardAlert;
- (void)OnCreateOfflinePayResponse:(id)arg1 Error:(id)arg2;
- (void)OnAddCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAddCardBtnDonw:(id)arg1;
- (BOOL)bHasHandleBindQueryResp;
- (void)setBHasHandleBindQueryResp:(BOOL)arg1;
- (void).cxx_destruct;
@end
