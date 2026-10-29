@interface WCAccountLogoutLogic : WCAccountBaseControlLogic <WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, PBMessageObserverDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    PasswordLogic * m_checkPasswdLogic; // +0x30
    WCAccountBindPhoneControlLogic * m_bindPhoneLogic; // +0x38
    unsigned long long m_status; // +0x40
    id <WCAccountLogoutLogicDelegate> _delegate; // +0x48
}
- (void)reportOpCode:(unsigned int)arg1;
- (void)dealloc;
- (void)cancelLogout;
- (void)startQuit:(id)arg1;
- (void)startSwitchToLogin;
- (void)startCheckSwitch;
- (void)startLogout;
- (BOOL)isForSwitch;
- (BOOL)isForCheckSwitch;
- (void)startLogic:(unsigned long long)arg1;
- (void)showNakedAcctProtectAlert;
- (void)doNakedAcctProtect;
- (void)quitInternal;
- (void)preFinalQuit;
- (void)onLogoutCheckOK;
- (void)finalQuit;
- (void)unknownFail:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)checkNeedSetPasswd;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

