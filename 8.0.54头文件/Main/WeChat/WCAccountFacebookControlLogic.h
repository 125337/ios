@interface WCAccountFacebookControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, WCAccountManualAuthControlLogicDelegate>
{
    WCAccountManualAuthControlLogic * m_manualAuthLogic; // +0x30
}
- (void)dealloc;
- (void)pause;
- (void)startLogic;
- (void)stopLogic;
- (void)loginWithUserName:(id)arg1 token:(id)arg2;
- (void)onFBDidNotLogin:(BOOL)arg1;
- (void)onLoginFacebookBegan:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void).cxx_destruct;
@end

