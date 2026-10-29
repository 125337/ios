@interface QMCSubwayWebView : UIView <WKNavigationDelegate, WKScriptMessageHandler>
{
    BOOL _h5Ready; // +0x8
    id /* block */ _onStationClick; // +0x10
    WKWebView * _webView; // +0x18
    NSMutableArray * _pendingJsCommands; // +0x20
}
- (id)initWithH5Url:(id)arg1;
- (void)dealloc;
- (void)setDarkMode:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)_evaluateOnMain:(id)arg1;
- (id /* block */)onStationClick;
- (void)setOnStationClick:(id /* block */)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (BOOL)h5Ready;
- (void)setH5Ready:(BOOL)arg1;
- (id)pendingJsCommands;
- (void)setPendingJsCommands:(id)arg1;
- (void).cxx_destruct;
@end
