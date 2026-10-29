@interface WAJSEventHandler_openBizPublishImage : WAJSEventHandler_BaseEvent <BizTlPersonalCenterMgrRegisterExt>
{
    MMLoadingView * _loadingView; // +0x8
    NSDictionary * _dic; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)onGetBizFailed;
- (void)onGetBiz:(id)arg1 photoAcct:(id)arg2;
- (BOOL)checkUseDraftWithOpenInfo:(id)arg1 taskInfo:(id)arg2;
- (void)onSelectPhotoFailed;
- (void)onOpenRegisterPage;
- (void)onOpenRegisterCanceled;
- (void)onStartLoadingView;
- (void)onStopLoadingView;
- (void)openMiniApp;
- (void)openPersonalCenterMiniAppPage:(id)arg1 taskInfo:(id)arg2;
- (id)makeHandlerWrapper;
- (id /* block */)makeFinishCallback;
- (id)generateOpenInfo:(id)arg1;
- (id)generateTaskInfo:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)dic;
- (void)setDic:(id)arg1;
- (void).cxx_destruct;
@end
