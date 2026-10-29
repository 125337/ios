@interface WAHTMLWebViewController : WXBaseWebViewController <UIGestureRecognizerDelegate, WAPageFlowReportExtention, WebTransPageLogicDelegate, IMMLanguageMgrExt, IWAHTMLWebVCHelper>
{
    NSString * m_oLoadingUrl; // +0xb0
    long long m_nHttpRspCode; // +0xb8
    BOOL m_isNeedConfigDark; // +0xc0
    WAWebViewController * _superVC; // +0xc8
    WAWebViewPlugin_HTMLWeb * _plugin; // +0xd0
    unsigned int _htmlId; // +0xd8
    NSString * _sourceAppId; // +0xe0
    BOOL _didReceiveTerm; // +0xe8
    UILabel * m_addressLabel; // +0xf0
    UIImageView * _snapshotImgView; // +0xf8
    UIColor * _m_backgroundColor; // +0x100
    MMWebProgressBar * _progressBar; // +0x108
    id <IWAHTMLWebVCDelegate> _htmlWebVCDelegate; // +0x110
    NSCache * _haveTransedTextCache; // +0x118
    WebTransWebpageLogic * _transWebpageLogic; // +0x120
    NSString * _curRandomUUID; // +0x128
    long long _transStatus; // +0x130
    CGRect _viewRect; // +0x138
}
+ (BOOL)isKeyJsapi:(id)arg1;
- (void)captureFullScreenshotUsingPrinterMode:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)takeSnapshotInRenderModeWithCompletion:(id /* block */)arg1;
- (void)__takeSnapshotInRenderModeWithCompletion:(id /* block */)arg1;
- (void)addSnapshotByTimeout:(double)arg1;
- (void)addSnapshotImage:(id)arg1 timeout:(double)arg2;
- (void)removeSnapshotImageOnWindow;
- (BOOL)extendSnapshotOnWindowByTimeout:(double)arg1;
- (BOOL)checkMemoryAvailableForContentSize:(CGSize)arg1 scale:(double *)arg2 freeMem:(unsigned long long *)arg3 isCompress:(BOOL *)arg4 predictImgMemSize:(unsigned long long *)arg5;
- (unsigned long long)getAvailableMemorySize;
- (double)snapshotContentHeight;
- (void)onTargetActionWebJump:(id)arg1 navigationType:(long long)arg2;
- (void)onTargetToNativaPage:(id)arg1;
- (void)onBackOnPage:(id)arg1 toPage:(id)arg2;
- (void)onAppExit:(unsigned int)arg1 onPage:(id)arg2;
- (id)getDefaultHtmlActionItem;
- (void)reportJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (id)getDeafultReportHTMLJSAPIItem;
- (void)buildMenuWithBuilder:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)startWebSearch:(id)arg1;
- (BOOL)hitBlackListHostForSearch;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (void)dealloc;
- (id)webviewForInitialization;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)useCustomNavibar;
- (BOOL)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (void)webViewControllerDidRecieveSvrRedirect:(id)arg1;
- (void)webViewControllerDidReceiveResponse:(id)arg1 isMainFrame:(BOOL)arg2 andGetIsCancelNavigation:(BOOL *)arg3;
- (void)webViewControllerDidCommitLoad:(id)arg1;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)webviewControllerDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewControllerContentProcessDidTerminate:(id)arg1;
- (void)webViewControllerTitleDidChange:(id)arg1;
- (void)webViewControllerDidStartSyncA8Key:(id)arg1;
- (void)webViewControllerForceSyncA8KeyError;
- (id)webViewControllerPreInjectScriptStr;
- (id)webViewControllerBackgroundColor;
- (void)webViewControllerJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (void)webViewControllerCanGoBackChanged:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)kvReportJSCall:(id)arg1 withParam:(id)arg2;
- (void)reportKeyJsapiCall:(id)arg1 initUrl:(id)arg2 currentUrl:(id)arg3 isSuccess:(int)arg4;
- (void)EXReport_onTargetToNativaPage:(id)arg1;
- (void)EXReport_onBackOnPage:(id)arg1 toPage:(id)arg2;
- (void)EXReport_onAppExit:(unsigned int)arg1 onPage:(id)arg2;
- (void)configViewFrame:(CGRect)arg1;
- (void)updateHTMLFrame;
- (void)setBackgroundColor:(id)arg1;
- (void)configProgressBarWithWidth:(double)arg1;
- (void)handleHTMLViewDidBePoped;
- (void)handleHTMLViewDidTerminated;
- (void)handleInsertHTMLDone;
- (void)setSuperVC:(id)arg1;
- (id)superVC;
- (void)setHtmlId:(unsigned int)arg1;
- (unsigned int)htmlId;
- (void)setSourceAppid:(id)arg1;
- (id)sourceAppid;
- (void)setPlugin:(id)arg1;
- (id)plugin;
- (id)webViewInnerEdgeGoBackGesture;
- (void)webViewGoToURL:(id)arg1;
- (BOOL)webViewCanGoBack;
- (void)webViewGoBack;
- (void)webViewGoForward;
- (void)captureFullScreenshotWithCompletion:(id /* block */)arg1;
- (id)getWXHookScriptStr;
- (BOOL)isDisableSetCustomUserAgentInBaseWebview;
- (void)reportCurrentPageInfo:(unsigned long long)arg1;
- (void)showLoadFailView:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)relayoutLoadFailView;
- (void)hideLoadFailView;
- (void)onClickFailView:(id)arg1;
- (id)getAddressBarHostText:(id)arg1;
- (void)initAddressBarLabel;
- (void)restoreAddressBar;
- (void)setWAHTMLWebVCDelegate:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (long long)preferredStatusBarStyle;
- (void)initTrans;
- (void)clearTransWebpageLogic;
- (void)initTransWebpageLogic;
- (void)onTransWebViewControllerDidCommitLoad;
- (void)onTransReceiveScriptMessage:(id)arg1;
- (void)handleMessageDomReady;
- (void)handleMessageWebTrans:(id)arg1;
- (void)dispatchTransStatusTask;
- (BOOL)isDoingTransNow;
- (BOOL)isThisPageCanTrans;
- (void)translate;
- (void)translateRevert;
- (void)onChangeTargetLanguage;
- (void)onTranslateLanguageChange;
- (id)getWKWebView;
- (id)getCache;
- (void)storeCache:(id)arg1 withKey:(id)arg2;
- (void)clearCache;
- (long long)getStatus;
- (void)setStatusFromPageLogic:(long long)arg1;
- (void)onTranslateFinish:(BOOL)arg1;
- (void)onTranslateRevertFinish:(BOOL)arg1;
- (id)m_addressLabel;
- (void)setM_addressLabel:(id)arg1;
- (id)snapshotImgView;
- (void)setSnapshotImgView:(id)arg1;
- (id)m_backgroundColor;
- (void)setM_backgroundColor:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (BOOL)didReceiveTerm;
- (void)setDidReceiveTerm:(BOOL)arg1;
- (CGRect)viewRect;
- (void)setViewRect:(CGRect)arg1;
- (id)htmlWebVCDelegate;
- (void)setHtmlWebVCDelegate:(id)arg1;
- (id)haveTransedTextCache;
- (void)setHaveTransedTextCache:(id)arg1;
- (id)transWebpageLogic;
- (void)setTransWebpageLogic:(id)arg1;
- (id)curRandomUUID;
- (void)setCurRandomUUID:(id)arg1;
- (long long)transStatus;
- (void)setTransStatus:(long long)arg1;
- (void).cxx_destruct;
@end

