@interface WCFinderSearchViewController : MMUIViewController <UITextFieldDelegate, WCFinderSearchViewModelDelegate, WCFinderStreamLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate, WCFinderSearchContactReusableViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderSearchHistoryListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCGeneralMonitorDelegate, WCFinderSearchContactCollectionViewCellDelegate>
{
    MMTagTextField * _navSearchTextField; // +0x70
    MMTitleView * _titleView; // +0x78
    WCFinderSearchViewModel * _viewModel; // +0x80
    UICollectionView * _collectionView; // +0x88
    WCFinderStreamLayout * _streamLayout; // +0x90
    WCFinderStreamFooterView * _refreshFooterView; // +0x98
    WCFinderSearchHistoryListView * _historyListView; // +0xa0
    WCFinderAnimationLoadingView * _loadingView; // +0xa8
    UILabel * _stateTipsLabel; // +0xb0
    UITapGestureRecognizer * _stateRetryGesture; // +0xb8
    UIImageView * _retryImageView; // +0xc0
    unsigned long long _footerRefreshState; // +0xc8
    NSMutableDictionary * _exposeTimeDict; // +0xd0
    unsigned long long _enterTime; // +0xd8
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willDisappear;
- (id)navigationBarBackgroundColor;
- (void)initNaviBar;
- (void)setupLayoutAndCollectionView;
- (void)setupHistoryListView;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (id)loadingView;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)exposeTimeDict;
- (void)exposeItemViewDisappear;
- (void)exposeItemViewAppear;
- (id)retryImageView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)shouldCustomHandleSelectedItem;
- (void)customHandleSelectedItem:(id)arg1 viewModel:(id)arg2 index:(long long)arg3;
- (id)getSearchViewModel;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)onFinderSearchContactHeaderClickMore;
- (void)onFinderSearchResultEmpty;
- (void)onFinderSearchResultChanged;
- (void)onFinderSearchResultAppendDataIndexPaths:(id)arg1;
- (void)onFinderSearchResultAppendInfosIndexPaths:(id)arg1;
- (void)onFinderSearchResultError;
- (void)onFinderSearchResultNoMore;
- (void)onFinderSearchResultNetxPageError;
- (void)onFinderSearchResultReload:(id)arg1;
- (void)reloadDataWrap;
- (void)scrollViewDidScroll:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onSelectSearchRecord:(id)arg1;
- (void)doSearchAction:(id)arg1;
- (void)onClearAllSerchHistory;
- (void)onDeleteSearchRecord:(id)arg1;
- (void)reportFeedStreamClickWithCollectionView:(id)arg1 selectedIndexPath:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onSearchContactCollectionViewCell:(id)arg1 LiveNowViewDidClick:(id)arg2;
- (id)navSearchTextField;
- (void)setNavSearchTextField:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)streamLayout;
- (void)setStreamLayout:(id)arg1;
- (id)refreshFooterView;
- (void)setRefreshFooterView:(id)arg1;
- (id)historyListView;
- (void)setHistoryListView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (unsigned long long)footerRefreshState;
- (void)setFooterRefreshState:(unsigned long long)arg1;
- (void)setExposeTimeDict:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
