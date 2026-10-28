@interface WAFileViewController : MMUIViewController <UIScrollViewDelegate, WKNavigationDelegate, UIGestureRecognizerDelegate, WCActionSheetDelegate>
{
    UITapGestureRecognizer * _singleTapRec; // +0x70
    BOOL _bIsNaviBarHide; // +0x78
    BOOL m_bIsEnableJs; // +0x79
    BOOL m_bIsShowNavBtn; // +0x7a
    WKWebView * _webView; // +0x80
    NSString * _filePath; // +0x88
    id <IWAFileViewService> _fileViewServiceProxy; // +0x90
}
- (void)viewDidLoad;
- (void)onOperate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setNaviBarHide:(BOOL)arg1 animation:(BOOL)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)forwardMessage;
- (void)addToFavorites;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onSingleTap:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (id)fileViewServiceProxy;
- (BOOL)m_bIsEnableJs;
- (void)setM_bIsEnableJs:(BOOL)arg1;
- (BOOL)m_bIsShowNavBtn;
- (void)setM_bIsShowNavBtn:(BOOL)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void)setFileViewServiceProxy:(id)arg1;
- (void).cxx_destruct;
@end
