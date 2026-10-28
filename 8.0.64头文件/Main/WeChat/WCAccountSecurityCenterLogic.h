@interface WCAccountSecurityCenterLogic : WCAccountBaseControlLogic <MMWebViewDelegate>
{
    NSString * _rid; // +0x30
}
- (void)startLogic;
- (id)getLoginViewNameDeepLink:(id)arg1 Url:(id)arg2;
- (void)webViewReturn:(id)arg1;
- (BOOL)canAccessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (id)rid;
- (void)setRid:(id)arg1;
- (void).cxx_destruct;
@end
