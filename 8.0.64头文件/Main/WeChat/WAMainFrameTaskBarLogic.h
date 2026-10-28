@interface WAMainFrameTaskBarLogic : MMObject <WAAppItemManagerExtension, IMiniMizeUserdRecordUpdateExt, WCFinderLiveExt, WAMainFrameTaskBarViewDelegate>
{
    BOOL _needForceReload; // +0x8
    BOOL _isPullingWhyDragMe; // +0x9
    BOOL _canUseDynamicBackground; // +0xa
    BOOL _isDidShow; // +0xb
    unsigned int _maxTaskCount; // +0xc
    unsigned int _noResponseMsWhenRefresh; // +0x10
    unsigned int _openTime; // +0x14
    unsigned int _commonUseItemsUpdateScene; // +0x18
    id <WAMainFrameTaskBarLogicDelegate> _delegate; // +0x20
    NSMutableArray * _arrWeAppItem; // +0x28
    NSMutableArray * _arrMyWeAppItem; // +0x30
    NSMutableArray * _arrCommonUseWeAppItem; // +0x38
    NSMutableArray * _arrMyWeAppItemWhenShowCommonUse; // +0x40
    NSMutableArray * _arrOtherItem; // +0x48
    WAMainFrameTaskBarSectionWeAppViewModel * _weAppViewModel; // +0x50
    WAMainFrameTaskBarSectionWeAppViewModel * _myWeAppViewModel; // +0x58
    WAMainFrameTaskBarSectionViewModel * _otherViewModel; // +0x60
    NSString * _searchBarPlaceHolder; // +0x68
    NSMutableArray * _firstFeedAppearInfoArray; // +0x70
    MMUIViewController * _containerVC; // +0x78
    NSString * _openSession; // +0x80
    WAReportMainFrameTaskBarActionItem * _actionItem; // +0x88
    WAPackageSweeperLogic * _sweeperLogic; // +0x90
    NSMutableArray * _exceedOtherDataArray; // +0x98
    NSMutableDictionary * _exceedDataType2LastKeepTime; // +0xa0
    unsigned long long _closingPageType; // +0xa8
    TencentLBSLocationManager * _locationMgr; // +0xb0
}
+ (long long)getAliveTimeout;
+ (long long)getAliveTimeoutForListen;
- (id)init;
- (void)setContainerVC:(id)arg1;
- (void)initData;
- (void)preCheckAndUpdateInvalidContactsInScene:(unsigned long long)arg1;
- (void)setMaxTaskCount:(unsigned int)arg1;
- (BOOL)updateContactsFromScene:(unsigned long long)arg1;
- (BOOL)canUseDynamicBackground;
- (BOOL)tableViewIsDragging;
- (void)taskBarDidDragUpToClose:(id)arg1;
- (void)taskBarViewDidSelectSearch;
- (void)taskBarView:(id)arg1 didSelectMore:(BOOL)arg2 moreIconWeAppUsername:(id)arg3;
- (void)taskBarView:(id)arg1 didSelectTaskItem:(id)arg2 onPosition:(unsigned long long)arg3 isMyWeApp:(BOOL)arg4;
- (void)taskBarViewOnEnterForeground:(id)arg1;
- (void)taskBarViewOnEnterBackground:(id)arg1;
- (void)taskBarView:(id)arg1 onStarNodeShowStatusDidChangedTo:(BOOL)arg2;
- (void)taskBarView:(id)arg1 heightDidChangeTo:(double)arg2;
- (void)taskBarViewDidTapOnFoldButton:(id)arg1;
- (void)taskBarViewDidTapOnFakeRightMenuButton:(id)arg1;
- (void)taskBarView:(id)arg1 notifyOnTranslationYChanged:(double)arg2;
- (void)taskBarView:(id)arg1 didRotateToInterfaceOrientation:(long long)arg2;
- (void)didDeleteTaskItemWithUsername:(id)arg1 debugType:(unsigned int)arg2 isMy:(BOOL)arg3;
- (void)closeRunningTaskIfHaveByUsername:(id)arg1 debugType:(unsigned int)arg2;
- (id)getAppidListStr:(id)arg1 limit:(long long)arg2;
- (void)taskBarDidShow;
- (void)updateLatestUsageRecordInfoIfNeeded;
- (void)updateLatestUsageRecordInfo:(unsigned int)arg1 explicitRequestType:(unsigned int)arg2;
- (void)realGetLatestUsageRecordInfo:(id)arg1 scene:(unsigned int)arg2;
- (void)updateLatestUsageRecordInfo:(unsigned int)arg1;
- (id)locationMgr;
- (BOOL)isXDevice;
- (void)taskBarDidHideWithScene:(unsigned long long)arg1 pageType:(unsigned long long)arg2 session:(id)arg3;
- (void)taskBarDidEndDragging;
- (void)startDragToVisible;
- (void)endDragToVisible;
- (void)visibleTick;
- (double)getFullScreenHeight;
- (id)getTaskBarView;
- (id)getRightBarButton;
- (id)getLeftBarButton;
- (void)setTableViewContentOffset:(CGPoint)arg1;
- (void)notifyTapSearchButton;
- (void)onClickSearch:(id)arg1;
- (void)willEndSearch;
- (void)onWeAppItemsInfoUpdatedWithAPageItem:(id)arg1 localLastUpdateTime:(unsigned int)arg2 remoteLastUpdateTime:(unsigned int)arg3 hasMore:(BOOL)arg4 scene:(unsigned int)arg5;
- (void)onWeAppCommonUseItemsInfoUpdated:(id)arg1 commuseConfig:(id)arg2 scene:(unsigned int)arg3;
- (void)onWeAppItemOpened:(id)arg1;
- (void)onWeAppItemDeleted:(id)arg1;
- (void)onWeAppItemBatchMoved:(id)arg1;
- (void)onWeAppItemStared:(id)arg1;
- (void)onWeAppItemUnStared:(id)arg1;
- (void)onWeAppCommonUseItemDeleted:(id)arg1;
- (void)onWeAppItemMoved:(id)arg1 toPreItem:(id)arg2 nextItem:(id)arg3;
- (void)reloadData:(BOOL)arg1;
- (BOOL)shouldBlockTask:(id)arg1;
- (void)reloadOtherData:(BOOL)arg1;
- (void)removeTimeoutData;
- (void)removeExceedData;
- (void)reloadWeAppItems:(BOOL)arg1;
- (void)reloadWeAppItems:(BOOL)arg1 source:(unsigned long long)arg2;
- (BOOL)shouldUpdateTaskBarData;
- (void)fillViewModelDataIfNeeded:(unsigned long long)arg1;
- (void)loadWeAppItemListWithCount:(unsigned int)arg1;
- (void)loadMyWeAppItemList;
- (BOOL)hasCommonUseModule;
- (BOOL)canReloadWhenSpread;
- (id)reloadSectionData:(id)arg1 sectionName:(id)arg2 oldData:(id)arg3;
- (void)removeExceedMultipleSectionData:(id)arg1 sectionName:(id)arg2 data:(id)arg3;
- (void)onRecentUsedTaskChanged;
- (void)onRecentUsedTaskAppended:(id)arg1;
- (void)onRecentUsedTaskRemoved:(id)arg1 inScene:(unsigned int)arg2;
- (id)findLiveTaskData;
- (void)checkLiveItemUpdateIfNeeded:(long long)arg1;
- (void)registerLiveStateObseverForLiveTaskDatas:(id)arg1;
- (void)unregisterLiveStateObsever;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)arg1 coverInfo:(id)arg2;
- (void)reportTaskBarExposure:(unsigned long long)arg1;
- (void)reportTaskBarClose:(unsigned long long)arg1 pageType:(unsigned long long)arg2 session:(id)arg3;
- (void)reportTaskBarWeAppFeedManualAddDeleteMyWeApp:(BOOL)arg1 isFromMyWeApp:(BOOL)arg2 weappData:(id)arg3 position:(long long)arg4;
- (void)reportTaskBarFeedAddDelete:(id)arg1 actionType:(unsigned long long)arg2 actionChannel:(unsigned long long)arg3;
- (void)reportTaskBarWeAppFeedManualAddDelete:(id)arg1 position:(long long)arg2 isMyWeApp:(BOOL)arg3;
- (void)reportWeTaskBarWeAppClickMore:(BOOL)arg1 moreIconUsername:(id)arg2;
- (void)reportWeTaskBarClickSearch;
- (void)reportWeTaskBarFeedClick:(id)arg1 weappData:(id)arg2 position:(long long)arg3;
- (void)reportWeTaskBarWeAppFeedClick:(id)arg1 position:(long long)arg2 isMyWeApp:(BOOL)arg3;
- (void)reportTaskBarFeedAppear:(id)arg1 weappData:(id)arg2 position:(long long)arg3 isMyWeApp:(BOOL)arg4;
- (void)reportTaskBarSectionMoreAppear:(BOOL)arg1 moreIconUsername:(id)arg2 backFromDesktop:(BOOL)arg3;
- (unsigned long long)getMorePageType:(BOOL)arg1;
- (unsigned long long)getWeAppPageType:(BOOL)arg1 weappData:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)arrWeAppItem;
- (void)setArrWeAppItem:(id)arg1;
- (id)arrMyWeAppItem;
- (void)setArrMyWeAppItem:(id)arg1;
- (id)arrCommonUseWeAppItem;
- (void)setArrCommonUseWeAppItem:(id)arg1;
- (id)arrMyWeAppItemWhenShowCommonUse;
- (void)setArrMyWeAppItemWhenShowCommonUse:(id)arg1;
- (id)arrOtherItem;
- (void)setArrOtherItem:(id)arg1;
- (id)weAppViewModel;
- (void)setWeAppViewModel:(id)arg1;
- (id)myWeAppViewModel;
- (void)setMyWeAppViewModel:(id)arg1;
- (id)otherViewModel;
- (void)setOtherViewModel:(id)arg1;
- (id)searchBarPlaceHolder;
- (void)setSearchBarPlaceHolder:(id)arg1;
- (id)firstFeedAppearInfoArray;
- (void)setFirstFeedAppearInfoArray:(id)arg1;
- (id)containerVC;
- (id)openSession;
- (void)setOpenSession:(id)arg1;
- (unsigned int)maxTaskCount;
- (BOOL)needForceReload;
- (void)setNeedForceReload:(BOOL)arg1;
- (unsigned int)noResponseMsWhenRefresh;
- (void)setNoResponseMsWhenRefresh:(unsigned int)arg1;
- (BOOL)isPullingWhyDragMe;
- (void)setIsPullingWhyDragMe:(BOOL)arg1;
- (unsigned int)openTime;
- (void)setOpenTime:(unsigned int)arg1;
- (id)actionItem;
- (void)setActionItem:(id)arg1;
- (id)sweeperLogic;
- (void)setSweeperLogic:(id)arg1;
- (void)setCanUseDynamicBackground:(BOOL)arg1;
- (BOOL)isDidShow;
- (void)setIsDidShow:(BOOL)arg1;
- (id)exceedOtherDataArray;
- (void)setExceedOtherDataArray:(id)arg1;
- (id)exceedDataType2LastKeepTime;
- (void)setExceedDataType2LastKeepTime:(id)arg1;
- (unsigned long long)closingPageType;
- (void)setClosingPageType:(unsigned long long)arg1;
- (void)setLocationMgr:(id)arg1;
- (unsigned int)commonUseItemsUpdateScene;
- (void)setCommonUseItemsUpdateScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
