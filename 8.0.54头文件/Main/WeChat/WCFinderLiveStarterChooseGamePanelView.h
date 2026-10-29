@interface WCFinderLiveStarterChooseGamePanelView : MMPageSheetBaseView <WCFinderGameLiveListViewControllerDelegate, MMFinderLiveStarterChooseGameSearchDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate>
{
    BOOL _showSearch; // +0x8
    id <MMFinderLiveStarterChooseGameDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    WCFinderGameLiveListViewController * _gameListViewController; // +0x20
    MMLiveTaskId * _liveTaskId; // +0x28
    NSMutableArray * _gameUserInfoList; // +0x30
    WCFinderLiveStarterChooseGameSearchPanelView * _searchPanelView; // +0x38
    MMFinderLiveGameUserInfo * _selectGameUserInfo; // +0x40
    WCFinderTabPageView * _tabPageView; // +0x48
    NSArray * _gameCategoryList; // +0x50
}
- (void)updateWithTaskId:(id)arg1 gameCategoryList:(id)arg2 gameUserInfoList:(id)arg3 showSearch:(BOOL)arg4 selectGameUserInfo:(id)arg5;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(id)arg1 currentController:(id)arg2;
- (void)onMMLiveStarterViewControllerRepoortWithActionType:(unsigned long long)arg1 gameId:(id)arg2;
- (void)pageSheetWillAppear;
- (void)leftButtonAction;
- (void)onSearchAction;
- (void)createSearchPanelView;
- (void)onHeaderAction;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)gameListViewController;
- (void)setGameListViewController:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)gameUserInfoList;
- (void)setGameUserInfoList:(id)arg1;
- (BOOL)showSearch;
- (void)setShowSearch:(BOOL)arg1;
- (id)searchPanelView;
- (void)setSearchPanelView:(id)arg1;
- (id)selectGameUserInfo;
- (void)setSelectGameUserInfo:(id)arg1;
- (id)tabPageView;
- (void)setTabPageView:(id)arg1;
- (id)gameCategoryList;
- (void)setGameCategoryList:(id)arg1;
- (void).cxx_destruct;
@end

