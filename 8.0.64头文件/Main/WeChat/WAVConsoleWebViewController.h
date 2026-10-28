@interface WAVConsoleWebViewController : MMUIViewController <WAVConsoleWebLogicControllerDelegate, UIScrollViewDelegate, IWAVConsoleWebVCHelper>
{
    WAVConsoleWebLogicController * _logicController; // +0x70
    NSDictionary * _dictExtInfo; // +0x78
    YYBaseWebView * _logicWebView; // +0x80
    CGRect _viewRect; // +0x88
}
- (id)initWithURL:(id)arg1 extInfo:(id)arg2 plugin:(id)arg3;
- (id)fetchPublicResLogic;
- (void)setWebviewId:(unsigned int)arg1;
- (unsigned int)webviewId;
- (void)setHtmlId:(unsigned int)arg1;
- (unsigned int)htmlId;
- (void)setPlugin:(id)arg1;
- (id)plugin;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)useCustomNavibar;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (void)webViewControllerDidRecieveResponse:(id)arg1 webview:(id)arg2 isMainFrame:(BOOL)arg3;
- (void)webViewControllerDidFinishLoad:(id)arg1 dic:(id)arg2;
- (void)handleWebViewVCDismiss;
- (void)configViewFrame:(CGRect)arg1;
- (void)updateHTMLFrame;
- (id)webView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clearScrollBackgroundColor;
- (id)webViewControllerBackgroundColor;
- (id)logicController;
- (void)setLogicController:(id)arg1;
- (id)dictExtInfo;
- (void)setDictExtInfo:(id)arg1;
- (id)logicWebView;
- (void)setLogicWebView:(id)arg1;
- (CGRect)viewRect;
- (void)setViewRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
