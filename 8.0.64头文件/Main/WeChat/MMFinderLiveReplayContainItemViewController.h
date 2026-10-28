@interface MMFinderLiveReplayContainItemViewController : MMLivePivotItemViewController
{
    BOOL _isPreviewMuted; // +0x70
    MMFinderLiveReplayViewController * _replayController; // +0x78
    MMFinderLiveReplayTask * _replayTask; // +0x80
    MMFinderLiveContentVM * _contentVM; // +0x88
}
- (id)initWithContentVM:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)updateSafeAreaInsets;
- (id)liveTask;
- (id)controller;
- (void)prepareLiveTask;
- (void)prepareController;
- (void)layoutController;
- (void)startPreview;
- (void)startPreviewMuted:(BOOL)arg1 isInScroll:(BOOL)arg2;
- (void)stopPreview;
- (void)startLive:(unsigned long long)arg1;
- (void)endLive;
- (void)onLiveComplete;
- (void)checkAndResumeLive;
- (void)registerYReportSdk;
- (id)replayController;
- (void)setReplayController:(id)arg1;
- (id)replayTask;
- (void)setReplayTask:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)isPreviewMuted;
- (void)setIsPreviewMuted:(BOOL)arg1;
- (void).cxx_destruct;
@end
