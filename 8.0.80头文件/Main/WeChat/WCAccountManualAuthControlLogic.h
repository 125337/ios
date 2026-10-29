@interface WCAccountManualAuthControlLogic : WCAccountBaseControlLogic <MMWebViewDelegate, WCAccountGraphicVerifyControlLogicDelegate, WCAccountPasswordInputViewControllerDelegate, PBMessageObserverDelegate>
{
    WCAccountGraphicVerifyControlLogic * m_graphicVerifyLogic; // +0x30
    id <WCAccountManualAuthControlLogicDelegate> m_delegate; // +0x38
    unsigned int m_ecdh_error_count; // +0x40
    unsigned int m_cert_error_count; // +0x44
    unsigned int m_idc_redirect_count; // +0x48
    unsigned int m_mmtls_set_count; // +0x4c
    BOOL m_bFromAutoAuth; // +0x50
    BOOL m_bSessionKeyNeedECDHDecrypt; // +0x51
    BOOL m_bStopCloseAcct; // +0x52
    unsigned long long m_ui64BeginTime; // +0x58
    UnifyAuthResponse * _cacheResponse; // +0x60
    BOOL m_bDontFillWTBuf; // +0x68
    unsigned int m_uiCGIScene; // +0x6c
    WCAccountErrorHandleLogic * _passwordInputErrorLogic; // +0x70
}
- (id)initWithData:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (BOOL)startManualAuth:(id)arg1;
- (id)genManualAuthRequest:(BOOL)arg1;
- (id)genManualAuthRequest;
- (void)startLogic;
- (void)startLogicFromAutoAuth;
- (void)onGraphicVerifyControlLogicCancel;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(BOOL)arg1;
- (void)onGraphicVerifyControlLogicReturn:(id)arg1;
- (void)onStopLogic;
- (void)onStopCloseAcct;
- (void)handleAuthResponse:(id)arg1;
- (void)handleAuthResponseOK:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onErrorHandleLogicDone;
- (void)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (BOOL)onErrorHandleLogicHandleGoNextWithParams:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)onPasswordInputViewControllerBack:(id)arg1;
- (void)onPasswordInputViewControllerLoginWithPassword:(id)arg1;
- (unsigned int)m_uiCGIScene;
- (void)setM_uiCGIScene:(unsigned int)arg1;
- (BOOL)m_bDontFillWTBuf;
- (void)setM_bDontFillWTBuf:(BOOL)arg1;
- (id)passwordInputErrorLogic;
- (void)setPasswordInputErrorLogic:(id)arg1;
- (void).cxx_destruct;
@end
