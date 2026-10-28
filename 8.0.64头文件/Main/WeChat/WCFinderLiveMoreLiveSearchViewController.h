@interface WCFinderLiveMoreLiveSearchViewController : MMCPUIViewController <UITextFieldDelegate, WCFinderStreamLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCFinderMoreLiveSearchCollectionViewCellDelegate, WCFinderMoreLiveSearchViewModelDelegate, WCFinderMoreLiveSearchContactReusableViewDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderMoreLiveSearchHistoryViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCGeneralMonitorDelegate, WCFinderMoreLiveSearchContactCollectionViewCellDelegate, UIGestureRecognizerDelegate>
{
    MMTagTextField * _navSearchTextField; // +0x70
    MMTitleView * _titleView; // +0x78
    WCFinderMoreLiveSearchViewModel * _viewModel; // +0x80
    UICollectionView * _collectionView; // +0x88
    WCFinderStreamLayout * _streamLayout; // +0x90
    WCFinderStreamFooterView * _refreshFooterView; // +0x98
    WCFinderMoreLiveSearchHistoryView * _historyListView; // +0xa0
    WCFinderAnimationLoadingView * _loadingView; // +0xa8
    UILabel * _stateTipsLabel; // +0xb0
    UITapGestureRecognizer * _stateRetryGesture; // +0xb8
    UIImageView * _retryImageView; // +0xc0
    unsigned long long _footerRefreshState; // +0xc8
    UIPanGestureRecognizer * _fakePopViewGesture; // +0xd0
    NSString * _searchText; // +0xd8
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)initNaviBar;
- (void)setupLayoutAndCollectionView;
- (void)setupHistoryListView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)handleFakePopGesture:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (unsigned long long)viewState;
- (id)loadingView;
- (void)showKeyboard;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)retryImageView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (void)onTapClearButton;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
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
- (void)showHistoryView;
- (void)showSearchResultView;
- (void)hideSearchView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)onMoreLiveSearchClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)onFinderMoreLiveSearchContactHeaderClickMore;
- (void)onFinderMoreLiveSearchResultEmpty;
- (void)onFinderMoreLiveSearchResultChanged;
- (void)onFinderMoreLiveSearchResultAppendData:(id)arg1;
- (void)onFinderMoreLiveSearchResultAppendInfos:(id)arg1;
- (void)onFinderMoreLiveSearchResultError;
- (void)onFinderMoreLiveSearchResultNoMore;
- (void)onFinderMoreLiveSearchResultNetxPageError;
- (void)onFinderMoreLiveSearchResultReload:(id)arg1;
- (void)reloadDataWrap;
- (void)scrollViewDidScroll:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)onHistoryViewSelectSearchRecord:(id)arg1;
- (void)doSearchAction:(id)arg1;
- (void)onHistoryViewClearAllSerchHistory;
- (void)onHistoryViewDeleteSearchRecord:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onSearchContactCollectionViewCell:(id)arg1 LiveNowViewDidClick:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)exposeItemViewAppear;
- (void)registerYReportSdk;
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
- (id)fakePopViewGesture;
- (void)setFakePopViewGesture:(id)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (void).cxx_destruct;
@end
