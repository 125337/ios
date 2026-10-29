@interface WSJSEventHandler : NSObject <WCCommentDetailViewControllerFBDelegate, WCCanvasDynamicDataLoaderDelegate, FTSJSEventDelegate>
{
    MMUIViewController * _baseViewController; // +0x8
    id <WSJSEventHandleDelegate> _delegate; // +0x10
    FTSWebSearchMgr * _webSearchMgr; // +0x18
    MMLoadingView * _loadingView; // +0x20
    WCCanvasDynamicDataLoader * _dataLoader; // +0x28
    NSDictionary * _userInfo; // +0x30
    NSMutableArray * _preloadVids; // +0x38
}
- (void)dealloc;
- (void)setBaseViewController:(id)arg1;
- (void)hideKeyboard;
- (void)onImagePreview:(id)arg1;
- (void)onOpenSearchAssistance:(id)arg1;
- (void)onUpdateReddotTimeStamps:(id)arg1;
- (void)onFailReceiveJson;
- (void)onSearchInputChanged:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onJsbridgeReady:(id)arg1;
- (void)onWebViewTerminal:(id)arg1;
- (BOOL)viewControllerHasNavController;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onMakePhoneCall:(id)arg1;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)internalOnLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenSnsDetail:(id)arg1;
- (void)onOpenContact:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onRequestLocalSuggestion:(id)arg1;
- (void)onOpenTransparentWeApp:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1 privateParams:(id)arg2;
- (void)onOpenEmotionPage:(id)arg1;
- (void)onSwitchSearchContext:(id)arg1;
- (id)onGetBaseViewController;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)onGoToRecVideoList:(id)arg1 webview:(id)arg2;
- (void)onWebViewRenderFinish:(id)arg1;
- (void)onOpenWowColikeSetting:(id)arg1;
- (void)onPreloadVideo:(id)arg1;
- (void)onSetSearchTagResult:(id)arg1;
- (void)onAppendSearchTagQuery:(id)arg1;
- (void)onLaunchApplication:(id)arg1;
- (void)onUxCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)onDeleteData;
- (id)dataLoader;
- (id)baseViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)webSearchMgr;
- (void)setWebSearchMgr:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void)setDataLoader:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)preloadVids;
- (void)setPreloadVids:(id)arg1;
- (void).cxx_destruct;
@end

