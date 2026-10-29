@interface GameLifeChatViewController : GameCenterNativeVc <UITableViewDelegate, UITableViewDataSource, GameLifeDataServiceExt, GameLifeConversationCellDataSourceDelegate, GameLifeLoadingViewDelegate, MMLoadMoreTableViewDelegate, GameLifeConversationCellDelegate>
{
    GameLifeLoadingView * _loadingView; // +0x68
    GameLifeLoadingView * _loadingMoreView; // +0x70
    GameLifeChatEmptyView * _emptyView; // +0x78
    BOOL _showLoadingMore; // +0x80
    BOOL _loadInitialReported; // +0x81
    unsigned int _sourceScene; // +0x84
    GameLifeConversationCellDataSource * _cellDataSource; // +0x88
    MMLoadMoreTableView * _tableView; // +0x90
    GameCenterMessageRedPointInfo * _redPointInfo; // +0x98
}
- (void)dealloc;
- (void)unregisterExtension;
- (id)init;
- (void)onQuitSessionViewController;
- (BOOL)isParentViewControllerGameLifeTabbarVc;
- (float)getTabBarHeight;
- (void)retry:(id)arg1;
- (double)tableViewTop;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)applicationWillEnterForeground;
- (void)adjustTableViewInset:(id)arg1;
- (long long)dataIndexForTableIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)openGameCenterMsgController:(int)arg1;
- (void)onLoadMore;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onConversationUpdated;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)onGameLifeConversationLoadResultChanged:(unsigned long long)arg1 hasMore:(BOOL)arg2;
- (void)onGameLifeConversationLoadResultError;
- (void)onGameLifeConversationLoadMoreResultChanged:(BOOL)arg1;
- (void)onGameLifeConversationLoadMoreResultError;
- (void)onPanShow:(id)arg1;
- (void)reportAllVisibleConversationItem;
- (void)reportConversationItem:(unsigned int)arg1 actionId:(int)arg2 actionStatus:(id)arg3;
- (void)reportConversationUIExposure;
- (void)reportLoadInitial;
- (unsigned int)getSourceScene;
- (id)navigationBarBackgroundColor;
- (id)navigationController;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (id)cellDataSource;
- (void)setCellDataSource:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)redPointInfo;
- (void)setRedPointInfo:(id)arg1;
- (void).cxx_destruct;
@end

