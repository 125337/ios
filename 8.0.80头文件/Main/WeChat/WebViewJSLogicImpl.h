@interface WebViewJSLogicImpl : MMObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate>
{
    NSString * _curRandomUUID; // +0x8
    NSString * _curContextUUID; // +0x10
    BOOL _isUseMd5ForJSAPI; // +0x18
    BOOL _bInjectJSFailed; // +0x19
    id <WebViewJSLogicDelegate> _delegate; // +0x20
    WKWebView<YYWebViewInterface> * _webView; // +0x28
    WebviewJSEventHandlerFacade * _jsEventHandlerFacade; // +0x30
    NSMutableDictionary * _jsCallbackHooks; // +0x38
    NSMutableDictionary * _jsUrlHooks; // +0x40
    NSMutableArray * _jsEvents; // +0x48
    NSMutableDictionary * _dictPageRamdomSigns; // +0x50
    NSMutableDictionary * _dictPageSha2Host; // +0x58
}
+ (void)discardJSEventForInvalidContext:(id)arg1 inJSLogic:(id)arg2;
+ (void)completeJSEvent:(id)arg1 withResult:(id)arg2 inJSLogic:(id)arg3;
- (id)init;
- (void)dealloc;
- (id)jsEventWithFunction:(id)arg1 params:(id)arg2 callBackID:(id)arg3 eventCompleteBlock:(id /* block */)arg4;
- (id)jsEventWithFunction:(id)arg1 params:(id)arg2 callBackID:(id)arg3 eventCompleteBlock:(id /* block */)arg4 eventInvokeContext:(id)arg5;
- (void)functionOuterCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3 eventCompleteBlock:(id /* block */)arg4 eventInvokeContext:(id)arg5;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)__excutefunctionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3 apiPermission:(unsigned char)arg4;
- (void)__excutefunctionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3 apiPermission:(unsigned char)arg4 eventCompleteBlock:(id /* block */)arg5 eventInvokeContext:(id)arg6;
- (void)handleJSApiDispatchMessage:(id)arg1;
- (void)handleMonitorMessage:(id)arg1;
- (void)cleanJSAPIDelegate;
- (void)recoverJSAPIEventDelegateWithBackup;
- (void)changeJSAPIContextRandomIDWithCurrentURL:(id)arg1;
- (id)currentContextRandomID;
- (id)extraDataForNextJSEventCalled:(id)arg1;
- (void)webviewWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)funcDefByName:(id)arg1;
- (void)setJSAPIFunctionMap:(id)arg1;
- (void)wxShareFunCall:(id)arg1 params:(id)arg2 withCallbackID:(id)arg3;
- (id)wxShareCSK;
- (BOOL)isJsEventInvokeSourcBridgeeCall:(unsigned int)arg1;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (void)jsHandlerHandle:(id)arg1;
- (id)GetCurrentWebviewViewController;
- (id)webviewController;
- (id)isExistJSApis:(id)arg1;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (void)tryInjectClassicWeixinJSBridge:(id)arg1;
- (void)resetSysInitMarkIfNeeded;
- (void)sysInitDocument:(id)arg1;
- (void)tryInjectWeixinOptimizatedJSBridge:(id)arg1;
- (void)injectWeixinOptimizatedJSBridge;
- (void)sendAuthedEventToJSBridge:(id)arg1;
- (void)sendReadyEventToJSBridgeWithParams:(id)arg1;
- (id)getWeixinJSBridgeAndPluginStr;
- (id)getWeixinEnvStr;
- (void)markPageWebCached;
- (void)sendGetA8KeyUrlOrCookieEvent:(id)arg1 HasCookie:(BOOL)arg2;
- (void)injectWeixinJSBridge;
- (void)sendMessageToJSBridge:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)sha1:(id)arg1;
- (void)injectWeixinEnvInfo;
- (void)reportIDKeyForInjectJS;
- (void)reportIDKeyForInjectOptimizatedJS;
- (void)reportIDKeyForJsApiCall:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (BOOL)bInjectJSFailed;
- (void)setBInjectJSFailed:(BOOL)arg1;
- (id)jsEventHandlerFacade;
- (void)setJsEventHandlerFacade:(id)arg1;
- (id)jsCallbackHooks;
- (void)setJsCallbackHooks:(id)arg1;
- (id)jsUrlHooks;
- (void)setJsUrlHooks:(id)arg1;
- (id)jsEvents;
- (void)setJsEvents:(id)arg1;
- (id)dictPageRamdomSigns;
- (void)setDictPageRamdomSigns:(id)arg1;
- (id)dictPageSha2Host;
- (void)setDictPageSha2Host:(id)arg1;
- (void).cxx_destruct;
@end
