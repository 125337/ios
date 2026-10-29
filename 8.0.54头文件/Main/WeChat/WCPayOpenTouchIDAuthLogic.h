@interface WCPayOpenTouchIDAuthLogic : WCPayControlLogic <MMTipsViewControllerDelegate, WCPayBioPayV2UpdateAuthKeyCgiDelegate, WCPayBioPayV2GetChallengeCgiDelegate>
{
    unsigned long long _action; // +0x38
    id <WCPayOpenTouchIDAuthLogicDelegate> _m_delegate; // +0x40
    WCPayBioPayV2UpdateAuthKeyCgi * _updateAuthKeyCgi; // +0x48
    WCPayBioPayV2GetChallengeCgi * _getChallengeCgi; // +0x50
}
- (void)startLogic;
- (void)stopLogic;
- (void)refreshLocalDataFromServerWithState:(BOOL)arg1;
- (void)openTouchPay;
- (void)openTouchPay:(BOOL)arg1 msgString:(id)arg2 signature:(id)arg3;
- (void)showCommonError:(id)arg1 errorCode:(long long)arg2 dimissView:(BOOL)arg3;
- (void)showErrorFromManagePage:(id)arg1;
- (void)handleError:(id)arg1 errorCode:(long long)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)openPWDVC;
- (void)showCloseAlert;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)alertViewClickCancel;
- (void)alertViewClickConfirm;
- (void)verifyPassword;
- (void)onAlertViewIKnow;
- (void)onAlertViewCancel;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiResponseOK:(id)arg1;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayBioPayV2GetChallengeCgiResponseOK:(id)arg1;
- (void)onWCPayBioPayV2GetChallengeCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)callOkDelegate;
- (void)callFailDelegate;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)updateAuthKeyCgi;
- (void)setUpdateAuthKeyCgi:(id)arg1;
- (id)getChallengeCgi;
- (void)setGetChallengeCgi:(id)arg1;
- (void).cxx_destruct;
@end

