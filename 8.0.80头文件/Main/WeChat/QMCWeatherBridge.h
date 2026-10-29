@interface QMCWeatherBridge : QMCBaseJavaScriptBridge <WKScriptMessageHandler>
{
    BOOL _h5Ready; // +0x8
    id <QMCWeatherBridgeDelegate> _delegate; // +0x10
    WKWebView * _webView; // +0x18
    NSString * _currentUrl; // +0x20
    NSMutableArray * _pendingJsCommands; // +0x28
}
+ (id)handlerName;
+ (id)hostMatch;
+ (id)hostSuffix;
+ (void)prefetchWeatherDataForH5Url:(id)arg1 logger:(id /* block */)arg2;
+ (id)_prefetchDescriptorFromH5Url:(id)arg1;
+ (id)_prefetchDescriptorFromRequestParams:(id)arg1;
+ (void)_startWeatherPrefetchRequestForEntry:(id)arg1 logger:(id /* block */)arg2;
+ (void)_finishWeatherPrefetchEntry:(id)arg1 response:(id)arg2 errorReason:(id)arg3 statusCode:(long long)arg4 logger:(id /* block */)arg5;
+ (void)_resolveWeatherPrefetchDataForParams:(id)arg1 completion:(id /* block */)arg2;
+ (id)_weatherPrefetchHitResponseForEntry:(id)arg1;
+ (id)_weatherPrefetchMissResponseWithReason:(id)arg1 key:(id)arg2;
- (id)initWithWebView:(id)arg1;
- (void)setCurrentUrl:(id)arg1;
- (void)onPageReady;
- (void)postMessageToH5:(id)arg1 payload:(id)arg2;
- (void)release_;
- (void)dispatchMessage:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)_injectIntoWebView:(id)arg1;
- (id)_injectionScript;
- (BOOL)_isCurrentUrlAllowed;
- (void)_routeMethod:(id)arg1 params:(id)arg2 responseCallback:(id /* block */)arg3;
- (id)_coerceDict:(id)arg1;
- (id)_parseJSONParam:(id)arg1;
- (id)_jsonString:(id)arg1;
- (void)_evaluateOnMain:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)h5Ready;
- (void)setH5Ready:(BOOL)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)currentUrl;
- (id)pendingJsCommands;
- (void)setPendingJsCommands:(id)arg1;
- (void).cxx_destruct;
@end
