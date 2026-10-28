@interface WCFinderNearbyFlowViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderNearbyFlowViewModelDelegate>
{
    id <WCFinderNearbyFlowViewControllerDelegate> _delegate; // +0x70
    WCFinderNearbyFlowViewModel * _viewModel; // +0x78
    WCFinderFeedListView * _feedListView; // +0x80
    long long _firstViewOffset; // +0x88
    unsigned long long _eventTime; // +0x90
}
- (id)initWithViewModel:(id)arg1 offset:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)configureTableView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)nearByListDataSourceFetchError:(unsigned long long)arg1;
- (void)nearByListSourceNoMoreData:(unsigned long long)arg1;
- (void)nearByListDataSourceChanged;
- (void)nearByListNextPageAppendData:(id)arg1;
- (void)nearByListDataWillRemoved:(id)arg1;
- (void)nearByListWillChangeOriginDataIndex;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (long long)firstViewOffset;
- (void)setFirstViewOffset:(long long)arg1;
- (unsigned long long)eventTime;
- (void)setEventTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
