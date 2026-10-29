@interface QMCWeatherCardPanelView : UIView <WKNavigationDelegate, QMCWeatherBridgeDelegate, WKScriptMessageHandler>
{
    BOOL _mapGesturesDisabled; // +0x8
    BOOL _webViewDidFinishLoad; // +0x9
    WKWebView * _webView; // +0x10
    UIActivityIndicatorView * _loadingSpinner; // +0x18
    NSString * _h5Url; // +0x20
    NSString * _zipUrl; // +0x28
    NSString * _cacheDirectory; // +0x30
    NSDictionary * _jumpParams; // +0x38
    id /* block */ _onMainJumpTap; // +0x40
    id /* block */ _panelLogger; // +0x48
    id /* block */ _lifecycleObserver; // +0x50
    double _perfStartTime; // +0x58
    NSString * _perfLoadMode; // +0x60
    QMCWeatherBridge * _bridge; // +0x68
}
+ (id)sharedWebViewProcessPool;
- (id)initWithH5Url:(id)arg1 zipURL:(id)arg2 jumpParams:(id)arg3 onMainJumpTap:(id /* block */)arg4 panelLogger:(id /* block */)arg5;
- (id)initWithH5Url:(id)arg1 zipURL:(id)arg2 jumpParams:(id)arg3 onMainJumpTap:(id /* block */)arg4 panelLogger:(id /* block */)arg5 lifecycleObserver:(id /* block */)arg6;
- (id)initWithH5Url:(id)arg1 zipURL:(id)arg2 cacheDirectory:(id)arg3 jumpParams:(id)arg4 onMainJumpTap:(id /* block */)arg5 panelLogger:(id /* block */)arg6;
- (id)initWithH5Url:(id)arg1 zipURL:(id)arg2 cacheDirectory:(id)arg3 jumpParams:(id)arg4 onMainJumpTap:(id /* block */)arg5 panelLogger:(id /* block */)arg6 lifecycleObserver:(id /* block */)arg7;
- (void)configureReuseWithJumpParams:(id)arg1 onMainJumpTap:(id /* block */)arg2 panelLogger:(id /* block */)arg3;
- (void)_log:(id)arg1;
- (void)_perfLogStage:(id)arg1 extra:(id)arg2;
- (void)_notifyLifecycleStage:(id)arg1 extra:(id)arg2;
- (void)_setupUI;
- (void)_loadWebContent;
- (id)_sandboxOfflineURLForOnlineURL:(id)arg1;
- (void)applyMapGesturesDisabled:(BOOL)arg1;
- (void)_sendMapGesturesDisabledToH5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)setDarkMode:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)weatherBridge:(id)arg1 didReceiveClick:(id)arg2 params:(id)arg3 responseCallback:(id /* block */)arg4;
- (void)weatherBridgeDidReceiveSlide:(id)arg1 responseCallback:(id /* block */)arg2;
- (void)weatherBridge:(id)arg1 didReceiveMapInteract:(id)arg2 params:(id)arg3 responseCallback:(id /* block */)arg4;
- (void)weatherBridgeDidReceiveH5Ready:(id)arg1;
- (void)dealloc;
- (void)_injectDebugBridgeIntoConfig:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)currentJumpParams;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)loadingSpinner;
- (void)setLoadingSpinner:(id)arg1;
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (id)zipUrl;
- (void)setZipUrl:(id)arg1;
- (id)cacheDirectory;
- (void)setCacheDirectory:(id)arg1;
- (id)jumpParams;
- (void)setJumpParams:(id)arg1;
- (id /* block */)onMainJumpTap;
- (void)setOnMainJumpTap:(id /* block */)arg1;
- (id /* block */)panelLogger;
- (void)setPanelLogger:(id /* block */)arg1;
- (id /* block */)lifecycleObserver;
- (void)setLifecycleObserver:(id /* block */)arg1;
- (BOOL)mapGesturesDisabled;
- (void)setMapGesturesDisabled:(BOOL)arg1;
- (BOOL)webViewDidFinishLoad;
- (void)setWebViewDidFinishLoad:(BOOL)arg1;
- (double)perfStartTime;
- (void)setPerfStartTime:(double)arg1;
- (id)perfLoadMode;
- (void)setPerfLoadMode:(id)arg1;
- (id)bridge;
- (void)setBridge:(id)arg1;
- (void).cxx_destruct;
@end
