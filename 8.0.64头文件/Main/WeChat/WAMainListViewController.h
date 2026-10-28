@interface WAMainListViewController : ZZFLEXTableViewController <WAContactMgrExtension, WCActionSheetDelegate, WAAppItemManagerExtension, IWAAppEntryExtension, WAMainListPageLogicDelegate, WAMainListNearByLogicDelegate, WAMainListStarLogicDelegate, WAPermissionMgrExtension, WAMainListNewTipsLogicDelegate, UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    NSMutableArray * m_unStarHistoryItemMenuArray; // +0x70
    NSMutableArray * m_staredHistoryItemMenuArray; // +0x78
    NSMutableDictionary * m_contactViewCache; // +0x80
    WAAppItemData * m_appItemToDelete; // +0x88
    WAAppItemData * m_starItemToDelete; // +0x90
    WAPackageSweeperLogic * m_sweepLogic; // +0x98
    NSString * m_showSessionId; // +0xa0
    BOOL _isShowSearchBar; // +0xa8
    BOOL _isViewHasLayout; // +0xa9
    BOOL _hasClickHistoryItem; // +0xaa
    BOOL _hasClickNearBySection; // +0xab
    BOOL _isViewAppeared; // +0xac
    UIView * _movingFakeCell; // +0xb0
    BOOL _lastSearchBarStatus; // +0xb8
    BOOL _isDuringSearch; // +0xb9
    BOOL _tmpUseForMainFrameSearch; // +0xba
    BOOL _needTargetToHistory; // +0xbb
    int _m_searchScene; // +0xbc
    unsigned long long m_scene; // +0xc0
    NSString * m_relatedUserName; // +0xc8
    NSString * m_sceneNote; // +0xd0
    NSString * _openSession; // +0xd8
    UIPercentDrivenInteractiveTransition * _interactiveTransition; // +0xe0
    UIViewController * _animatedTransitionRespondViewController; // +0xe8
    UISearchBar * _searchBar; // +0xf0
    WeToast * _toastView; // +0xf8
    UIView * _emptyView; // +0x100
    NSDictionary * _searchResult; // +0x108
    WAMainListPageLogic * _pageLogic; // +0x110
    WAMainListNearByLogic * _nearByLogic; // +0x118
    WAMainListStarLogic * _starLogic; // +0x120
    WAMainListMenuLogic * _menuLogic; // +0x128
    UIButton * _entryForSearchApp; // +0x130
    UIImageView * _entryImageViewForSearchApp; // +0x138
    WAOrderInfoLogic * _orderLogic; // +0x140
    WAMainListNewTipsLogic * _tipsLogic; // +0x148
    long long _reportSessionId; // +0x150
    WAMainListReporter * _exposureReporter; // +0x158
    WAMainListReporter * _stayDurationReporter; // +0x160
}
- (id)init;
- (void)setOpenSession:(id)arg1;
- (void)willChangeToSplitMode;
- (void)viewDidTransitionToNewSize;
- (void)updateListData;
- (void)updateEmptyViewState;
- (void)updateRefreshFooterHiddenState;
- (void)updateFooterNoMoreDataState;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setNavigationBarViewsHidden:(BOOL)arg1;
- (void)initCustomNavigationBar;
- (void)updateNavigationItems;
- (void)initTableView;
- (id)genSearchHeaderView;
- (void)onTapSearchArea;
- (void)initRefreshControl;
- (void)onEntryForSearchAppBtnClicked:(id)arg1;
- (void)initEmptyView;
- (void)reloadStarSection;
- (void)reloadNearBySection;
- (void)onReturn;
- (void)onMoreOperate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)loadMoreIfNeeded;
- (void)updateViewStates;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)didFinishFetchNextPageItems:(id)arg1 pageNum:(unsigned int)arg2 beginPos:(unsigned long long)arg3;
- (void)didFinishFetchNextPageItemsErrorWithErrCode:(int)arg1;
- (void)appItemDidStaredSuccess:(id)arg1;
- (void)appItemDidStaredFailedWithCountLimit:(id)arg1;
- (void)appItemDidStaredFailedWithUnknownError:(id)arg1;
- (void)appItemDidUnStaredSuccess:(id)arg1;
- (void)appItemDidUnStaredFailedWithUnknownError:(id)arg1;
- (void)starDataDidUpdated;
- (void)onWeAppItemStared:(id)arg1;
- (void)onWeAppItemUnStared:(id)arg1;
- (void)onWeAppItemBatchMoved:(id)arg1;
- (void)onFirstTimeGetNearByInfo;
- (void)onNearByInfoTriggerUpdated;
- (void)onGetNearByInfoFailedWithErrCode:(int)arg1;
- (void)onGetNearByInfoFailedWithLocationInvalid;
- (void)onClickLiveAppCell;
- (void)onClickFriendsLikeAppCell;
- (void)onClickNearbyCell;
- (void)doClickNearbyCellAfterCheckAuthorization;
- (void)onOpenNear;
- (void)onClickMyAppCell;
- (void)onClickShoppingCartCell;
- (id)historyViewModelArrayByItems:(id)arg1;
- (void)onClickHistoryItem:(id)arg1;
- (void)onOpenNearWeApps;
- (void)onModifyWeAppContact:(id)arg1;
- (void)checkAndUpdateContactInList:(id)arg1;
- (void)checkAndUpdateContactForUsernameInList:(id)arg1;
- (void)onSearchPlaceHolderUpdate:(id)arg1;
- (void)requestOrderInfo;
- (void)requestMainListMenuInfo;
- (void)onDeleteAppListItemAtIndexPath:(id)arg1 appItem:(id)arg2;
- (void)starAppItem:(id)arg1 atIndexPath:(id)arg2;
- (void)unstarAppItem:(id)arg1 atIndexPath:(id)arg2;
- (void)deleteHistoryItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)showToast:(id)arg1;
- (void)showTipsViewController:(id)arg1;
- (void)reloadTableView;
- (void)reloadTableViewNonAnimated;
- (id)getContactByUserName:(id)arg1;
- (BOOL)hasRunningAppTask;
- (id)genUnStarHistoryItemMenuArray;
- (id)genStaredHistoryItemMenuArray;
- (void)onWeAppItemOpened:(id)arg1;
- (void)onWeAppItemDeleted:(id)arg1;
- (void)reportDestopStateWhenViewAppear;
- (void)reportDestopOpWithAppItem:(id)arg1 eventId:(unsigned long long)arg2;
- (void)fixTableViewOffset;
- (void)fixTableViewAndSearchBarPos;
- (id)getBottomView;
- (void)onLaunchPermissionUpdateHistoryList:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)animatedTransitionRespondViewController;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)onTextFieldMarkedTextChanged:(id)arg1;
- (void)onNewTipsInfoUpdatedWithPathKey:(id)arg1;
- (void)registerYReportSdk;
- (unsigned long long)m_scene;
- (void)setM_scene:(unsigned long long)arg1;
- (id)m_relatedUserName;
- (void)setM_relatedUserName:(id)arg1;
- (id)m_sceneNote;
- (void)setM_sceneNote:(id)arg1;
- (id)openSession;
- (id)interactiveTransition;
- (void)setInteractiveTransition:(id)arg1;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)tmpUseForMainFrameSearch;
- (void)setTmpUseForMainFrameSearch:(BOOL)arg1;
- (BOOL)needTargetToHistory;
- (void)setNeedTargetToHistory:(BOOL)arg1;
- (int)m_searchScene;
- (void)setM_searchScene:(int)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)toastView;
- (void)setToastView:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)searchResult;
- (void)setSearchResult:(id)arg1;
- (id)pageLogic;
- (void)setPageLogic:(id)arg1;
- (id)nearByLogic;
- (void)setNearByLogic:(id)arg1;
- (id)starLogic;
- (void)setStarLogic:(id)arg1;
- (id)menuLogic;
- (void)setMenuLogic:(id)arg1;
- (id)entryForSearchApp;
- (void)setEntryForSearchApp:(id)arg1;
- (id)entryImageViewForSearchApp;
- (void)setEntryImageViewForSearchApp:(id)arg1;
- (id)orderLogic;
- (void)setOrderLogic:(id)arg1;
- (id)tipsLogic;
- (void)setTipsLogic:(id)arg1;
- (long long)reportSessionId;
- (void)setReportSessionId:(long long)arg1;
- (id)exposureReporter;
- (void)setExposureReporter:(id)arg1;
- (id)stayDurationReporter;
- (void)setStayDurationReporter:(id)arg1;
- (void).cxx_destruct;
@end
