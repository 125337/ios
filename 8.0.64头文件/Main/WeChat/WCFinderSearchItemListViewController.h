@interface WCFinderSearchItemListViewController : MMUIViewController <UITextFieldDelegate, WCFinderSearchHistoryListViewDelegate, WCFinderSearchListViewModelDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderCustomPagingDelegate, WCFinderSearchDataProviderDelegate, WCFinderSearchTitleViewDelegate, WCFinderSearchArrowTitleViewDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderSearchTitleView * _customTitleView; // +0x70
    WCFinderSearchArrowTitleView * _arrowTitleView; // +0x78
    WCFinderFeedListView * _feedListView; // +0x80
    unsigned long long _firstViewOffset; // +0x88
    WCFinderSearchListViewModel * _viewModel; // +0x90
    NSString * _traceId; // +0x98
    WCFinderSearchHistoryListView * _historyListView; // +0xa0
    WCFinderCustomPaging * _customPagingHelper; // +0xa8
    long long _playFeedbackSection; // +0xb0
    WCFinderEventHeaderActionHandler * _headerActionHeandler; // +0xb8
    WCFinderCustomPanelSheet * _headerEventSheet; // +0xc0
    WCFinderShareCustomTransition * _animator; // +0xc8
}
- (id)initWithListVM:(id)arg1 offset:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (id)navigationBarBackgroundColor;
- (void)configureTableView;
- (void)setupHistoryListView;
- (void)initNaviBar:(BOOL)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)customChangeNavigationBarColor;
- (id)navigationItemCustomTineColor;
- (id)navigationItemSearchIconTineColor;
- (id)navigationCleanButtonColor;
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
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (BOOL)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (id)splitLayoutVMAtSection:(long long)arg1;
- (void)finderFeedListView:(id)arg1 willBeginDraging:(id)arg2;
- (void)finderFeedListView:(id)arg1 scrollViewWillEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)finderFeedListViewBeginDecelerating:(id)arg1;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (BOOL)isCustomPagingSplitView:(id)arg1;
- (void)customPagingDidEndDecelerating;
- (void)updateCurrentDisplayVM;
- (void)animatedDisplayBannerView:(long long)arg1;
- (void)finderFeedListView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)setupAllSplitCellNeedUpdateAgain;
- (void)updateSplitViewCell;
- (void)tryPlayPageFeedBack;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListView:(id)arg1 nextMediaIndexPath:(id)arg2;
- (void)dataProvider:(id)arg1 appendDataToRange:(_NSRange)arg2;
- (void)dataProvider:(id)arg1 removeAtIdx:(long long)arg2;
- (void)dataProviderFetchFailed:(id)arg1;
- (void)updateLoadingStatus:(BOOL)arg1;
- (void)autoScrollToNextFeed;
- (void)onFinderSearchListBeginSearch;
- (void)onFinderSearchListQueryTextChanged;
- (void)onFinderSearchListEventInfoChanged;
- (void)onClickArrowTitleView:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onSelectSearchRecord:(id)arg1;
- (void)onClickCleanButton:(id)arg1;
- (void)onClearAllSerchHistory;
- (void)onDeleteSearchRecord:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (int)refCommentScene;
- (void)registerYReportSdk;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (id)customTitleView;
- (void)setCustomTitleView:(id)arg1;
- (id)arrowTitleView;
- (void)setArrowTitleView:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (unsigned long long)firstViewOffset;
- (void)setFirstViewOffset:(unsigned long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)historyListView;
- (void)setHistoryListView:(id)arg1;
- (id)customPagingHelper;
- (void)setCustomPagingHelper:(id)arg1;
- (long long)playFeedbackSection;
- (void)setPlayFeedbackSection:(long long)arg1;
- (id)headerActionHeandler;
- (void)setHeaderActionHeandler:(id)arg1;
- (id)headerEventSheet;
- (void)setHeaderEventSheet:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end
