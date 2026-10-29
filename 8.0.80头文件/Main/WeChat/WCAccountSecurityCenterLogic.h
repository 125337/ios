@interface WCAccountSecurityCenterLogic : WCAccountBaseControlLogic <MMWebViewDelegate>
{
    id <WCAccountSecurityCenterDelegate> _m_delegate; // +0x30
    NSString * _rid; // +0x38
}
- (void)startLogic;
- (id)getLoginViewNameDeepLink:(id)arg1 Url:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (BOOL)canAccessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)rid;
- (void)setRid:(id)arg1;
- (void).cxx_destruct;
@end
