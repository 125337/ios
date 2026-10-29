@interface LiteAppJsApiStartWebView : LiteAppJsApi <MMWebViewDelegate>
{
    id /* block */ _callbackBlock; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)invokeJsApiImpl:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)delayDoAction;
- (void)webViewReturn:(id)arg1;
- (void)ShowWebViewControllerWithType:(unsigned long long)arg1 andWebViewVC:(id)arg2;
- (void).cxx_destruct;
@end
