@interface WCPayControlLogic : WCBizControlLogic <WCBaseControlMgrExt, WCPayLogicMgrExt, MMWebViewDelegate, WCPayBaseViewControllerRemoveDelegate>
{
    WCPayControlData * m_data; // +0x30
    NSString * m_nsErrorDetailUrl; // +0x38
}
- (id)data;
- (id)init;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)stopLogic;
- (id)getPayData;
- (void)pushViewController:(id)arg1 data:(id)arg2;
- (void)popViewControllerAndPush:(id)arg1 data:(id)arg2 animated:(BOOL)arg3;
- (void)onNotifyResultProcessFinished;
- (void)addTopViewController:(id)arg1;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicBeforeDismiss;
- (BOOL)OnCheckDismissCurrentViewControllerAndStopLogicAfterDismiss;
- (void)startTopVCLoadingNonBlocked;
- (void)stopTopVCLoadingNonBlocked;
- (void)handleRouteInfo:(id)arg1;
- (void)onErrorAlertViewStopLogic:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (BOOL)onError:(id)arg1;
- (void)showErrorTipsViewWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 errorDetailUrl:(id)arg6 extInfo:(id)arg7;
- (BOOL)onNeedToControlCurrentPublicError;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(unsigned int)arg2;
- (void)onPayPasswordErrorAlertViewDismiss:(id)arg1;
- (void)onAlertResetPwd:(id)arg1;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnPhoneNumberError:(id)arg1;
- (void)OnCVVAndValidError:(id)arg1;
- (void)OnCVVError:(id)arg1;
- (void)OnValidError:(id)arg1;
- (void)OnHandleSpecialPayError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnLimitInsufficientError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnAddCardBtnDonw;
- (void)OnAddCardError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)OnVerifyUserInfo;
- (void)OnAddCardToVerifyUserInfoError:(id)arg1 ErrorType:(unsigned int)arg2;
- (void)showPayOrderConfirmViewWithData:(id)arg1 delegate:(id)arg2;
- (void)OnWCBizBaseViewControllerDidBePoped:(id)arg1;
- (void)onErrorDetailClick:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)setPayChannel:(unsigned int)arg1;
- (void)onRealnameActionClick:(id)arg1;
- (void).cxx_destruct;
@end
