@interface LocalJSLogicBase : MMObject <LocalJSEventHandlerContextDelegate, WSWebCommunicator>
{
    WKWebView<YYWebViewInterface> * _webView; // +0x8
    NSMutableArray * _authApiList; // +0x10
    BOOL _bridgeCompleted; // +0x18
    BOOL _webviewDidLoad; // +0x19
    id <WSWebViewPluginableProtocol> _webViewOwner; // +0x20
    NSMutableDictionary * _observedAPIBlocks; // +0x28
    double _delayShowTimeForWebviewDidFinishLoad; // +0x30
    NSMutableSet * _jsEvents; // +0x38
    NSMutableArray * _cachedJSNotiArr; // +0x40
}
- (void)observeApi:(id)arg1 handler:(id /* block */)arg2;
- (void)dispatchBlockHandlerFor:(id)arg1 params:(id)arg2 callBackID:(id)arg3;
- (id)initWithWebView:(id)arg1;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (void)onSysBridgeCompleted;
- (void)injectWeixinJSBridge;
- (void)sendMessageToJSBridge:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)onJsEvaluateError:(id)arg1;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 delayIfNotBridged:(BOOL)arg3;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 delayIfNotBridged:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)__sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleJSApiDispatchMessage:(id)arg1;
- (void)dispatchEventHandler:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)dispatchEventHandler:(id)arg1 withParams:(id)arg2;
- (void)sendJSCBEventToJSBridge:(id)arg1 withCallBackID:(id)arg2;
- (void)sendJSCBEventToJSBridge:(id)arg1 withCallBackID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)addAuthApiList:(id)arg1;
- (void)reSetWebView:(id)arg1;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)handleJSApiFuncOfGetNetworkType:(id)arg1 withCallBackID:(id)arg2;
- (BOOL)isOnDawangEnv;
- (id)getNetworkInfo;
- (void)ackWithCallBackID:(id)arg1 withParams:(id)arg2;
- (void)ackWithCallBackID:(id)arg1 errorMsg:(id)arg2;
- (id)makeEmptyJSONResultParam:(BOOL)arg1;
- (id)description;
- (BOOL)canUseClassHandleJSAPI:(id)arg1;
- (void)removeAllJSEvent;
- (id)webview;
- (void)eventEndWithHandler:(id)arg1 result:(id)arg2;
- (void)sendEvent:(id)arg1 handler:(id)arg2 result:(id)arg3;
- (unsigned long long)getLocalJSBusinessType;
- (id)getWebViewOwner;
- (id)webView;
- (void)sendEvent:(id)arg1 withParams:(id)arg2 sendAfterReady:(BOOL)arg3;
- (id)webViewOwner;
- (void)setWebViewOwner:(id)arg1;
- (id)observedAPIBlocks;
- (void)setObservedAPIBlocks:(id)arg1;
- (BOOL)bridgeCompleted;
- (void)setBridgeCompleted:(BOOL)arg1;
- (BOOL)webviewDidLoad;
- (void)setWebviewDidLoad:(BOOL)arg1;
- (double)delayShowTimeForWebviewDidFinishLoad;
- (void)setDelayShowTimeForWebviewDidFinishLoad:(double)arg1;
- (id)jsEvents;
- (void)setJsEvents:(id)arg1;
- (id)cachedJSNotiArr;
- (void)setCachedJSNotiArr:(id)arg1;
- (void).cxx_destruct;
@end

