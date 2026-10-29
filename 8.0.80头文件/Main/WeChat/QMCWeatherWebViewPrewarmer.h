@interface QMCWeatherWebViewPrewarmer : NSObject <WKNavigationDelegate>
{
    BOOL _runtimeWarmInProgress; // +0x8
    BOOL _runtimeWarmed; // +0x9
    QMCWeatherPrewarmSession * _session; // +0x10
    WKWebView * _runtimeWarmWebView; // +0x18
    id /* block */ _runtimeWarmLogger; // +0x20
    double _runtimeWarmStart; // +0x28
}
+ (id)shared;
- (void)prewarmIfPossibleWithH5Url:(id)arg1 zipURL:(id)arg2 cacheDirectory:(id)arg3 logger:(id /* block */)arg4;
- (void)discardWithReason:(id)arg1;
- (void)prewarmRuntimeWithLogger:(id /* block */)arg1;
- (id)takePreparedPanelForH5Url:(id)arg1 zipURL:(id)arg2 cacheDirectory:(id)arg3 logger:(id /* block */)arg4;
- (void)_prewarmRuntimeWithLogger:(id /* block */)arg1;
- (void)_prewarmIfPossibleWithH5Url:(id)arg1 zipURL:(id)arg2 cacheDirectory:(id)arg3 logger:(id /* block */)arg4;
- (BOOL)_canPrewarmWeatherH5Url:(id)arg1 logger:(id /* block */)arg2 start:(double)arg3;
- (void)_handleLifecycleStage:(id)arg1 extra:(id)arg2 session:(id)arg3 logger:(id /* block */)arg4 start:(double)arg5;
- (void)_discardWithReason:(id)arg1 logger:(id /* block */)arg2 start:(double)arg3;
- (id)_extraStringFromDictionary:(id)arg1;
- (void)_finishRuntimePrewarmWithStage:(id)arg1 extra:(id)arg2 warmed:(BOOL)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (id)session;
- (void)setSession:(id)arg1;
- (id)runtimeWarmWebView;
- (void)setRuntimeWarmWebView:(id)arg1;
- (id /* block */)runtimeWarmLogger;
- (void)setRuntimeWarmLogger:(id /* block */)arg1;
- (double)runtimeWarmStart;
- (void)setRuntimeWarmStart:(double)arg1;
- (BOOL)runtimeWarmInProgress;
- (void)setRuntimeWarmInProgress:(BOOL)arg1;
- (BOOL)runtimeWarmed;
- (void)setRuntimeWarmed:(BOOL)arg1;
- (void).cxx_destruct;
@end
