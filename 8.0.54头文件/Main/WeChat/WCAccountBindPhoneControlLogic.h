@interface WCAccountBindPhoneControlLogic : WCAccountBaseControlLogic <SettingModifyAliasViewControllerDelegate, WCAccountFillPhoneViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, PBMessageObserverDelegate>
{
    unsigned long long m_scene; // +0x30
    NSString * m_nsOldPhone; // +0x38
    id <WCAccountBindPhoneControlLogicDelegate> m_delegate; // +0x40
    BOOL m_stopLogicIfCancelSetAlias; // +0x48
    NSString * m_policyAgreementTicket; // +0x50
    NSString * m_verifyTicket; // +0x58
}
- (void)setDelegate:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)getData;
- (void)setScene:(unsigned int)arg1;
- (void)stopLogic;
- (void)dealloc;
- (void)startlogicFromServerGuidanceWithRestrictiveISOContryCode:(id)arg1;
- (void)startLogicToSetAlias;
- (void)startChangelogic:(id)arg1;
- (void)startVerifylogic;
- (void)startLogic;
- (void)cancelAllEvent;
- (id)getFullPhoneNum;
- (unsigned int)getReadyOpcode;
- (unsigned int)getCheckOpcode;
- (BOOL)getVerifyCodeReady;
- (BOOL)getVoideVerifyCodeReady:(id)arg1;
- (BOOL)checkVerifyCode:(id)arg1;
- (BOOL)forceTakeOverPhone;
- (BOOL)startBindOpMobileRequest:(id)arg1;
- (void)showBindSuccessViewWithNeedRestart:(BOOL)arg1;
- (void)showModifyAliasViewControllerWithAnimated:(BOOL)arg1;
- (void)onFillPhoneBack:(id)arg1;
- (void)onFillPhoneNext:(id)arg1 countryIsoCode:(id)arg2 phoneNum:(id)arg3;
- (void)doFillPhoneNext;
- (void)onPhoneVerifyBack:(id)arg1;
- (void)onPhoneVerifyVoice;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onVoiceVerifyBack:(id)arg1;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (BOOL)onHandleError:(id)arg1;
- (void)bindPhoneReturn:(id)arg1;
- (void)callCheckOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)isFromChange;
- (BOOL)isFromBind;
- (BOOL)isFromVerify;
- (void)updateLastLoginName;
- (void)onSettingModifyAliasSuccess;
- (BOOL)onSettingModifyAliasQuitNakeWxProtect;
- (id)getViewController;
- (void)onErrorHandleLogicDone;
- (BOOL)onErrorHandleLogicHandleGoNextWithParams:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (void)onErrorHandleLogicDoneWithPolicyListIsAgreed:(BOOL)arg1 policyAgreementTicket:(id)arg2;
- (void).cxx_destruct;
@end

