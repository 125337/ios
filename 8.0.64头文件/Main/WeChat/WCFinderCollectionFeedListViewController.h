@interface WCFinderCollectionFeedListViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderCollectionHalfScreenViewControllerDelegate>
{
    BOOL _shouldPresentCollectionListAutomatically; // +0x70
    id <WCFinderCollectionFeedListViewControllerDelegate> _delegate; // +0x78
    WCFinderFeedListView * _feedListView; // +0x80
    WCFinderCollectionFeedListViewModel * _viewModel; // +0x88
    WCFinderEmptyTipsView * _emptyTipsView; // +0x90
    WCFinderCollectionFeedListVCParams * _params; // +0x98
}
- (id)initWithViewModel:(id)arg1 withParams:(id)arg2;
- (BOOL)shouldHideNavigationBar;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setupFeedListDataSource;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewDidTransitionToNewSize;
- (void)_setupPageReport;
- (void)configureTableView;
- (id)emptyTipsView;
- (void)configureNavigationTitle;
- (void)tryGoDestinationFeedAndPresentHalfScreen;
- (void)showPaidCollectionSkipToastWithContentVM:(id)arg1;
- (void)presentCollectionHalfScreenListWithContentVM:(id)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (BOOL)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (BOOL)finderFeedListViewEnableSwipeGesturePushProfilePage:(id)arg1;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)finderFeedListMediaCellBrowsePhotoLongTime:(id)arg1;
- (void)tryAutoPlayNextFeedWithContentVM:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)arg1;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (BOOL)finderFeedListView:(id)arg1 processingHeaderClick:(id)arg2 avatarType:(unsigned long long)arg3 contentVM:(id)arg4;
- (void)finderFeedListViewClickCollectionBubble:(id)arg1;
- (void)onFeedArrayDataChange:(id)arg1 context:(id)arg2;
- (void)updateNoMoreDataState;
- (void)updateLoaddingState;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (BOOL)collectionHalfList:(id)arg1 handleClickContentVM:(id)arg2;
- (BOOL)collectionHalfList:(id)arg1 handleConsumeSuccessWithTargetTid:(id)arg2;
- (void)handleNeedPayFeedClickWithContentVM:(id)arg1;
- (id)fetchCollectionHalfListSheetWithContentVM:(id)arg1 collectionInfo:(id)arg2;
- (id)fetchCollectionHalfListSheetWithContentVM:(id)arg1 paidCollection:(id)arg2;
- (void)collectionHalfListWillAppear:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldPresentCollectionListAutomatically;
- (void)setShouldPresentCollectionListAutomatically:(BOOL)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
