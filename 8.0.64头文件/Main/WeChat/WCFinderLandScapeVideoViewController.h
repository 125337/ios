@interface WCFinderLandScapeVideoViewController : MMUIViewController <WCFinderLandScapeVideoViewDataSource, WCFinderLandScapeVideoViewDelegate, WCFinderLandScapeVideoVMDelegate, WCFinderFeedDetailStatusViewDelegate, WCFinderFeedContentVMExt, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _hasReportPageAction; // +0x70
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x78
    MinimizeNewTransitionController * _transitionController; // +0x80
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x88
    MegaVideoPageMonitorHelper * _pageMonitorHelper; // +0x90
    WCFinderLandScapeVideoView * _landScapeVideoView; // +0x98
    WCFinderLandScapeVideoViewModel * _viewModel; // +0xa0
    WCFinderLandScapeVCParams * _params; // +0xa8
    WCFinderFeedDetailStatusView * _statusView; // +0xb0
}
- (id)initWithTid:(id)arg1 nonceId:(id)arg2;
- (id)initWithTid:(id)arg1 nonceId:(id)arg2 params:(id)arg3;
- (id)initWithEncryptTid:(id)arg1 nonceId:(id)arg2 params:(id)arg3;
- (id)initWithFinderDataItem:(id)arg1 params:(id)arg2;
- (void)setupWithTid:(id)arg1 encryptTid:(id)arg2 nonceId:(id)arg3 finderDataItem:(id)arg4 params:(id)arg5;
- (id)initWithViewModel:(id)arg1;
- (void)setupViewModel:(id)arg1;
- (void)setupSubViews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)reportPageAction;
- (void)updateRightBarButtonItems;
- (void)onLimitedClicked;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)reportCellExpose;
- (BOOL)useTransparentNavibar;
- (long long)numberOfRowsInLandScapeVideoViewFeedList:(id)arg1;
- (id)finderLandScapeVideoView:(id)arg1 contentVMAtFeedListRow:(long long)arg2;
- (id)finderLandScapeVideoViewGetNextContinuePlayableContentVM;
- (long long)finderLandScapeVideoView:(id)arg1 getIndexOfTid:(id)arg2;
- (long long)finderLandScapeVideoViewGetNextContinuePlayableFeedIndexOfTid:(id)arg1;
- (id)finderLandScapeVideoViewGetCurrentViewController;
- (void)_refreshRelatedListForContentVM:(id)arg1;
- (void)finderLandScapeVideoView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (void)finderLandScapeVideoView:(id)arg1 didSelectContentVM:(id)arg2 refreshRelatedRecommentList:(BOOL)arg3;
- (void)finderLandScapeListFooterDidTriggerRefresh:(id)arg1;
- (BOOL)finderLandScapeListFooteIsEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderLandScapeVideoViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)finderLandScapeVideoViewPlayNextListFeed:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)onFinderLandScapeVMFetchDataSuccessful;
- (void)onFinderLandScapeVMFetchDatafailed;
- (void)onFinderLandScapeVMGetFirstPlayAbleVideo:(id)arg1;
- (void)onFinderLandScapeVMNeedStopVideo;
- (void)onFinderLandScapeVMGetNotExistDataWithMsg:(id)arg1;
- (void)onFinderLandScapeVMGetNeedOpenComplaintUrlData:(id)arg1;
- (void)onFinderLandScapeVMGetNeedOpenLiteApp:(id)arg1;
- (void)startRequestReleatedDataWithPullType:(unsigned long long)arg1;
- (void)endRequestReleatedDataWithPullType:(unsigned long long)arg1 isPrefetchCache:(BOOL)arg2 success:(BOOL)arg3 cgiTimeCost:(unsigned long long)arg4;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)didClickBack:(id)arg1;
- (void)registerYReportSdk;
- (long long)autoMinimizeCtrlFlagForFinderLandScapeVideoView:(id)arg1;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)pageMonitorHelper;
- (void)setPageMonitorHelper:(id)arg1;
- (id)landScapeVideoView;
- (void)setLandScapeVideoView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (BOOL)hasReportPageAction;
- (void)setHasReportPageAction:(BOOL)arg1;
- (void).cxx_destruct;
@end
