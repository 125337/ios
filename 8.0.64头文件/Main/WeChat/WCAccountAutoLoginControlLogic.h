@interface WCAccountAutoLoginControlLogic : WCBaseControlLogic <MMWebViewDelegate, WCAccountGraphicVerifyControlLogicDelegate, MMTipsViewControllerDelegate, PBMessageObserverDelegate, WCAccountManualAuthControlLogicDelegate, MMUIViewControllerDelegate>
{
    WCAccountControlData * m_data; // +0x20
    MMUIWindow * m_window; // +0x28
    WCAccountGraphicVerifyControlLogic * m_graphicVerifyLogic; // +0x30
    WCAccountManualAuthControlLogic * m_manualAuthLogic; // +0x38
    id <WCAccountAutoLoginControlLogicDelegate> m_delegate; // +0x40
    unsigned int m_idc_redirect_count; // +0x48
    unsigned int m_ecdh_error_count; // +0x4c
    unsigned int m_cert_error_count; // +0x50
    unsigned int m_mmtls_set_count; // +0x54
    BOOL m_bSessionKeyNeedECDHDecrypt; // +0x58
    BOOL m_bStopCloseAcct; // +0x59
    CountDownTipViewController * m_tipView; // +0x60
    unsigned long long m_ui64BeginTime; // +0x68
    BOOL m_bHasKickout; // +0x70
    id /* block */ m_quitCompleteBlock; // +0x78
    BOOL _isDisasterAuth; // +0x80
}
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)stopLogic:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)startAutoAuth:(id)arg1;
- (id)genAutoAuthRequest:(BOOL)arg1;
- (id)genAutoAuthRequest;
- (id)getViewController;
- (void)startLogic;
- (void)closeMainFrame;
- (void)endCloseMainFrame;
- (void)stopLogicWithKickOut;
- (void)kickOut;
- (void)openFirstView;
- (void)closeFirstView;
- (void)onGraphicVerifyControlLogicCancel;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(BOOL)arg1;
- (void)onGraphicVerifyControlLogicReturn:(id)arg1;
- (void)onErrorAction:(id)arg1;
- (void)onAlertErrorAction:(id)arg1;
- (void)stopLogicLoginRetry;
- (void)webViewReturn:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showTipView;
- (void)showTipWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 countDown:(unsigned int)arg4 errorInfo:(id)arg5;
- (void)onStopCloseAcct;
- (void)handleAuthResponse:(id)arg1;
- (void)HandleMessageReturn:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (BOOL)isDisasterAuth;
- (void)setIsDisasterAuth:(BOOL)arg1;
- (void).cxx_destruct;
@end
