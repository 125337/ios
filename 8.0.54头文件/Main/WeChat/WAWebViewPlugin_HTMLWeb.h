@interface WAWebViewPlugin_HTMLWeb : WAWebViewPlugin_embedView <IWAHTMLWebVCDelegate, IWAWebViewPlugin_HTMLWeb>
{
    NSMutableDictionary * _enableScrollDic; // +0x8
    UIViewController<IWAHTMLWebVCHelper> * _htmlWebVC; // +0x10
    NSString * _javascriptForDisappear; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)sendEvent:(id)arg1 parma:(id)arg2;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)insertHtmlVCIfNeed;
- (void)setJavascriptForDisappear:(id)arg1;
- (void)onUIApplicationWillResignActiveNotification;
- (void)onViewWillDisappear;
- (void)runJavascriptForDisappear;
- (void)webviewDidFinish:(id)arg1;
- (void)onTranslateFinish:(BOOL)arg1;
- (void)onTranslateRevertFinish:(BOOL)arg1;
- (void)genHtmlVCWithExtInfo:(id)arg1;
- (void)releaseHtmlVC;
- (BOOL)web_view_isExist;
- (id)web_view;
- (void)web_view_setHtmlId:(unsigned int)arg1;
- (void)web_view_setBackgroundColor:(id)arg1;
- (void)web_view_configViewFrame:(CGRect)arg1;
- (void)web_view_handleInsertHTMLDone;
- (id)web_view_getCurrentUrl;
- (void)web_view_goToUrl:(id)arg1;
- (BOOL)web_view_canGoBack;
- (void)web_view_goBack;
- (void)web_view_evaluateJavascript:(id)arg1 completion:(id /* block */)arg2;
- (void)web_view_captureLongSnapshotWithCompletion:(id /* block */)arg1;
- (id)web_backNavigationGesture;
- (void)translate;
- (void)translateRevert;
- (id)enableScrollDic;
- (id)htmlWebVC;
- (void)setHtmlWebVC:(id)arg1;
- (id)javascriptForDisappear;
- (void).cxx_destruct;
@end

