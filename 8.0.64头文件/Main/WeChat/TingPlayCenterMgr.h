@interface TingPlayCenterMgr : NSObject <ITingBizExt, IOplogExt, TingRedDotServiceListener, TingRecentServiceListener, TingAudioTabDataManagerExt, ITingRouterExt, _TtP6WeChat13ICarPlayUIExt_, TingPlayerManagerNotification>
{
    BOOL _hasEnterTing; // +0x8
    int _taskBarSyncVersion; // +0xc
    unsigned long long _lastCloseTime; // +0x10
    TingTaskSnapshot * _tapeInfo; // +0x18
    long long _taskBarControl; // +0x20
    MMListenSyncResponse * _taskBarSyncInfo; // +0x28
    NSMutableDictionary * _dictCallbacks; // +0x30
    NSMutableArray * _opLogTasks; // +0x38
    TingRedDotItem * _taskBarRedDotItem; // +0x40
    MMLRUCache * _notifyUUIDCache; // +0x48
    id <TingRedDotServiceListener><TingRecentServiceListener> _weakProxy; // +0x50
}
+ (id)platformMMKVId;
+ (id)generateTapeInfoWithPlayer:(id)arg1;
+ (BOOL)isTingPlayerModuleActive;
+ (BOOL)isTingPlayerModuleActiveOrInterrupt;
- (id)init;
- (void)registerObserver;
- (void)unregiesterObserver;
- (void)dealloc;
- (void)onMgrClearData;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)onCarPlayDisconnected;
- (void)updatePlayingInfoWithPlayer:(id)arg1;
- (id)lastestTapeTaskInfo;
- (id)lastestPlayingInfo;
- (void)clearLastestPlayedTapeInfo;
- (void)doAsyncLoadKvTapeInfos;
- (id)loadLastPlayedTapeInfo;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (void)handlePlayerEventComing:(id)arg1;
- (void)onActivePlayerChanged:(id)arg1;
- (void)onStop;
- (void)onPlayWithControl:(unsigned int)arg1;
- (void)onPause;
- (void)saveSyncInfoInPlatformKV:(id)arg1;
- (id)taskBarSyncInfoVersionKey;
- (id)taskBarSyncTimestampVersionKey;
- (BOOL)isTaskBarRedDotEnable;
- (id)notifyUUIDCache;
- (BOOL)hadCacheNotifyUUID:(id)arg1;
- (void)cacheNotifyUUID:(id)arg1;
- (void)tingSyncFromBypNotifyWithData:(id)arg1 uuid:(id)arg2;
- (id)validListenSyncItemTypes;
- (BOOL)isTaskBarSyncItemTypeValid:(int)arg1;
- (void)loadTaskBarSyncItem;
- (BOOL)__innerSetTaskBarSyncItemFromData:(id)arg1 scene:(long long)arg2;
- (void)clearTaskBarSyncItem;
- (void)onCenterRedDotItemUpdate:(id)arg1;
- (void)onCenterRedDotItemClear;
- (void)onRedDotItemUpdate:(int)arg1 item:(id)arg2;
- (void)onTingRedDotItemClear:(int)arg1;
- (void)callTaskBarExposed;
- (void)loadSyncTaskBarInfo;
- (void)removeLocalSyncTaskBarInfo;
- (void)clearLocalSyncTaskBarRecommendDesc;
- (void)preRefreshDiscoverItemWhenJumpCategoryDetail:(id)arg1;
- (id)taskBarSyncItem;
- (id)discoverSessionBuffer;
- (id)currentFlowPlayer;
- (id)currentPlayer;
- (BOOL)enableTaskBarControl;
- (int)taskBarSyncVersion;
- (BOOL)getTingTaskBarHideConfigState;
- (void)setTaskBarShowingOn:(BOOL)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (long long)calTaskBarControl;
- (int)calTaskBarSyncVersion;
- (BOOL)isInTaskBarControlBlack;
- (void)onTingAppBePresentedFromScene:(int)arg1;
- (void)willAddListenLaterWithItem:(id)arg1;
- (id)listenLaterTapeItem;
- (void)resetRefreshControl;
- (unsigned long long)lastCloseTime;
- (void)setLastCloseTime:(unsigned long long)arg1;
- (BOOL)hasEnterTing;
- (void)setHasEnterTing:(BOOL)arg1;
- (id)tapeInfo;
- (void)setTapeInfo:(id)arg1;
- (long long)taskBarControl;
- (void)setTaskBarControl:(long long)arg1;
- (id)taskBarSyncInfo;
- (void)setTaskBarSyncInfo:(id)arg1;
- (id)dictCallbacks;
- (void)setDictCallbacks:(id)arg1;
- (id)opLogTasks;
- (void)setOpLogTasks:(id)arg1;
- (void)setTaskBarSyncVersion:(int)arg1;
- (id)taskBarRedDotItem;
- (void)setTaskBarRedDotItem:(id)arg1;
- (void)setNotifyUUIDCache:(id)arg1;
- (id)weakProxy;
- (void)setWeakProxy:(id)arg1;
- (void).cxx_destruct;
@end
