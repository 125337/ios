@interface FindFriendEntryViewController : MMTabBarBaseViewController <MMCleanCacheMgrExt, MainTableDelegate, IWebSearchRedPointMgrExt, SettingDiscoverEntranceBroadCast, MMWebViewDelegate, IUpdateProfileMgrExt, IWSSearchUtilExtension, MMNewTipsMgrExt, WCFinderRedDotNotifyExt, WCFinderRedDotExt, WCFinderDebugExt, WCFinderTimelineTabViewControllerDelegate, GameLifeDataServiceExt, MMLimitedModeExt, WCFinderSwitchExt, WCFinderRictTextTipsViewControllerDelegate, IExptServiceExt, WCFinderNearbyTabPageViewControllerDelegate, WCFinderLiveHomePageViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, NewLifeRedDotNotifyExt, ShakeViewDelegate, UITableViewDataSource, UITableViewDelegate, WCFacadeExt, WCTimeLineViewControllerDelegate, FriendAsistSessionExt, ISettingExtChange, ShakeMgrExt, MMConfigMgrExt, IOnlineClientMgrExt, WCActionSheetDelegate, IMMFontMgrExt, IWCJdBussinessMgrExt, IGameCenterExt, IGameCenterMsgNotifyExt, MMWebImageViewDelegate, ISearchConfigDataExt, IWCLabsMgrExt>
{
    BOOL m_bNeedToDestroySelf; // +0x68
    BOOL m_bBeingAppear; // +0x69
    BOOL m_findTabHasShow; // +0x6a
    BOOL m_isOnAppearState; // +0x6b
    NSString * m_gameCenterNoticeID; // +0x70
    NSString * m_gameCenterAppIDForStat; // +0x78
    unsigned int _startTime; // +0x80
    GameIndexSettingControl * m_gameEntrySetting; // +0x88
    NSString * m_ffBrowseReddotMsgIdDuringSelect; // +0x90
    long long finderPrefetchTimingSeconds; // +0x98
    NSString * m_hadRptRedSnsId; // +0xa0
    NSString * m_lastExposeSnsId; // +0xa8
    BOOL m_reportJdExposeAtAppear; // +0xb0
    BOOL m_hasGameLifeReddot; // +0xb1
    BOOL m_hasInitData; // +0xb2
    MMMainTableView * m_tableView; // +0xb8
    stEntryRow * m_aryEntryRow; // +0xc0
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapSectionType; // +0xc8
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAlbum; // +0xe0
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSocial; // +0xf8
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeMotion; // +0x110
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeSearch; // +0x128
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeOpen; // +0x140
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeWCO; // +0x158
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeAppBrand; // +0x170
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapRowToRowTypeFinder; // +0x188
    NSIndexPath * m_WCTimeLineIndexPath; // +0x1a0
    WCDataItem * m_latestSeenDataItem; // +0x1a8
    WCDataItem * m_latesetDataItem; // +0x1b0
    NSIndexPath * m_lbsIndexPath; // +0x1b8
    NSIndexPath * m_shakeIndexPath; // +0x1c0
    NSIndexPath * m_gameIndexPath; // +0x1c8
    BOOL m_needDoGameSync; // +0x1d0
    NSIndexPath * m_WCFinderIndexPath; // +0x1d8
    WCTimeLineViewController * m_timelineViewController; // +0x1e0
    MMTimer * m_timelineCacheTimer; // +0x1e8
    MMHeadImageView * m_timelineHeadView; // +0x1f0
    UIImageView * m_timelineRedDotView; // +0x1f8
    BOOL m_inTimeline; // +0x200
    BOOL m_hasWeAppReportedCellExposal; // +0x201
    long long m_gameNotifyType; // +0x208
    BOOL _hasFinderEntranceRedDotBefore; // +0x210
    BOOL _lastLiveEntranceSwitch; // +0x211
    BOOL _isShowingMomentsRedDot; // +0x212
    WCFinderTimelineTabViewController * _finderTimelineTabVC; // +0x218
    WCFinderLifeHomeViewController * _finderLifeHomeVC; // +0x220
    UIView * _allEntriesClosedHintView; // +0x228
    WCFinderNearbyTabPageCacheModel * _nearbyCacheModel; // +0x230
    NSMutableArray * _finderContextIdArray; // +0x238
    MMTimer * _finderCacheTimer; // +0x240
    MMTimer * _finderLiveCacheTimer; // +0x248
    MMTimer * _nearbyLiveCacheTimer; // +0x250
    WCFinderLiveHomePageViewController * _liveHomePageVC; // +0x258
    FindFriendRedDotEventSender * _redDotEventSender; // +0x260
    FindFriendRedDotReporter * _redDotReporter; // +0x268
}
+ (BOOL)shouldCheckFinderRedDotErrorCase;
+ (BOOL)shouldCheckErrorCase;
+ (id)buildSystemNaviTitleLabel;
+ (id)findNaviTitle;
+ (id)needExposeRedDotPaths;
- (id)fakeTitleView;
- (void)setFakeTitleView:(id)arg1;
- (id)fakeNavBarView;
- (void)setFakeNavBarView:(id)arg1;
- (void)notifyProtectLogicAtViewDidAppear;
- (void)tryClearFinderRedDotOnNaviBar;
- (void)tryFixFinderNavInvalid;
- (void)notifyProtectLogicAtViewWillDisappear;
- (id)getCurrentNaviContentView;
- (id)getCurrentNaviBar;
- (id)getCurrentNaviController;
- (void)markAbnormalType:(unsigned int)arg1;
- (void)initRow;
- (void)resetRowType;
- (void)resetSectionType;
- (void)pluginsChanged:(id)arg1;
- (void)reloadData;
- (BOOL)checkAndReloadData;
- (void *)getRowMapPointerBySectionType:(long long)arg1;
- (id)flatAllRowData;
- (BOOL)isSameFlatArray:(id)arg1 withOtherArray:(id)arg2;
- (void)tryInit;
- (void)initRedDotEventSender;
- (BOOL)enableTriggerFinderPrefetchLogicAfterRedDotCheck;
- (void)triggerFinderPrefetchDataNeedConfCheck:(BOOL)arg1 needSecondsCheck:(BOOL)arg2 needRedDotCheck:(BOOL)arg3 ignoreIntevalConfCheck:(BOOL)arg4;
- (void)triggerNewLifePrefetchDataNeedConfCheck:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)preloadFlutterEngineGroup;
- (void)openNearByLiveVC;
- (void)updateNearbyContextIdWithSelectType:(unsigned long long)arg1;
- (int)getNearbyLiveCommentScene:(unsigned long long)arg1;
- (unsigned long long)getNearbySelectedType;
- (void)prefetchDiscoveryLiveDataIfNeedWithType:(unsigned long long)arg1;
- (void)prefetchFinderDataByRedDotIfNeeded;
- (void)prefetchLongVideoDataIfNeeded;
- (void)getLongVideoListCGIWithTabType:(int)arg1 finderCtrlInfo:(id)arg2;
- (void)checkPrefetchLongVideoChannelFlow;
- (void)prefetchFinderRedDotPinToTopObjectIfNeeded;
- (void)prefetchFinderDataIfNeedWithType:(unsigned long long)arg1;
- (int)getFinderEntryTargetTabType;
- (void)openFinderIfNeeded;
- (void)openFinderLiveEntry;
- (void)openFinderLiveEntryFromScene:(unsigned int)arg1;
- (void)tryDirectlyOpenFinderLiveWithRedDotExtInfo:(id)arg1 redDotControlInfo:(id)arg2 redDotPath:(id)arg3;
- (id)liveReddotChannelExtra:(id)arg1 showInfo:(id)arg2 redDotExtInfo:(id)arg3;
- (void)showFinderEnterTips;
- (void)onClickFindPageFinderCell;
- (id)_enterFinderEntryWithParams:(id)arg1;
- (unsigned long long)_getOpenFinderTimelineForceJumpTabTypeWith:(unsigned long long)arg1 redDotExtInfo:(id)arg2;
- (void)setFinderTimelineTabVC:(id)arg1;
- (void)_openFinderTimelineWithParams:(id)arg1;
- (void)buildFinderLocalRedDot;
- (void)buildForTemplatePostEdu;
- (void)goToShakeWithAnimate:(BOOL)arg1;
- (void)openShakeFromInnerWithAnimate:(BOOL)arg1;
- (void)openShakeWithAnimate:(BOOL)arg1;
- (void)OnShakeVCDealloc;
- (id)preOpenAlbumView;
- (void)onWCTimeLineViewControllerLeaveForFinderEntranceWithPostSession:(id)arg1;
- (void)onWCTimeLineViewControllerLeaveForFinderPersonalCenter;
- (void)pushFinderTimelineFromOtherSceneWithPrams:(id)arg1;
- (void)doHiglightCellForEntrySection:(unsigned long long)arg1 rowType:(unsigned long long)arg2;
- (id)indexPathForEntrySection:(unsigned long long)arg1 rowType:(unsigned long long)arg2;
- (void)openNearByLifeVC;
- (void)openAlbumAnimated:(BOOL)arg1;
- (void)openAlbumAnimated:(BOOL)arg1 andScrollToTop:(BOOL)arg2;
- (void)openAlbum;
- (void)openAlbum:(id)arg1;
- (void)openAlbumAndPublish;
- (void)openAlbumAndPublishText;
- (void)closeAlbum;
- (void)onCloseAlbumTimeOut;
- (void)doSelectCell:(long long)arg1;
- (void)triggerGlobalRedDotFrequencyClickAction:(long long)arg1 businessType:(unsigned long long)arg2 hasRedDot:(BOOL)arg3 isIgnoreRedDot:(BOOL)arg4;
- (long long)getTotalEntryCount;
- (long long)getEntryWithRedDotCount;
- (long long)getDiscoveryRedDotType;
- (long long)getRowsCountInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateJDStoreEntry;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)isCurrentGameDotHalfExposure;
- (void)updateGameEntryRedExposure;
- (void)updateGameDotHalfExposureState;
- (void)reportGameHalfExposureOver1Seconds;
- (void)onGameEntryRedPointExposured;
- (void)onGameEntryRedPointCompleteExposured;
- (void)regetCurrentGameEntryRedDotInfo:(BOOL)arg1;
- (void)generateFndGameEntryRedDotInfo:(id)arg1 msg:(id)arg2;
- (void)generateFndGameEntryRedDotInfo:(id)arg1 msg:(id)arg2 gameLifeInfo:(id)arg3 forceReload:(BOOL)arg4;
- (void)showGameLifeRedpointEntranceWithMsg:(id)arg1 gameEntryNotify:(id)arg2;
- (void)handleGameLifeRedpointEntranceInfo:(id)arg1 msg:(id)arg2 gameEntryNotify:(id)arg3;
- (void)setUpGameEntryWithGameLifeInfo;
- (void)repotGameLifeRedDot;
- (void)reportFindExtryExposure;
- (void)makeGameCenterCell:(stEntryRow *)arg1 cell:(id)arg2;
- (void)setUpGameRowEntry;
- (void)reloadGameRow;
- (id)getGameLiveSpecialReddotStr;
- (void)preloadGameCenterWebViewControllerIfNeed;
- (void)openGameCenter;
- (void)openGameCenter:(unsigned int)arg1;
- (id)getGameCenterHomeViewController:(unsigned int)arg1 EntranceRedDot:(id)arg2;
- (BOOL)getSearchBadgeViewWithRedPointInfo:(id)arg1 numRedPointInfo:(id)arg2 entryRow:(stEntryRow *)arg3;
- (BOOL)configWebSearchRedDotEntry:(id)arg1 entryRow:(stEntryRow *)arg2;
- (void)makeEntryCell:(id)arg1 rowType:(unsigned long long)arg2;
- (void)finderSerialEntranceReportRowType:(unsigned long long)arg1 leftView:(id)arg2 rightView:(id)arg3 contentView:(id)arg4;
- (void)bindFinderRedDotByAsPath:(id)arg1 bindView:(id)arg2 contentView:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)noteFinderFrameworkRedDotExposeActionFromPath:(id)arg1 cell:(id)arg2;
- (void)tryFixTingMentionEntranceCount;
- (void)disposeTingRootMentionShowInfo;
- (void)prepareExposeTingCell;
- (void)makeTingCell:(stEntryRow *)arg1 cell:(id)arg2;
- (void)makeFinderCell:(stEntryRow *)arg1 cell:(id)arg2;
- (CGRect)getCellAvailableRect:(id)arg1 rowType:(unsigned long long)arg2;
- (void)_updateFinderCellAccessibilityLabel:(id)arg1;
- (void)makeWebSearchCell:(id)arg1 entry:(stEntryRow *)arg2;
- (void)makeBrowseCell:(id)arg1 entry:(stEntryRow *)arg2;
- (void)makeFinderNearbyCell:(stEntryRow *)arg1 cell:(id)arg2;
- (BOOL)checkCanNearbyShowRedDot;
- (void)setupNearbyEduRedDotIfNeedWithEntry:(stEntryRow *)arg1;
- (void)makeFinderLiveCell:(stEntryRow *)arg1 cell:(id)arg2;
- (void)openNewLifeDebug:(id)arg1;
- (BOOL)disposeNewTipsWithPathKey:(id)arg1;
- (id)getRightImageViewWithUrl:(id)arg1 forRowType:(unsigned long long)arg2;
- (void)configBadgeReddot:(stEntryRow *)arg1 Badge:(id)arg2;
- (void)configTitleReddot:(stEntryRow *)arg1 Title:(id)arg2;
- (void)configIconReddot:(stEntryRow *)arg1 Title:(id)arg2 IconUrl:(id)arg3;
- (void)configNewTipsReddot:(stEntryRow *)arg1;
- (void)resetReddot:(stEntryRow *)arg1;
- (void)handleSelectedEntryCell:(unsigned long long)arg1;
- (void)handleJDStoreCell;
- (void)handleWCOEntry;
- (void)handleAppBrandEntry;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfUnreadAtTab;
- (long long)numberOfFinderCellWithTotalCount:(long long)arg1;
- (long long)numberOfUnreadAtMomentCell;
- (long long)numberOfUnreadAtTopStoriesCell;
- (BOOL)shouldShowTabBarBadgeForWCUploadFail;
- (void)updateTabBarBadge;
- (BOOL)badgeAtTab;
- (long long)getBusinessFlagShowOnBadge;
- (BOOL)badgeAtMomentCell;
- (BOOL)badgeAtTopStoriesCell;
- (void)willAppear;
- (void)updateViewWhenSelectTab:(BOOL)arg1;
- (void)initTableView;
- (void)initTitle;
- (void)initView;
- (void)initRedDotReporter;
- (void)viewDidLoad;
- (void)addObserverForForegroundNotification;
- (void)viewDidTransitionToNewSize;
- (void)statViewOrClickJDCell:(unsigned int)arg1 reportType:(unsigned int)arg2;
- (void)checkIfAnimationFail;
- (void)viewWillAppear:(BOOL)arg1;
- (void)tryPreloadFFBrowseWebview;
- (void)tryPreloadFFSearchWebview;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_reportFindPageEntryExposeAction;
- (void)triggerFinderSerialEntryRedDotExpose;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)triggerFinderReportAction;
- (void)viewDidLayoutSubviews;
- (void)reportFFBrowseRedDotExposed;
- (void)reportFFBrowseRedDotAction:(id)arg1 andNumRedDotCount:(unsigned int)arg2 andMsgid:(id)arg3;
- (void)reportFFSearchEntranceExpose;
- (void)reportFinderDiscoveryRedDotAction:(long long)arg1;
- (void)reportNearbyRedDotClick;
- (void)reportNearbyLiveRedDotFailIfNeed:(unsigned long long)arg1;
- (void)reportFinderLiveRedDotClick;
- (void)rptSnsRedDotDisplay:(id)arg1;
- (void)rptEnterTimeLine:(id)arg1;
- (void)reportIPadCompactAction;
- (id)allTingReddotPath;
- (void)onTingNativeReddotEvent:(int)arg1 ctrlInfo:(id)arg2 path:(id)arg3;
- (id)prepareLaunchOptionsBeforeOpenTingEntry;
- (void)openTingEntry;
- (void)openLBS;
- (void)openCameraScan:(int)arg1;
- (void)openCameraScan:(id)arg1 cameraScanType:(int)arg2;
- (void)openWeAppDestopForScene:(unsigned long long)arg1;
- (BOOL)shouldUseSimulatedNativeDestop;
- (void)openWeAppDestopWithAnimate:(BOOL)arg1;
- (void)clickOpenSearchEntry;
- (void)openSearchEntryWithParams:(id)arg1;
- (void)openSearchEntryWithParams:(id)arg1 isFromClick:(BOOL)arg2;
- (void)openBrowseEntry;
- (id)prepareNewLifePrefetchParamsWith:(id)arg1;
- (void)newlifeReddotJumpWith:(id)arg1 jumpParam:(id)arg2;
- (void)k1kReddotJumpWith:(id)arg1 showInfo:(id)arg2 isRedDotOpt:(unsigned char)arg3;
- (void)judgeK1kTabBeforeEnter;
- (id)preOpenWSLocalWebView;
- (BOOL)shouldShowTingEntry;
- (BOOL)shouldShowBrowseEntry;
- (BOOL)shouldShowSearchEntry;
- (BOOL)shouldShowScanQRCodeEntry;
- (BOOL)shouldShowJDStoreEntry;
- (BOOL)shouldShowGameEntry;
- (BOOL)shouldShowAppBrandEntry;
- (BOOL)shouldShowWCOEntry;
- (BOOL)shouldShowShakeEntry;
- (BOOL)shouldShowFinderLiveEntryRedDot;
- (BOOL)shouldShowNearbyLiveEntry;
- (BOOL)shouldShowNearbyLiveEntryRedDot;
- (BOOL)shouldShowFFBrowseRedDot;
- (BOOL)isMomentsShowingRedDot;
- (BOOL)tryCleanLiveEntranceCache;
- (id)getSnsRedDotShownTid;
- (void)updateWCTimeLineView:(id)arg1;
- (void)disposeIndependentFinderRedDotOnTab;
- (id)descriptionForMomentsDataItem:(id)arg1;
- (BOOL)validateMomentsCreateTimeForDataItem:(id)arg1;
- (void)onLatestWCObjectChanged:(id)arg1;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onMarkWCObjectAsRead:(id)arg1;
- (void)onTimeLineViewReturn;
- (void)onFriendAssistUnreadCountChanged;
- (void)onSettingExtChanged:(long long)arg1;
- (void)onShakeStatusChanged;
- (void)onShakeMsgUnreadCountChanged;
- (void)onGameEntryChanged;
- (void)onGameMessageUnReadCountChanged;
- (void)onGameGiftInfoChanged;
- (void)onGameNewAppCountChanged;
- (void)onNewGameAdChanged;
- (void)onGameCenterFindEntryChange;
- (void)onJdBussinessEntranceChanged;
- (void)onJdBussinessReloadTip;
- (void)onJdBussinessRecvBewXml;
- (void)onMMDynamicConfigUpdated;
- (void)onMarkTimelineListReadWithTid:(id)arg1 andCreateTime:(unsigned long long)arg2;
- (void)onFontSizeChange;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)webViewWithURL:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)onCacheMgrCleanCacheWarning;
- (void)onConversationUpdated;
- (void)onGameCenterMessageReceived;
- (void)onGameCenterClearAllRedDot;
- (void)onGameCenterEntryIconStatusChanged;
- (void)onGameCenterDeleteAllMsg;
- (void)onGameCenterDeleteOneMsg:(unsigned int)arg1;
- (void)onGameCenterUpdateGameLifeFindDot;
- (void)onGameCenterEntryReExposure;
- (void)reloadGameRowIndexPath;
- (id)indexPathForGameRow;
- (void)onLoadImageOK:(id)arg1;
- (void)initSearchInfo;
- (void)updateSearchInfo;
- (void)onSearchConfigDataFailToUpdate;
- (void)onSearchConfigDataUpdated;
- (void)onLabAppSwitchChanged:(id)arg1;
- (void)onWebSearchRedPointChange:(id)arg1;
- (void)onWebRecommendTabDataChange:(BOOL)arg1;
- (void)onRemoveRecommendNumberReddot:(id)arg1;
- (void)onRemoveRecommendReddot;
- (void)setupAllEntriesClosedHintView;
- (void)checkAndShowAllEntriesClosedHintView;
- (void)onEnterSettingView;
- (void)onDiscoverEntranceSettingType:(unsigned long long)arg1 isShow:(BOOL)arg2;
- (void)clearNearbyPeopleRedDotIfNeed;
- (void)onDiscoverPageReddotSettingChangedForEntranceType:(unsigned long long)arg1 isShow:(BOOL)arg2;
- (void)onProfileChange;
- (void)tryPreloadWebRecommendPage;
- (id)webRecommendReddotId;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)_handleFinderDiscoveryRedDotLogic:(id)arg1;
- (BOOL)finderTimelineIsInNavigationController;
- (void)_handleFinderBusinessRedDotLogicIfNeed:(id)arg1;
- (void)finderRedDotDataReceiveWithPathKey:(id)arg1 isAlreadExistRedDot:(BOOL)arg2;
- (void)finderRedDotDataHitFrequencyAtPath:(id)arg1 ctrlInfo:(id)arg2;
- (void)onFinderNotifyFinderRedDotStatusChange;
- (void)onNewLifeNotifyRedDotAppearnceChanged;
- (void)reinitFeedTimeline;
- (void)reinitLifeHome;
- (void)onFinderTimeLineTabViewWillReturn;
- (void)onFinderTimeLineTabViewDidBePoped;
- (void)removeFinderVCCache;
- (void)removeFinderLifeHomeVCCache;
- (void)onNearbyLiveTabPageViewControllerReturn;
- (void)removeNearbyLiveVCCache;
- (void)onFinderLiveHomePageReturn;
- (void)removeFinderLiveVCCache;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)finderLimitModeChanged;
- (void)nearbyLimitModeChanged;
- (void)liveLimitModeChanged;
- (void)finderNearbyLiveSwitchChange;
- (void)noteEntryRedDot:(long long)arg1 andHadRedDot:(BOOL)arg2;
- (void)noteEntrySwitch;
- (void)noteTabBarBadge:(BOOL)arg1 andTotalCount:(long long)arg2;
- (void)finderLiveNewEntranceSwitchChange;
- (void)finderBrowseLongVideoSwitchChange;
- (void)tipsVCClickConfirmButton:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onExptItemListChange;
- (void)preloadFinderResource;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (void)registerYReportSdk;
- (void)reportTingEnter31087:(id)arg1;
- (void)bindFinderViewController:(id)arg1 andLeftPath:(id)arg2 andRightPath:(id)arg3;
- (void)bindLiveViewController:(id)arg1 withRedDotInfo:(id)arg2 withShowInfo:(id)arg3;
- (void)mainTabBarController:(id)arg1 transitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)m_shakeIndexPath;
- (void)setM_shakeIndexPath:(id)arg1;
- (id)m_gameIndexPath;
- (void)setM_gameIndexPath:(id)arg1;
- (id)m_lbsIndexPath;
- (void)setM_lbsIndexPath:(id)arg1;
- (id)finderTimelineTabVC;
- (id)finderLifeHomeVC;
- (void)setFinderLifeHomeVC:(id)arg1;
- (id)allEntriesClosedHintView;
- (void)setAllEntriesClosedHintView:(id)arg1;
- (BOOL)hasFinderEntranceRedDotBefore;
- (void)setHasFinderEntranceRedDotBefore:(BOOL)arg1;
- (id)nearbyCacheModel;
- (void)setNearbyCacheModel:(id)arg1;
- (BOOL)lastLiveEntranceSwitch;
- (void)setLastLiveEntranceSwitch:(BOOL)arg1;
- (id)finderContextIdArray;
- (void)setFinderContextIdArray:(id)arg1;
- (id)finderCacheTimer;
- (void)setFinderCacheTimer:(id)arg1;
- (id)finderLiveCacheTimer;
- (void)setFinderLiveCacheTimer:(id)arg1;
- (id)nearbyLiveCacheTimer;
- (void)setNearbyLiveCacheTimer:(id)arg1;
- (id)liveHomePageVC;
- (void)setLiveHomePageVC:(id)arg1;
- (BOOL)isShowingMomentsRedDot;
- (void)setIsShowingMomentsRedDot:(BOOL)arg1;
- (id)redDotEventSender;
- (void)setRedDotEventSender:(id)arg1;
- (id)redDotReporter;
- (void)setRedDotReporter:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

