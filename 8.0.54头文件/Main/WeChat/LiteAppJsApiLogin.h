@interface LiteAppJsApiLogin : LiteAppJsApi <WebViewA8KeyLogicDelegate>
{
    BOOL _passAll; // +0x20
    WebViewA8KeyLogicImpl * _a8keyLogic; // +0x28
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)getA8Key:(id)arg1 usePreAuth:(BOOL)arg2;
- (void)onGetA8Key:(BOOL)arg1 ReqUrl:(id)arg2 Reason:(int)arg3;
- (void)onUpdatedPermisson;
- (void)onJumpToSafariWithUrl:(id)arg1;
- (void)onJumpToViewController:(id)arg1;
- (void)onJumpToEmoticonDetailViewController:(id)arg1;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)saveJSAPIPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSAPIPermissionsInOfflineCache:(id)arg1 url:(id)arg2;
- (void)onGetA8KeyWithRequestUrl:(id)arg1 fullUrl:(id)arg2 header:(id)arg3;
- (BOOL)isPayLiteAppId:(id)arg1;
- (id)addPayFragmentToUrl:(id)arg1;
- (BOOL)urlHasPayFragment:(id)arg1;
- (id)a8keyLogic;
- (void)setA8keyLogic:(id)arg1;
- (BOOL)passAll;
- (void)setPassAll:(BOOL)arg1;
- (void).cxx_destruct;
@end

