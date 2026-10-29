@interface WCAccountPhoneRegLoginControlLogic : WCAccountBaseControlLogic <WCBaseControlMgrExt, WCAccountGatewayMaskedMobileViewControllerDelegate, WCAccountRegisterViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountRegByOldPhoneViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountBindPhoneForRegCGIDelegate, WCAccountPhoneVerifyUpViewControllerDelegate, WCPrivacyPolicyControlLogicDelegate>
{
    unsigned int m_uiABtest; // +0x30
    unsigned long long m_eRegStyleStatus; // +0x38
    unsigned int m_uiTryCount; // +0x40
    BOOL m_bNeedSetPwd; // +0x44
    unsigned int m_uiCheckVerifyUpCount; // +0x48
    NSString * m_nsDefaultISO; // +0x50
    BOOL m_isDefaultEU; // +0x58
    WCAccountBindPhoneForRegCGI * m_modelLogic; // +0x60
    WCAccountManualAuthControlLogic * m_manualAuthLogic; // +0x68
    WCAccountRegisterControlLogic * m_registerLogic; // +0x70
    WCPrivacyPolicyControlLogic * _privacyPolicyLogic; // +0x78
    id /* block */ privacyPolicyDoneBlock; // +0x80
    WCAccountGatewayMobileHandler * _gatewayMobileHandler; // +0x88
}
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (unsigned int)getCCType;
- (void)reportABTestStatus:(unsigned int)arg1;
- (void)startLogic;
- (void)cancelAllEvent;
- (id)getRegPhoneNumber;
- (BOOL)getVerifyCodeReady;
- (BOOL)getVoideVerifyCodeReady:(id)arg1;
- (BOOL)checkVerifyCode:(id)arg1;
- (BOOL)checkPhoneNumberStatus:(unsigned int)arg1;
- (void)getVerifyCode;
- (void)doPostCheck;
- (void)loginAccount;
- (void)preCheckReg;
- (void)doRegAccount;
- (void)onGatewayViewControllerQuit:(id)arg1;
- (void)onGatewayViewControllerGoNext;
- (void)onGatewayViewControllerUseOtherPhone;
- (unsigned long long)onRegStatus;
- (BOOL)isEURegion;
- (void)onRegNickNameBack;
- (void)onRegBack;
- (void)onRegNextWith:(id)arg1 headImage:(id)arg2;
- (BOOL)onRegNextWithISO:(id)arg1 isDefault:(BOOL)arg2;
- (void)onRegNextWith:(id)arg1 countryIsoCode:(id)arg2 phoneNum:(id)arg3 pwd:(id)arg4;
- (void)showPrivacyPolicyWithCC:(id)arg1 countryIsoCode:(id)arg2 phoneNum:(id)arg3 isAge:(BOOL)arg4 doneBlock:(id /* block */)arg5;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)delaySetPrivacyPolicyLogicNil;
- (void)onPhoneVerifyBack:(id)arg1;
- (void)onPhoneVerifyVoice;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onVoiceVerifyBack:(id)arg1;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)checkHavePwd;
- (void)onRegByOldPhoneBack;
- (void)onRegByOldPhoneContinueReg;
- (void)onRegByOldPhoneLogin;
- (void)onPhoneVerifyUpBack;
- (void)onPhoneVerifyUpNext;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (id)getRegSessionID;
- (void)onCheckRegPhoneNumberStatus:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)jumpToManulLoginControlMgrToRegister;
- (void)loginForPhone;
- (void)onGetRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetRegVoiceVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckRegVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onPostCheckRegState:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onErrorHandleLogicDone;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (void)pause;
- (void)resume;
- (id)gatewayMobileHandler;
- (void)setGatewayMobileHandler:(id)arg1;
- (void).cxx_destruct;
@end

