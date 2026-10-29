@interface WAAppItemManager : MMUserService <WAAppOperateLogicDelegate, MMTipsViewControllerDelegate, MMServiceProtocol>
{
    WAAppOperateLogic * m_operateLogic; // +0x8
    unsigned int m_localUpdateTimeOfLastVisibleItem; // +0x10
    unsigned int m_updateTimeOfFirstVisibleItem; // +0x14
    unsigned int m_remoteUpdateTimeOfLastVisibleItem; // +0x18
    unsigned int m_biggestUpdateTimeOfStarItem; // +0x1c
    unsigned long long _taskbarCommonUseWeAppItemsCount; // +0x20
    WAGetWxaUsageRecordRequestInfo * _lastTaskBarRequestInfo; // +0x28
    CommUseAppInfo_CommUseConfig * _commuseConfig; // +0x30
}
+ (unsigned long long)getAppUserStateByUsername:(id)arg1 appType:(unsigned int)arg2;
+ (unsigned long long)getAppUserStateByUsername:(id)arg1;
- (id)getAllAppContactListItems;
- (id)getAllNormalAppContactListItems;
- (id)getAllAppContactListItemsWithAppType:(unsigned int)arg1;
- (id)internalGetAllAppContactListItemsWithAppType:(unsigned int)arg1;
- (id)init;
- (id)getCommonUseTagWordingWithReferId:(unsigned int)arg1;
- (unsigned int)getCommonUseConfigMaxShowCount;
- (unsigned int)getCommonUseConfigMaxShowCountForHistorySection;
- (id)getCommonUseConfigNextReqExtraData;
- (BOOL)getCommonUseConfigUpdateLoadingWaitMs;
- (BOOL)getCommonUseConfigReportSSID;
- (BOOL)getCommonUseConfigReportLocation;
- (unsigned int)getCommonUseConfigReportGetLocaltionWaitMs;
- (id)getCommonUseConfigReportOverviewExtraData;
- (unsigned int)getCommonUseConfigNextReqIntervalSec;
- (unsigned int)getValidListTopUpdateTime;
- (unsigned int)getValidStarBiggestUpdateTime;
- (unsigned int)getLatestAppItemsFormSvrByUpdateTime:(unsigned int)arg1 inScene:(unsigned int)arg2;
- (unsigned int)getLatestAppItemsFormSvrByUpdateTime:(unsigned int)arg1 withCommonUse:(BOOL)arg2 requestInfo:(id)arg3 inScene:(unsigned int)arg4;
- (void)getLatestUsageAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)getStarAppItemsFromSvrInScene:(unsigned int)arg1;
- (void)tryReqCommonUseDataWithScene:(unsigned int)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onAuthOK;
- (void)onGetLatestAppItemsFromSvrByStarList:(id)arg1 scene:(unsigned int)arg2 errCode:(int)arg3;
- (void)onGetLatestAppItemsFromSvrByRecordList:(id)arg1 scene:(unsigned int)arg2 hasMore:(BOOL)arg3 errCode:(int)arg4;
- (void)onGetLatestAppItemsFromSvrByCommonUse:(id)arg1 commuseConfig:(id)arg2 scene:(unsigned int)arg3 errCode:(int)arg4;
- (void)onUpdateCommonUseNextReqInterval:(unsigned int)arg1;
- (void)updateCommuseConfig:(id)arg1;
- (void)updateLastUpdateCommonuseTime;
- (unsigned int)lastUpdateCommonuseTimeInSec;
- (unsigned int)commonuseNextReqInterval;
- (id)preCheckAppList:(id)arg1;
- (id)preCheckStarAppList:(id)arg1;
- (void)reverseArray:(id)arg1;
- (id)getAllAppListItems;
- (id)getAllAppListItemsIsIncludeStar:(BOOL)arg1;
- (id)getAllAppListItemByUsername:(id)arg1;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1;
- (id)getLatestAppListItemWithCount:(unsigned int)arg1 includeStar:(BOOL)arg2;
- (void)updateFirstVisibleItemUpdateTimeIfNeededWithListItems:(id)arg1;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1;
- (id)getLatestAppListItemOverUpdateTime:(unsigned int)arg1 includeStar:(BOOL)arg2;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2;
- (id)getLatestAppListItemWithMaxUpdateTime:(unsigned int)arg1 minUpdateTime:(unsigned int)arg2 includeStar:(BOOL)arg3;
- (void)onExpandEmbedWeAppItem:(id)arg1 scene:(unsigned long long)arg2 sessionId:(id)arg3;
- (void)onOpenWeAppItem:(id)arg1 scene:(unsigned long long)arg2 sessionId:(id)arg3 isAlreadyRunning:(BOOL)arg4 migrateFromUsername:(id)arg5;
- (void)onOpenWeAppItem:(id)arg1 scene:(unsigned long long)arg2 sessionId:(id)arg3 isAlreadyRunning:(BOOL)arg4 migrateFromUsername:(id)arg5 reason:(unsigned int)arg6;
- (void)onDeleteWeAppItem:(id)arg1;
- (void)onDeleteWeAppItemSilently:(id)arg1;
- (BOOL)isItemStared:(id)arg1;
- (id)getAllAppStarItems;
- (void)saveEditStarResult:(id)arg1;
- (void)checkWeAppItemStarStatus:(id)arg1 withResultAction:(id /* block */)arg2;
- (BOOL)updateWeAppStarStatus:(id)arg1 isStared:(BOOL)arg2;
- (void)starWeAppItem:(id)arg1 inScene:(unsigned int)arg2;
- (BOOL)isReachStarCountLimit;
- (unsigned int)getStarNumberLimitation;
- (BOOL)checkWeAppCanBeStared:(id)arg1;
- (void)showStarForbiddenTips;
- (id)getAllCommonUseWeAppItems;
- (void)starWeAppItem:(id)arg1 toPositionWithPreItem:(id)arg2 nextItem:(id)arg3 inScene:(unsigned int)arg4;
- (void)deleteCommonUseItem:(id)arg1 inScene:(unsigned int)arg2;
- (void)unStarWeAppItem:(id)arg1 inScene:(unsigned int)arg2;
- (void)moveStarItem:(id)arg1 toPositionWithPreItem:(id)arg2 nextItem:(id)arg3 inScene:(unsigned int)arg4;
- (void)batchMoveStarItemsWithContext:(id)arg1;
- (double)calSortFactorWithPreItem:(id)arg1 nextItem:(id)arg2;
- (void)operateStarItemsForReason:(unsigned int)arg1;
- (void)onOprationExcuted:(id)arg1 errCode:(int)arg2;
- (void)handleStarOperation:(id)arg1 errCode:(int)arg2;
- (void)handleUnStarOperation:(id)arg1 errCode:(int)arg2;
- (BOOL)updateHistoryItemToDatabaseWithItem:(id)arg1;
- (BOOL)updateStarItemToDatabaseWithItem:(id)arg1;
- (BOOL)deleteHistoryItemFromDatabaseWithAppItem:(id)arg1;
- (BOOL)deleteStarItemFromDatabaseWithAppItem:(id)arg1;
- (id)getCurrentAppStarItemsInLimits:(unsigned int)arg1;
- (void)clearState;
- (void)showUserGuideWithSessionId:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (unsigned long long)taskbarCommonUseWeAppItemsCount;
- (void)setTaskbarCommonUseWeAppItemsCount:(unsigned long long)arg1;
- (id)lastTaskBarRequestInfo;
- (void)setLastTaskBarRequestInfo:(id)arg1;
- (id)commuseConfig;
- (void)setCommuseConfig:(id)arg1;
- (void).cxx_destruct;
@end
