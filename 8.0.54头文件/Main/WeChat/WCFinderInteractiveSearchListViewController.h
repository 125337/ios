@interface WCFinderInteractiveSearchListViewController : MMUIViewController <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderInteractiveSearchViewModelDelegate, WCFinderFeedListViewMinimizeDelegate>
{
    WCFinderInteractiveSearchListViewModel * _viewModel; // +0x68
    WCFinderFeedListView * _listView; // +0x70
    long long _openInitialIndex; // +0x78
}
- (id)initWithViewModel:(id)arg1 index:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)onSearchVMSecitonChanged:(id)arg1;
- (void)onSearchVMSectionLoadingStateChanged:(id)arg1;
- (void)onSearchVMSectionEmpty;
- (void)updateLoadState;
- (void)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 delContentVM:(id)arg3;
- (void)removeContentVM:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)listView;
- (void)setListView:(id)arg1;
- (long long)openInitialIndex;
- (void)setOpenInitialIndex:(long long)arg1;
- (void).cxx_destruct;
@end

