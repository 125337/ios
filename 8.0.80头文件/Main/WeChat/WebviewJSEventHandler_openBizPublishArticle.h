@interface WebviewJSEventHandler_openBizPublishArticle : WebviewJSEventHandlerBase <BizTlPersonalCenterMgrRegisterExt>
{
    JSEvent * _bizPublishArticleEvent; // +0x8
    NSDictionary * _dic; // +0x10
    MMLoadingView * _loadingView; // +0x18
    double _lastClickTime; // +0x20
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onGetBizFailed;
- (void)onGetBiz:(id)arg1 photoAcct:(id)arg2;
- (void)onSelectPhotoFailed;
- (void)onOpenRegisterPage;
- (void)onOpenRegisterCanceled;
- (void)onStartLoadingView;
- (void)onStopLoadingView;
- (BOOL)shouldFallbackToWeapp;
- (void)openFlutterEditor;
- (id)parseNativeExtraDataDict;
- (void)remapKey:(id)arg1 to:(id)arg2 in:(id)arg3;
- (id)parseRelativeURLQuery:(id)arg1;
- (void)openMiniApp;
- (id)generateOpenInfo:(id)arg1;
- (id)generateTaskInfo:(id)arg1;
- (id)makeHandlerWrapper;
- (void)startLoading;
- (void)stopLoading;
- (id)bizPublishArticleEvent;
- (void)setBizPublishArticleEvent:(id)arg1;
- (id)dic;
- (void)setDic:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (double)lastClickTime;
- (void)setLastClickTime:(double)arg1;
- (void).cxx_destruct;
@end
