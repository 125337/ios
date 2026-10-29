@interface MMFinderLivePromotionReplayViewController : MMCPUIViewController <MMFinderLiveReplayOperationViewDelegate, MMLiveTaskMgrExt>
{
    unsigned int _viewStartTime; // +0x68
    MMFinderLiveTaskId * _taskId; // +0x70
    MMFinderLiveReplayView * _replayView; // +0x78
    id <MMLiveViewControllerDelegate> _delegate; // +0x80
    UINavigationController * _navControl; // +0x88
    NSDictionary * _reportExtraInfo; // +0x90
    UIImageView * _blurView; // +0x98
    long long _currOrientation; // +0xa0
    MMFinderLivePromotionReplayOperationView * _operationView; // +0xa8
    MMUIButton * _backBarButton; // +0xb0
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)enterLive;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutOperationView;
- (void)updateReplayOperationViewFrame;
- (void)layoutBackBarButton;
- (void)layoutReplayView;
- (void)layoutBlurView;
- (void)initData;
- (void)exitAndClearLive;
- (void)onMMLiveFullScreenTaped;
- (void)onMMLiveReplayVideoSizeChange:(CGSize)arg1;
- (void)close;
- (id)liveTask;
- (id)promotionReplayOperationView;
- (void)onDoneButtonClicked;
- (id)audienceLogReporter;
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
- (void).cxx_destruct;
@end

