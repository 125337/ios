@interface WCFinderGameLiveListViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderGameLiveListCellDelegate, MMFinderLiveGameSearchDelegate, MMLiveGameRecentlyPalyedViewDelegate, MMRefreshTableFooterDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderLiveStarterGamePageViewManagerDelegate>
{
    BOOL _showSearch; // +0x70
    BOOL _isShowGameSearchResult; // +0x71
    BOOL _isSearchVC; // +0x72
    id <WCFinderGameLiveListViewControllerDelegate> _delegate; // +0x78
    MMLiveTaskId * _liveTaskId; // +0x80
    MMTableView * _tableView; // +0x88
    WCTimeLineFooterView * _footerView; // +0x90
    UILabel * _noSearchResultTipsLabel; // +0x98
    UIView * _tableTopSeperator; // +0xa0
    UIView * _backgroundView; // +0xa8
    MMUISearchBar * _searchBar; // +0xb0
    UIButton * _closeButton; // +0xb8
    MMUIButton * _searchButton; // +0xc0
    UILabel * _headerTitle; // +0xc8
    NSMutableArray * _gameUserInfoList; // +0xd0
    NSMutableArray * _initialGameUserInfoList; // +0xd8
    NSMutableArray * _recentlyPlayGameUserInfoList; // +0xe0
    NSString * _appId; // +0xe8
    NSIndexPath * _lastSelectedIndexPath; // +0xf0
    MMFinderLiveGameStartParamModel * _gameLiveVM; // +0xf8
    WCFinderLiveStarterReporter * _reporter; // +0x100
    MMFinderLiveGameSearchViewModel * _searchViewModel; // +0x108
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x110
    MMLiveGameRecentlyPalyedView * _recentlyPalyedView; // +0x118
    long long _gameLiveEntryScene; // +0x120
    WCFinderGameLiveListHeaderView * _headerView; // +0x128
    MMFinderLiveGameUserInfo * _selectGameUserInfo; // +0x130
    WCFinderTabPageView * _tabPageView; // +0x138
    MMFinderGameLiveTabPageViewModel * _viewModel; // +0x140
    NSMutableDictionary * _pageAdapterDict; // +0x148
}
- (id)initWithTaskId:(id)arg1 gameCategoryList:(id)arg2 gameUserInfoList:(id)arg3 isSearchVC:(BOOL)arg4 selectGameUserInfo:(id)arg5;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)layoutUI;
- (void)initBackgroundView;
- (void)addGestureToResignInputView:(id)arg1;
- (void)layoutNoSearchResultTipsLabel;
- (id)createSearchTableFooterView;
- (void)hideFooterView;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)layoutActivityIndicatorView;
- (void)startSearchLoading;
- (void)stopSearchLoading;
- (id)searchBar;
- (id)tableView;
- (id)genTableHeaderView;
- (id)searchButton;
- (void)onSearchButtonClicked;
- (id)headerTitle;
- (void)mmsearchBarResignActive;
- (void)mmsearchBarBecomeActive;
- (void)onBackButtonClicked;
- (void)onSelectGameToStartLive;
- (id)topNavigationController;
- (void)startGameLive;
- (void)internalStartGameLive;
- (id)tabPageView;
- (id)pageAdapterDict;
- (id)viewModel;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (id)tabViewContainerInFinderTabPageView:(id)arg1;
- (double)heightForTabViewContainerInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (id)emptyTipsConfigInFinderTabPagView:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 gamePageViewManager:(id)arg3 gameUserInfo:(id)arg4;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)finderTabPageView:(id)arg1 willSelectFilterAtIndex:(unsigned long long)arg2;
- (id)managerAtTabIndex:(unsigned long long)arg1;
- (id)managerAtTabIndex:(unsigned long long)arg1 filterIndex:(unsigned long long)arg2;
- (void)onListViewControllerDidelectWithgameUserInfo:(id)arg1 gamePageViewManager:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)canJumpToGamePrepareLiveView:(id)arg1;
- (void)showRecentlyPlayGameView;
- (void)showTableViewWithInitialGameList;
- (void)showTableViewWithSearchGameList;
- (void)onSearchVMModelUpdateFinished;
- (void)gameSearchBarTextDidBeginEditing:(id)arg1;
- (void)gameBeginBeginEditing;
- (void)gameSearchBarCancel:(id)arg1;
- (void)gameSearchBarClear:(id)arg1;
- (void)gameSearchBarWillSearch:(id)arg1 searchText:(id)arg2;
- (void)onGetGameContinueSearchResult:(id)arg1 hasNext:(BOOL)arg2;
- (void)handleAfterGetSearchResultWithNextFlag:(BOOL)arg1;
- (void)onGetMostRecentlyPlayGames:(id)arg1;
- (void)onRecentlyPlayGameClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onMaskTap;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)getScrollView;
- (id)getCurrentLeftButton;
- (id)geCloseButton;
- (id)geBackButton;
- (id)headerView;
- (void)onHeaderAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showSearch;
- (void)setShowSearch:(BOOL)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)noSearchResultTipsLabel;
- (void)setNoSearchResultTipsLabel:(id)arg1;
- (id)tableTopSeperator;
- (void)setTableTopSeperator:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void)setSearchButton:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (id)gameUserInfoList;
- (void)setGameUserInfoList:(id)arg1;
- (id)initialGameUserInfoList;
- (void)setInitialGameUserInfoList:(id)arg1;
- (id)recentlyPlayGameUserInfoList;
- (void)setRecentlyPlayGameUserInfoList:(id)arg1;
- (BOOL)isShowGameSearchResult;
- (void)setIsShowGameSearchResult:(BOOL)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)lastSelectedIndexPath;
- (void)setLastSelectedIndexPath:(id)arg1;
- (id)gameLiveVM;
- (void)setGameLiveVM:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)searchViewModel;
- (void)setSearchViewModel:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)recentlyPalyedView;
- (void)setRecentlyPalyedView:(id)arg1;
- (long long)gameLiveEntryScene;
- (void)setGameLiveEntryScene:(long long)arg1;
- (BOOL)isSearchVC;
- (void)setIsSearchVC:(BOOL)arg1;
- (void)setHeaderView:(id)arg1;
- (id)selectGameUserInfo;
- (void)setSelectGameUserInfo:(id)arg1;
- (void)setTabPageView:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setPageAdapterDict:(id)arg1;
- (void).cxx_destruct;
@end
