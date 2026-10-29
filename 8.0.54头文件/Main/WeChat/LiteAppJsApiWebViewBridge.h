@interface LiteAppJsApiWebViewBridge : LiteAppPermanentJsApi <JSEventHandler, WebviewJSEventHandlerBaseDelegate>
{
    NSString * _errorMsg; // +0x20
    WebviewJSEventHandlerFacade * _jsEventHandler; // +0x28
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)GetCurrentWebviewViewController;
- (id)webviewController;
- (void)callbackWithId:(id)arg1 callback:(id)arg2 params:(id)arg3;
- (id)jsEventHandler;
- (void)setJsEventHandler:(id)arg1;
- (void).cxx_destruct;
@end

