@interface MMFinderLiveSquareChatStartViewController : MMUIViewController <MMLiveCountdownTipsViewDelegate, MMFinderCreateLiveSpamCheckWarnPageVCDelegate>
{
    BOOL _hasStarted; // +0x70
    MMLiveCountdownTipsView * _countdownTipsView; // +0x78
    MMLiveTaskId * _taskId; // +0x80
    id <MMFinderLiveSquareChatStartViewControllerDelegate> _delegate; // +0x88
    WCFinderStarterLiveViewModel * _starterVM; // +0x90
    FinderCreateLiveWarnPage * _warnPageNeedShowAfterCountDownTimeout; // +0x98
}
- (id)initWithTaskId:(id)arg1 viewModel:(id)arg2 shareItem:(id)arg3 andLiveNoticeList:(id)arg4 delegate:(id)arg5;
- (BOOL)shouldWrapViewWithSafeArea;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)layoutUI;
- (void)startFinderLive;
- (void)startFinderLive:(BOOL)arg1;
- (void)autofillDefaultDataWithCreateParamsModel:(id)arg1 completion:(id /* block */)arg2;
- (void)updateNoticeData;
- (void)updateCoverImageToDataItemWithImage:(id)arg1;
- (BOOL)enableBindNoticeView;
- (void)closeAndExitLive;
- (void)markShowWarnPageAfterCountDownTimeout:(id)arg1;
- (void)onMMLiveCountdownStart;
- (void)onMMLiveCountdownCancelled;
- (void)onMMLiveCountdownTimeOut;
- (void)cancelLiveAndUpdateData;
- (void)showLiveStarterWarnPage:(id)arg1;
- (void)showWarnPage:(id)arg1;
- (void)onMMLiveCreateLiveSpamCheckNameVerifySucceeded;
- (void)onMMLiveCreateLiveSpamCheckReturnPreparePage;
- (id)liveTask;
- (id)modeModel;
- (id)countdownTipsView;
- (unsigned int)scene;
- (void)setCountdownTipsView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)starterVM;
- (void)setStarterVM:(id)arg1;
- (id)warnPageNeedShowAfterCountDownTimeout;
- (void)setWarnPageNeedShowAfterCountDownTimeout:(id)arg1;
- (BOOL)hasStarted;
- (void)setHasStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
