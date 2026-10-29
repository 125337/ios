@interface FileDetailWebPreviewController : MMUIViewController <FileDetailCustomizedPreviewController, UIScrollViewDelegate, WKNavigationDelegate, WKScriptMessageHandler>
{
    BOOL _shouldAutoResizingSafeArea; // +0x70
    BOOL _contentLoaded; // +0x71
    BOOL _contentRevealed; // +0x72
    int _filePreviewType; // +0x74
    id <FileDetailWebPreviewControllerDelegate> _delegate; // +0x78
    id <UIScrollViewDelegate> _scrollBridge; // +0x80
    WKWebView * _webView; // +0x88
    UIView * _webBgView; // +0x90
    UIEdgeInsets _pageContentInset; // +0x98
}
- (void)loadFileURL:(id)arg1;
- (void)loadTXTString:(id)arg1;
- (id)htmlEscapedString:(id)arg1;
- (id)scrollView;
- (void)updatePageInsets:(UIEdgeInsets)arg1;
- (void)reload;
- (BOOL)shouldHandleSingleTapAt:(id)arg1;
- (void)takeSnapshot:(id /* block */)arg1;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setPageContentInset:(UIEdgeInsets)arg1;
- (void)setShouldAutoResizingSafeArea:(BOOL)arg1;
- (void)recalculatePageContentInset;
- (UIEdgeInsets)clampInsetForTxt:(UIEdgeInsets)arg1;
- (id)viewportFitScriptSourceWithFullWidth:(double)arg1 insets:(UIEdgeInsets)arg2;
- (long long)currentFitMode;
- (void)applyPageContentInset;
- (double)contentDisplayWidth;
- (void)requestJSRefit;
- (void)revealWebContentIfNeeded;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)updateScaleFactor;
- (void)_loadFileURL:(id)arg1;
- (void)loadWithBlock:(id /* block */)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollBridge;
- (void)setScrollBridge:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (UIEdgeInsets)pageContentInset;
- (BOOL)shouldAutoResizingSafeArea;
- (int)filePreviewType;
- (void)setFilePreviewType:(int)arg1;
- (id)webBgView;
- (void)setWebBgView:(id)arg1;
- (BOOL)contentLoaded;
- (void)setContentLoaded:(BOOL)arg1;
- (BOOL)contentRevealed;
- (void)setContentRevealed:(BOOL)arg1;
- (void).cxx_destruct;
@end
