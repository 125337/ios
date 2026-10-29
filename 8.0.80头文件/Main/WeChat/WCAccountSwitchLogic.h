@interface WCAccountSwitchLogic : WCAccountBaseControlLogic <WCAccountLogoutLogicDelegate, WCAccountNoPwdAuthLogicDelegate>
{
    WCAccountLogoutLogic * m_logoutLogic; // +0x30
    id <WCAccountSwitchLogicDelegate> _delegate; // +0x38
}
- (void)startLogic;
- (void)logoutCurrentAccount;
- (void)onNoPwdAuthControlLogicDidCancel;
- (void)onAccountLogoutLogicCancel;
- (void)onAccountLogoutLogicCheckOK;
- (void)onAccountLogoutLogicDidQuit;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
