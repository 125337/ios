@interface WCAccountLastUserLoginControlLogic : WCAccountBaseControlLogic <WCAccountLoginLastUserViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountVerifyCodeHandlerDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountSecurityCenterDelegate, WCAccountPhoneVerifyUpViewControllerDelegate>
{
    BOOL m_bFromLogout; // +0x30
    BOOL m_bFromNoPwdLogin; // +0x31
    BOOL m_bFromGatewayLogin; // +0x32
    BOOL m_bGatewayRequestReported; // +0x33
    unsigned int m_uiPwdErrCount; // +0x34
    WCAccountManualAuthControlLogic * m_manualAuthLogic; // +0x38
    WCAccountBaseControlLogic * m_subPasskeyLogic; // +0x40
    unsigned int m_uiCurrentLoginType; // +0x48
    WCAccountVerifyCodeHandler * m_verifyCodeHandler; // +0x50
    WCAccountLoginLastUserViewController * m_lastUserVerifyVC; // +0x58
    VoicePrintVerifyLogic * _voicePrintVerifyLogic; // +0x60
}
- (void)pause;
- (void)startLogic;
- (void)stopLogic;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)loginAccount:(BOOL)arg1 data:(id)arg2;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)arg1;
- (void)onHandlerCheckLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onHandlerCheckLoginVerifyCodeNoBind:(id)arg1;
- (void)onHandlerCheckLoginFail:(id)arg1 Response:(id)arg2;
- (void)onLastUserBack;
- (void)onLastUserVerifyFirstTime:(BOOL)arg1;
- (void)onLastUserVerifyNextWithVerifyCode:(id)arg1;
- (void)onLastUserLoginNoPwd;
- (void)onLastUserLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onLastPasskeyLogin:(BOOL)arg1;
- (void)onLastPasskeyLoginClick;
- (void)onLastGatewayLoginClick;
- (void)onLastUserRegister;
- (void)onLastUserLoginNoPwdError;
- (void)onLastUserProblem:(id)arg1;
- (void)onLastUserGoToSecurityCenter:(id)arg1;
- (void)onLastUserGoToHelpCenter:(id)arg1;
- (void)onLastUserGoToFreeze:(id)arg1;
- (void)onLastUserGoToFeedback;
- (void)onLastUserVoicePrintLogin;
- (void)onLastUserLoginByQRCode;
- (void)onLastUserChangeAccount:(id)arg1;
- (void)onJumpIntoLoginUI;
- (void)onLastUserUseBothDevice;
- (void)onLastUserGotoChatLogMigration;
- (void)onPhoneVerifyUpBack;
- (void)onPhoneVerifyUpNext;
- (void)onErrorHandleLogicDone;
- (BOOL)onErrorHandleLogicHandleGoNextWithParams:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)reportLastUserLoginFailWithErrReturnCode:(long long)arg1;
- (void)reportLoginFailWithResponse:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void)onPasswordError:(id)arg1;
- (void)checkHavePwd;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)onWebViewCloseAndGoNext:(id)arg1 customClose:(BOOL *)arg2;
- (id)voicePrintVerifyLogic;
- (void)setVoicePrintVerifyLogic:(id)arg1;
- (void).cxx_destruct;
@end
