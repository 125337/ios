@interface WAOpenWxMaterialListController : MMUIHalfScreenViewController <YYWebViewDelegate>
{
    NSURLRequest * _request; // +0x70
    WAWxMaterialOpenInfo * _openInfo; // +0x78
    WKWebSearchView * _webView; // +0x80
}
- (id)initWithRequest:(id)arg1 openInfo:(id)arg2;
- (void)viewDidLoad;
- (id)contentView;
- (void)onClickCloseButton:(id)arg1;
- (BOOL)hidesStatusBar;
- (void)js2oc_launchWeApp:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)openWeApp;
- (void)js2oc_onWeAppExposure:(id)arg1;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)openInfo;
- (void)setOpenInfo:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (void).cxx_destruct;
@end
