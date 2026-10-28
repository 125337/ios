@interface WCFinderLongVideoInPictureViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderInPictureProtocol>
{
    BOOL _hadAppeared; // +0x70
    BOOL _disableResume; // +0x71
    BOOL _viewWillDisappearFlag; // +0x72
    unsigned long long _feedViewerScene; // +0x78
    WCFinderFeedContentVM * _contentVM; // +0x80
    MiniRecTransitionController * _minimizationTransitionController; // +0x88
    WCPlayerView * _playerView; // +0x90
    WCFinderFeedListView * _feedListView; // +0x98
}
- (id)initWithContentVM:(id)arg1 player:(id)arg2;
- (void)dealloc;
- (void)pauseVideo;
- (id)cacheKey;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willDisappear;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)configureTableView;
- (int)feedViewControllerScene;
- (id)getCurMediaListObject;
- (void)inPicture:(BOOL)arg1;
- (void)onClose;
- (BOOL)useTransparentNavibar;
- (id)playingVideo;
- (BOOL)isPlaying;
- (id)viewForCapture;
- (void)maxmizeFromInPicture;
- (void)closeInPicture;
- (void)clearPlayerOnly;
- (void)stashPlayer;
- (void)unstashPlayer;
- (void)willInPicture;
- (BOOL)setVideoMute:(BOOL)arg1;
- (void)resumeToFullFromInPicture;
- (CGRect)fullRectForMedia;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)arg1;
- (BOOL)finderFeedListViewCanInPicture:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (unsigned long long)feedViewerScene;
- (void)setFeedViewerScene:(unsigned long long)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)minimizationTransitionController;
- (void)setMinimizationTransitionController:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (BOOL)hadAppeared;
- (void)setHadAppeared:(BOOL)arg1;
- (BOOL)disableResume;
- (void)setDisableResume:(BOOL)arg1;
- (BOOL)viewWillDisappearFlag;
- (void)setViewWillDisappearFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
