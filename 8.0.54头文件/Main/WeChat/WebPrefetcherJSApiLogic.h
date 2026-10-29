@interface WebPrefetcherJSApiLogic : NSObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate>
{
    WKWebView<YYWebViewInterface> * _webView; // +0x8
    id <WebPrefetcherJSApiLogicDelegate> _delegate; // +0x10
    WebviewJSEventHandlerFacade * _jsEventHandler; // +0x18
    NSMutableDictionary * _functionMap; // +0x20
    NSMutableDictionary * _jsApiDefMap; // +0x28
}
- (id)init;
- (void)registerPrefetcherJsApi;
- (void)injectPrefecherJSBridge;
- (void)handleJSApiDispatchMessage:(id)arg1;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)doInvokeJsApi:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)callbackErrorWithId:(id)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
- (void)callbackWithId:(id)arg1 result:(id)arg2;
- (void)sendMessageToJSBridge:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)getWebViewController;
- (id)webviewController;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (id)GetCurrentWebviewViewController;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jsEventHandler;
- (void)setJsEventHandler:(id)arg1;
- (id)functionMap;
- (void)setFunctionMap:(id)arg1;
- (id)jsApiDefMap;
- (void)setJsApiDefMap:(id)arg1;
- (void).cxx_destruct;
@end

