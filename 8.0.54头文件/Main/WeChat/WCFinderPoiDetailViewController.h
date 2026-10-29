@interface WCFinderPoiDetailViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderPoiDetailViewModelDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewMinimizeDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell>
{
    WCFinderPoiDetailViewModel * _viewModel; // +0x68
    unsigned long long _firstOffset; // +0x70
    WCFinderFeedListView * _feedListView; // +0x78
    WCFinderShareCustomTransition * _animator; // +0x80
}
- (id)initWithPoiParams:(id)arg1 tabInfo:(id)arg2 DataArray:(id)arg3 lastBuffer:(id)arg4 continueFlag:(BOOL)arg5 offset:(unsigned long long)arg6 syncKey:(id)arg7;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderPoiDetailReloadAllData;
- (void)finderPoiDetailAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderPoiDetailNoMoreData;
- (void)finderPoiDetailRequestFailWithErrorCode:(int)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)feedListView;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (void)registerYReportSdk;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (unsigned long long)firstOffset;
- (void)setFirstOffset:(unsigned long long)arg1;
- (void)setFeedListView:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end

