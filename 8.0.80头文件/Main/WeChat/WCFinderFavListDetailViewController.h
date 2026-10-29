@interface WCFinderFavListDetailViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedListViewMinimizeDelegate, WCFinderFavListDetailViewModelDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell>
{
    id /* block */ _backBlock; // +0x70
    NSNumber * _givingCommentScene; // +0x78
    unsigned long long _firstViewOffset; // +0x80
    WCFinderFeedListView * _feedListView; // +0x88
    WCFinderFavListDetailViewModel * _viewModel; // +0x90
    NSString * _displayTitle; // +0x98
    WCFinderShareCustomTransition * _animator; // +0xa0
}
- (double)preferredBottomInsetForStandardOverlay;
- (id)initWithListVM:(id)arg1 offset:(unsigned long long)arg2 displayTitle:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)configureTableView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)useTransparentNavibar;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewDidTransitionToNewSize;
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
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)arg1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (void)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 delContentVM:(id)arg3;
- (void)removeContentVM:(id)arg1;
- (void)onFinderSearchListEmpty;
- (void)onFinderSearchListResultNoMore;
- (void)onFinderSearchListResultChanged;
- (void)onFinderSearchListNextPageError;
- (void)finderFavListLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)registerYReportSdk;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (id /* block */)backBlock;
- (void)setBackBlock:(id /* block */)arg1;
- (id)givingCommentScene;
- (void)setGivingCommentScene:(id)arg1;
- (unsigned long long)firstViewOffset;
- (void)setFirstViewOffset:(unsigned long long)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)displayTitle;
- (void)setDisplayTitle:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end
