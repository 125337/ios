@interface PreEnterShowGlobalAlertStep : PreEnterBaseStep <WCAccountBindPhoneControlLogicDelegate, PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate, NewSettingModifyEmailViewControllerDelegate, IUiUtilExt>
{
    PasswordLogic * m_changePasswdLogic; // +0x18
    WCAccountBindPhoneControlLogic * m_changePhoneLogic; // +0x20
    NSString * m_title; // +0x28
    NSString * m_msg; // +0x30
    NSString * m_nsID; // +0x38
    NSMutableArray * m_arrBtns; // +0x40
    NSNumber * m_autoSelectBtnIdxNum; // +0x48
}
- (void)parseGlobalAlert:(id)arg1;
- (void)showGlobalAlert;
- (id /* block */)handlerForBtnDic:(id)arg1;
- (void)globalAlertReport:(id)arg1 Btn:(id)arg2;
- (void)showWebView:(id)arg1;
- (void)showChangePhone;
- (void)showChangePhoneForSetWxid;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)showScan;
- (void)showModifyEmail;
- (void)cancelEditEmail;
- (void)doneEditEmail;
- (void)startChangePassward;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)unknownFail:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)passwordLogicCancel:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)passwordLogicPause:(id)arg1;
- (void)showSetPasswordView:(id)arg1;
- (void)onTabBarRootViewControllerDidAppear;
- (void).cxx_destruct;
@end
