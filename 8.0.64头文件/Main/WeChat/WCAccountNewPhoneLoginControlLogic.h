@interface WCAccountNewPhoneLoginControlLogic : WCAccountBaseControlLogic <WCAccountNewPhoneVerifyViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountPhoneVerifyUpViewControllerDelegate, WCAccountVerifyCodeHandlerDelegate>
{
    WCAccountVerifyCodeHandler * _verifyCodeHandler; // +0x30
    WCAccountManualAuthControlLogic * _manualAuthLogic; // +0x38
    PhoneNumberFormatLogic * _phoneNumFormatter; // +0x40
    WCAccountNewPhoneVerifyViewController * _currentVC; // +0x48
}
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)loginAccount;
- (void)onPhoneVerifyUpBack;
- (void)onPhoneVerifyUpNext;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)arg1;
- (void)onHandlerCheckLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onHandlerCheckLoginVerifyCodeNoBind:(id)arg1;
- (void)onErrorHandleLogicDone;
- (BOOL)onErrorHandleLogicHandleGoNextWithParams:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)onNewPhoneVerifyBack;
- (void)onNewPhoneVerifyFirstTime:(BOOL)arg1;
- (void)onNewPhoneVerifyNextWithVerifyCode:(id)arg1;
- (void)onNewPhoneVerifyNextWithPwd:(id)arg1;
- (void)onNewPhoneVerifyGotoSecurityCenter;
- (void)onNewPhoneVerifyGotoFeedback;
- (void)onNewPhoneVerifyProblem;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)onNewPhoneVerifyGotoFreeze;
- (void)onNewPhoneVerifGotoRegister;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)checkHavePwd;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void).cxx_destruct;
@end
