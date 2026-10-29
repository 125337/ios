@interface MMFinderLiveReplayContainItemViewController : MMLivePivotItemViewController
{
    BOOL _isPreviewMuted; // +0x68
    MMFinderLiveReplayViewController * _replayController; // +0x70
    MMFinderLiveReplayTask * _replayTask; // +0x78
    MMFinderLiveContentVM * _contentVM; // +0x80
}
- (id)initWithContentVM:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
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
- (CGRect)getWindowBounds;
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

