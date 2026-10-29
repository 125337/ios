@interface _MpPreloadEntry : NSObject <WKNavigationDelegate, MpWebViewEntryHandle>
{
    MpWKWebView * _webView; // +0x8
    long long _state; // +0x10
    long long _loadSource; // +0x18
    NSTimer * _timeoutTimer; // +0x20
    NSString * _cacheKey; // +0x28
    MpWebViewPreloadPool * _pool; // +0x30
    _MpPreloadConfig * _config; // +0x38
    MpSchemeHandlerProxy * _schemeProxy; // +0x40
    NSMutableDictionary * _jsChannelProxies; // +0x48
    long long _preloadHitInternal; // +0x50
    id /* block */ _onResourceReadyCallback; // +0x58
    id /* block */ _onResourceFailedCallback; // +0x60
}
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)_markFailed:(long long)arg1 msg:(id)arg2;
- (void)invalidate;
- (void)setOnResourceReady:(id /* block */)arg1;
- (void)setOnResourceFailed:(id /* block */)arg1;
- (void)retryEnsureResource;
- (long long)preloadHit;
- (id)webView;
- (void)setWebView:(id)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (long long)loadSource;
- (void)setLoadSource:(long long)arg1;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg1;
- (id)cacheKey;
- (void)setCacheKey:(id)arg1;
- (id)pool;
- (void)setPool:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)schemeProxy;
- (void)setSchemeProxy:(id)arg1;
- (id)jsChannelProxies;
- (void)setJsChannelProxies:(id)arg1;
- (long long)preloadHitInternal;
- (void)setPreloadHitInternal:(long long)arg1;
- (id /* block */)onResourceReadyCallback;
- (void)setOnResourceReadyCallback:(id /* block */)arg1;
- (id /* block */)onResourceFailedCallback;
- (void)setOnResourceFailedCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
