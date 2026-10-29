@interface WCFinderMJSetFeedListViewController : MMUIViewController <WCFinderMJSetTabModelDelegate, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderMJSetTabModel * _viewModel; // +0x68
    long long _viewIndex; // +0x70
    WCFinderFeedListView * _feedListView; // +0x78
}
- (id)initWithViewModel:(id)arg1 viewIndex:(long long)arg2;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onTabModelDataStateChanged:(id)arg1;
- (void)updateFooterState;
- (void)onTabModel:(id)arg1 appendDataFromRange:(_NSRange)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (long long)viewIndex;
- (void)setViewIndex:(long long)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (void).cxx_destruct;
@end

