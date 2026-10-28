@interface MMFinderLiveFootageReplayViewController : MMCPUIViewController <MMFinderLiveReplayOperationViewDelegate, MMLiveTaskMgrExt, MMFinderLiveFootageReplayOperationViewDelegate>
{
    BOOL _replayStartReported; // +0x70
    unsigned int _viewStartTime; // +0x74
    MMFinderLiveTaskId * _taskId; // +0x78
    MMFinderLiveReplayView * _replayView; // +0x80
    id <MMLiveViewControllerDelegate> _delegate; // +0x88
    UINavigationController * _navControl; // +0x90
    NSDictionary * _reportExtraInfo; // +0x98
    UIImageView * _blurView; // +0xa0
    long long _currOrientation; // +0xa8
    MMFinderLiveFootageReplayOperationView * _operationView; // +0xb0
    MMUIButton * _backBarButton; // +0xb8
    MMFinderLiveFootageReplayModel * _footageReplayModel; // +0xc0
    long long _lastOrientation; // +0xc8
    id /* block */ _waitingPortraitBlock; // +0xd0
    MMFinderLiveFootageReplayReporter * _footageReplayReporter; // +0xd8
    unsigned long long _seekFromMediaTimeInMilliseconds; // +0xe0
}
- (id)initWithTaskId:(id)arg1 footageReplayModel:(id)arg2;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)enterLive;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)layoutUI;
- (void)layoutOperationView;
- (void)updateReplayOperationViewFrame;
- (void)layoutBackBarButton;
- (void)layoutReplayView;
- (void)layoutBlurView;
- (void)initData;
- (void)exitAndClearLive;
- (void)checkScreenCaptureState;
- (void)performBlockAfterOrientationPortrait:(id /* block */)arg1;
- (void)performBlockAfterPortrait;
- (void)clearCurrentBlock;
- (void)checkAndHandleUIOrientationChange;
- (void)onMMLiveFullScreenTaped;
- (void)onMMLiveReplayVideoSizeChange:(CGSize)arg1;
- (CGRect)onFootageReplayVideoFrameRequested;
- (void)onFootageReplayOrientationButtonTapped;
- (void)onFootageReplayPaused;
- (void)onFootageReplaySeekBegan;
- (void)onFootageReplaySeekEndAtMediaTime:(double)arg1;
- (void)onFootageReplayGetVideoSize:(CGSize)arg1;
- (void)onFootageReplayReportCommentWithSequenceId:(unsigned long long)arg1 frameId:(id)arg2;
- (void)close;
- (id)liveTask;
- (void)onDoneButtonClicked;
- (void)didChangeScreenCapture:(id)arg1;
- (void)onBecomeActive;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)replayView;
- (void)setReplayView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)navControl;
- (void)setNavControl:(id)arg1;
- (id)reportExtraInfo;
- (void)setReportExtraInfo:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (long long)currOrientation;
- (void)setCurrOrientation:(long long)arg1;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (id)backBarButton;
- (void)setBackBarButton:(id)arg1;
- (unsigned int)viewStartTime;
- (void)setViewStartTime:(unsigned int)arg1;
- (id)footageReplayModel;
- (void)setFootageReplayModel:(id)arg1;
- (long long)lastOrientation;
- (void)setLastOrientation:(long long)arg1;
- (id /* block */)waitingPortraitBlock;
- (void)setWaitingPortraitBlock:(id /* block */)arg1;
- (id)footageReplayReporter;
- (void)setFootageReplayReporter:(id)arg1;
- (unsigned long long)seekFromMediaTimeInMilliseconds;
- (void)setSeekFromMediaTimeInMilliseconds:(unsigned long long)arg1;
- (BOOL)replayStartReported;
- (void)setReplayStartReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
