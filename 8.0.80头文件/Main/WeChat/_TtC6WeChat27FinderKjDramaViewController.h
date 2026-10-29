@interface _TtC6WeChat27FinderKjDramaViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
     viewModel; // +0x8
     $__lazy_storage_$_feedListView; // +0x10
     playbackSpeedNavigationItem; // +0x18
     contentVMs; // +0x20
     pageVisible; // +0x28
     feedListVisible; // +0x29
     exposing; // +0x2a
     contextID; // +0x30
     cacheState; // +0x40
     reporter; // +0x48
     pendingPosition; // +0x50
     pendingAutoPlayNextFeed; // +0x88
     finished; // +0x89
}
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (double)preferredBottomInsetForStandardOverlay;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)useTransparentNavibar;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (BOOL)finderFeedListViewShouldRefreshOnScrollToTop:(id)arg1;
- (void)finderFeedListViewStartExpose;
- (void)finderFeedListViewEndExpose;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (void)finderFeedListViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3 contentVM:(id)arg4;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (id)finderFeedListViewNavigationItemForPlaybackSpeed:(id)arg1;
- (BOOL)finderFeedListViewEnableSwipeGesturePushProfilePage:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
