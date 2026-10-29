@interface WebviewJSEventHandler_openBizPublishImage : WebviewJSEventHandlerBase <BizTlPersonalCenterMgrRegisterExt>
{
    JSEvent * _bizPublishImageEvent; // +0x8
    NSDictionary * _dic; // +0x10
    MMLoadingView * _loadingView; // +0x18
    double _lastClickTime; // +0x20
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onGetBizFailed;
- (void)onGetBiz:(id)arg1 photoAcct:(id)arg2;
- (id)makeHandlerWrapper;
- (id /* block */)makeFinishCallback;
- (BOOL)checkUseDraftWithOpenInfo:(id)arg1 taskInfo:(id)arg2;
- (void)onSelectPhotoFailed;
- (void)onOpenRegisterPage;
- (void)onOpenRegisterCanceled;
- (void)onStartLoadingView;
- (void)onStopLoadingView;
- (void)openMiniApp;
- (id)generateOpenInfo:(id)arg1;
- (id)generateTaskInfo:(id)arg1;
- (void)openPersonalCenterMiniAppPage:(id)arg1 openInfo:(id)arg2 taskInfo:(id)arg3;
- (void)startLoading;
- (void)stopLoading;
- (id)bizPublishImageEvent;
- (void)setBizPublishImageEvent:(id)arg1;
- (id)dic;
- (void)setDic:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (double)lastClickTime;
- (void)setLastClickTime:(double)arg1;
- (void).cxx_destruct;
@end
