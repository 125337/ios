@interface WCAccountLoginControlLogic : WCAccountBaseControlLogic <WCAccountLoginFirstViewControllerDelegate, WCAccountBackDeviceFirstViewControllerDelegate, WCAccountSignMethodSwitchViewControllerDelegate, WCAccountOneClickLoginViewControllerDelegate>
{
    WCPlayLiveWithoutLoginControlLogic * _m_playLiveWthioutLoginLoigc; // +0x30
}
- (void)pause;
- (void)startLogic;
- (void)startIPadLoginLogic;
- (void)startIPhoneLoginLogic;
- (void)stopLogic;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)showRegisterPageSheet;
- (void)registerByFacebook;
- (void)registerByApple;
- (void)startRegisterLogic;
- (void)onSignMethodSwitch:(unsigned long long)arg1;
- (void)onFirstViewLogin;
- (void)onFirstViewRegister;
- (void)onUseBothDevice;
- (void)onUseIPadOnly;
- (void)onLoginByQQ;
- (void)onLoginByQRCode;
- (void)onLoginByQRCodeWithOneClickDisconnect;
- (void)onOneClickLoginSwitchAccount;
- (void)onOneClickLoginProblem;
- (void)onOneClickLoginGoToSecurityCenter;
- (void)onOneClickLoginGoToHelpCenter;
- (void)onOneClickPlayLiveWithoutLogin;
- (id)m_playLiveWthioutLoginLoigc;
- (void)setM_playLiveWthioutLoginLoigc:(id)arg1;
- (void).cxx_destruct;
@end
