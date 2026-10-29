@interface WCAccountNoPwdAuthLogic : WCAccountBaseControlLogic <WCAccountManualAuthControlLogicDelegate>
{
    WCAccountManualAuthControlLogic * m_manualAuthLogic; // +0x30
    id <WCAccountNoPwdAuthLogicDelegate> m_delegate; // +0x38
    WCAccountLoginUsersViewController * _loginUsersVC; // +0x40
}
- (void)startLogic;
- (BOOL)onLoginUsersCancel;
- (void)onLoginUsersLoginUserEmpty;
- (void)onLoginUsersNewAccount;
- (void)onRegisterAffiliatedAccount;
- (BOOL)onLoginUsersLoginUserName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)reportOpCode:(unsigned int)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (id)loginUsersVC;
- (void)setLoginUsersVC:(id)arg1;
- (void).cxx_destruct;
@end
