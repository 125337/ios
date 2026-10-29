@interface MMLiveGamePlayTogetherOperationPanel : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMLiveGamePlayTogetherTableViewCellDelegate, WCFinderLiveExt, MMLiveTaskMgrExt, MagicLiveCardServiceExt>
{
    BOOL _hasData; // +0x8
    BOOL _pendingHideLoading; // +0x9
    BOOL _notFirstTimeAppear; // +0xa
    BOOL _isFetchingNextPage; // +0xb
    unsigned int _curJoinTeamMode; // +0xc
    id <MMLiveGamePlayTogetherOperationPanelDelegate> _delegate; // +0x10
    id <MMLiveGamePlayTogetherOperationPanelDataSource> _dataSource; // +0x18
    NSString * _appId; // +0x20
    FinderLiveGamePlayTogether * _togetherInfo; // +0x28
    MMFinderLiveGameTeamInfo * _gameTeamInfo; // +0x30
    MMFinderLiveTaskId * _taskId; // +0x38
    MMUIView * _contentView; // +0x40
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x48
    MMTableView * _gameTogetherTableView; // +0x50
    MMUILabel * _anchorNoDataTips; // +0x58
    NSMutableArray * _operationItems; // +0x60
    NSString * _dynamicCardRootId; // +0x68
    UILabel * _footerLabel; // +0x70
    NSString * _lastBuffer; // +0x78
    MMLiveGamePlayTogetherJoinTeamItem * _joinTeamItem; // +0x80
    MMLiveGamePlayTogetherJoinTeamCell * _joinTeamCell; // +0x88
    MMLiveGamePlayTogetherJoinTeamSettingItem * _joinTeamSettingItem; // +0x90
    MMLiveGamePlayTogetherJoinTeamSettingCell * _joinTeamSettingCell; // +0x98
}
- (id)initWithTaskId:(id)arg1 appId:(id)arg2 fetchData:(BOOL)arg3;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)setupDatas;
- (void)setupDynamicCardEnv;
- (void)setupPageSheetConfig;
- (void)updateNavBarUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContentView;
- (void)layoutTableView;
- (void)layoutActivityIndicatorView;
- (void)layoutAnchorNoDataTips;
- (void)initAnchorDataWith:(id)arg1;
- (void)updateAnchorDataWith:(id)arg1;
- (void)initAudienceDataWith:(id)arg1 teamInfo:(id)arg2;
- (void)appendOperationItemsWith:(id)arg1;
- (void)fetchDataForTeamInfo;
- (void)fetchData;
- (void)fetchDataWithParams:(id)arg1;
- (void)fetchDataForManagerInLiveWithParams:(id)arg1;
- (void)fetchDataForManagerInStarterWithParams:(id)arg1;
- (void)fetchDataForAudienceWithParams:(id)arg1;
- (void)setupRightButton;
- (void)genOperationItemsWithInfo:(id)arg1;
- (void)genJoinTeamSettingItem;
- (void)genJoinTeamItemWith:(id)arg1;
- (void)updateTeamInfoCellWith:(id)arg1;
- (void)stopDynamicCard;
- (id)getAllDynamicCardItems;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (void)pageSheetDidAppear;
- (void)_jumpToGameLiveAppVC;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (id)liveTask;
- (double)contentWidth;
- (double)contentHeight;
- (BOOL)isLandscape;
- (id)createFooterView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getCellWithTableView:(id)arg1 item:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)fetchNextPageDataIfNeed;
- (void)fetchNextPageData;
- (void)onClickJoinTeamCell;
- (void)onClickJoinTeamSettingCell;
- (void)onCellTeamUpStartButtonClicked:(BOOL)arg1;
- (void)onClosePlayTogetherActionSheet:(id)arg1;
- (void)onFirstFrameRendered:(id)arg1;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)onLiveViewControllerDidAppear:(id)arg1;
- (id)audienceLogReporter;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)togetherInfo;
- (void)setTogetherInfo:(id)arg1;
- (id)gameTeamInfo;
- (void)setGameTeamInfo:(id)arg1;
- (BOOL)hasData;
- (void)setHasData:(BOOL)arg1;
- (BOOL)pendingHideLoading;
- (void)setPendingHideLoading:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)gameTogetherTableView;
- (void)setGameTogetherTableView:(id)arg1;
- (id)anchorNoDataTips;
- (void)setAnchorNoDataTips:(id)arg1;
- (id)operationItems;
- (void)setOperationItems:(id)arg1;
- (id)dynamicCardRootId;
- (void)setDynamicCardRootId:(id)arg1;
- (BOOL)notFirstTimeAppear;
- (void)setNotFirstTimeAppear:(BOOL)arg1;
- (unsigned int)curJoinTeamMode;
- (void)setCurJoinTeamMode:(unsigned int)arg1;
- (id)footerLabel;
- (void)setFooterLabel:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isFetchingNextPage;
- (void)setIsFetchingNextPage:(BOOL)arg1;
- (id)joinTeamItem;
- (void)setJoinTeamItem:(id)arg1;
- (id)joinTeamCell;
- (void)setJoinTeamCell:(id)arg1;
- (id)joinTeamSettingItem;
- (void)setJoinTeamSettingItem:(id)arg1;
- (id)joinTeamSettingCell;
- (void)setJoinTeamSettingCell:(id)arg1;
- (void).cxx_destruct;
@end

