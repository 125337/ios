@interface MMFinderLiveSilentReserveView : UIView <MMFinderLiveReserveViewModelObserver>
{
    id /* block */ _jsapiSuccessBlock; // +0x8
    MMFinderLiveReserveViewModel * _viewModel; // +0x10
}
- (id)initWithGetLiveNoticeResponse:(id)arg1 fromVC:(id)arg2;
- (void)setReportCommentScene:(id)arg1 sceneNote:(id)arg2 noticeBussinessDic:(id)arg3;
- (id)reserveSucceededToastContent;
- (void)setReserveSucceededToastContent:(id)arg1;
- (id)reserveFailedToastContent;
- (void)setReserveFailedToastContent:(id)arg1;
- (id)cancelReserveSucceededToastContent;
- (void)setCancelReserveSucceededToastContent:(id)arg1;
- (id)cancelReserveFailedToastContent;
- (void)setCancelReserveFailedToastContent:(id)arg1;
- (void)reserveSilently;
- (void)onNeedDismissView;
- (void)onViewModelWorkFinished;
- (id /* block */)jsapiSuccessBlock;
- (void)setJsapiSuccessBlock:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
