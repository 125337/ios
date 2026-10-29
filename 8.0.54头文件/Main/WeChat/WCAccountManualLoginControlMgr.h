@interface WCAccountManualLoginControlMgr : WCBaseControlMgr <MMKernelExt>
{
    UIViewController * m_firstViewController; // +0x10
    UIWindow * m_window; // +0x18
}
- (id)init;
- (void)dealloc;
- (id)getWindow;
- (void)setMainWindowRootView:(id)arg1;
- (void)openFirstView:(id)arg1;
- (void)closeFirstViewWithFadeOutAnimation;
- (void)closeFirstView:(BOOL)arg1;
- (void)switchLogin;
- (void)reportClickAction:(unsigned int)arg1;
- (unsigned int)startLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startLastUserLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startMainLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startOneClickLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startQRCodeLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPhoneRegLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startThirdAppRegisterLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startFacebookLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startAppleLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startPasskeyLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startSecurityCenterLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startNewPhoneLoginLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startKidsWatchLogic:(id)arg1 Data:(id)arg2;
- (unsigned int)startRegAffiliatedAcct:(id)arg1 Data:(id)arg2;
- (void)reportADID;
- (void)reportPhoneSwitchToOthersOrReverse:(BOOL)arg1;
- (void)reportPwdSwitchToVerifyOrReverse:(BOOL)arg1;
- (void)reportLogoutDefaultPhoneOrNot:(BOOL)arg1;
- (void)reportLogoutSwitchToOtherMethodToLogin;
- (void)reportLogoutSwitchToOtherAccount;
- (void).cxx_destruct;
@end

