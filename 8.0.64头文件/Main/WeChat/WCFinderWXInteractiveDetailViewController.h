@interface WCFinderWXInteractiveDetailViewController : MMUIViewController <WCFinderShareAbstractCell, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderWXInteractiveDetailViewModelDelegate, WCFinderWXInteractiveDetailViewModelDataSource>
{
    WCFinderFeedListView * _feedListView; // +0x70
    WCFinderWXInteractiveDetailViewModel * _viewModel; // +0x78
    WCFinderShareCustomTransition * _animator; // +0x80
}
+ (id)genDeleteTransferCtxByCommentScene:(int)arg1;
- (id)initWithSelectType:(long long)arg1 dataProvider:(id)arg2 contentTid:(id)arg3;
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
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)arg1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (void)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 delContentVM:(id)arg3;
- (void)removeContentVM:(id)arg1;
- (void)onWXInteractiveListEmpty;
- (void)onWXInteractiveListModifyWithDeletes:(id)arg1 inserts:(id)arg2;
- (void)onWXInteractiveListLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onWXInteractiveListResultNoMore;
- (void)onWXInteractiveListResultChanged;
- (void)onWXInteractiveListResultReloadData;
- (void)onWXInteractiveListNextPageError;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getWXInteractiveListFocusTid;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end
