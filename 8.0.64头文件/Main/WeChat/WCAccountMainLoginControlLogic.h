@interface WCAccountMainLoginControlLogic : WCAccountBaseControlLogic <WCAccountManualAuthControlLogicDelegate, WCAccountMainLoginViewControllerDelegate, WCBaseControlMgrExt>
{
    WCAccountBaseControlLogic * m_subFBLogic; // +0x30
    WCAccountBaseControlLogic * m_subAppleLogic; // +0x38
    WCAccountBaseControlLogic * m_subPasskeyLogic; // +0x40
    WCAccountManualAuthControlLogic * m_manualAuthLogic; // +0x48
    WCPlayLiveWithoutLoginControlLogic * m_test; // +0x50
    unsigned int m_uiCurrentLoginType; // +0x58
}
- (void)pause;
- (void)startLogic;
- (void)stopLogic;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (BOOL)handleDebugCommand:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)loginAccount:(BOOL)arg1 data:(id)arg2;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (BOOL)shouldShowBackBtnForMainLogin;
- (void)onMainLoginNext:(id)arg1 phoneNumber:(id)arg2;
- (void)onMainLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onMainLoginBack;
- (void)onMainLoginGotoSecurityCenter;
- (void)onMainLoginGoToHelpCenter;
- (void)onMainLoginGoToFreeze;
- (void)onMainLoginGoToFeedback;
- (void)onMainLoginGotoChatLogMigration;
- (void)onMainLoginProblem;
- (void)onMainLoginFacebookConnect;
- (void)onMainLoginAppleConnect;
- (void)onMainLoginPasskeyConnectWithAutoLogin:(BOOL)arg1;
- (void)onMainLoginUseBothDevice;
- (void)onMainLoginGoToRegister;
- (void)onLoginProblem:(id)arg1;
- (void).cxx_destruct;
@end
