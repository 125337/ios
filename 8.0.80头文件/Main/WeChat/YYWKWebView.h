@interface YYWKWebView : YYBaseWebView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler>
{
    NSMutableDictionary * m_containerDict; // +0x8
    BOOL _isSettingAllowsBackForwardNavigationGestures; // +0x10
    UIScreenEdgePanGestureRecognizer * _swipeBackGesture; // +0x18
}
+ (unsigned int)getViewIdFromView:(id)arg1;
+ (void)hookWKChildScrollView;
+ (void)hookWKChildScrollViewWithSEL:(SEL)arg1;
+ (id)hookTagForSelector:(SEL)arg1;
- (BOOL)insertChildView:(id)arg1 viewIdentity:(id)arg2;
- (id)getChildView:(unsigned int)arg1;
- (BOOL)removeChildView:(unsigned int)arg1;
- (BOOL)removeAllNativeView;
- (BOOL)checkNativeViewStatusAndReportIfLossed;
- (id)p_findScrollViewFromView:(id)arg1 byViewId:(unsigned int)arg2;
- (id)p_findScrollViewFromView:(id)arg1 byViewIdentity:(id)arg2;
- (id)findScrollViewByViewIdentity:(id)arg1;
- (id)containerForNativeView:(id)arg1;
- (void)dumpContextInfoWhenAttachScrollViewFail:(unsigned int)arg1;
- (void)onSameLayerChangedScrollView:(id)arg1;
- (void)setAllowsBackForwardNavigationGestures:(BOOL)arg1;
- (void)addGestureRecognizer:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)currentProcessPool;
- (BOOL)canShowAlertInCurrentWebViewController;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)showTipView:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(id /* block */)arg5;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)buildMenuWithBuilder:(id)arg1;
- (BOOL)isSettingAllowsBackForwardNavigationGestures;
- (void)setIsSettingAllowsBackForwardNavigationGestures:(BOOL)arg1;
- (id)swipeBackGesture;
- (void)setSwipeBackGesture:(id)arg1;
- (void).cxx_destruct;
@end
