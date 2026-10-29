@interface WCFinderHotWordsFeedListViewController : MMUIViewController <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderHotWordsFeedViewModelDelegate>
{
    long long _scrollToIndexWhenViewDidAppear; // +0x68
    WCFinderHotWordsFeedViewModel * _viewModel; // +0x70
    WCFinderFeedListView * _feedListView; // +0x78
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupListView;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)linkTopicVM:(id)arg1 fetchDataFinishWithAppendDataWithRange:(_NSRange)arg2;
- (void)linkTopicVMStateChanged:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (long long)scrollToIndexWhenViewDidAppear;
- (void)setScrollToIndexWhenViewDidAppear:(long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (void).cxx_destruct;
@end

