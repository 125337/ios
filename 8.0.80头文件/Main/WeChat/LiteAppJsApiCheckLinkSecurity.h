@interface LiteAppJsApiCheckLinkSecurity : LiteAppJsApi
{
    WebViewA8KeyLogicImpl * _a8keyLogic; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onGetA8KeyResult:(BOOL)arg1 reqUrl:(id)arg2 resp:(id)arg3;
- (id)a8keyLogic;
- (void)setA8keyLogic:(id)arg1;
- (void).cxx_destruct;
@end
