@interface MiniTaskMigrationHelper : MMUserService <IFavoritesExt, IMsgExt, MMServiceProtocol>
{
    BOOL _isMiniTaskStarMigrationEnabled; // +0x8
    BOOL _cachedMigrationSwitchOn; // +0x9
    BOOL _hasInitializedMigrationSwitch; // +0xa
    BOOL _migrationInProgress; // +0xb
    BOOL _migrationShouldPause; // +0xc
    BOOL _hasRegisteredFavExt; // +0xd
    BOOL _hasRegisteredMsgExt; // +0xe
    BOOL _hasDispatchedInitialMigrationStart; // +0xf
    BOOL _appEnteredBackground; // +0x10
    BOOL _msgDBHasInited; // +0x11
    unsigned char _chatbotUsedCacheState; // +0x12
    BOOL _enableFavStarCgiInFlight; // +0x13
    unsigned int _processedCount; // +0x14
    unsigned int _totalCount; // +0x18
    unsigned int _awaitingUploadLocalId; // +0x1c
    unsigned int _currentItemToken; // +0x20
    NSCache * _favTypeDedupIndexCache; // +0x28
    MiniTaskFavHelperLongVideoStarTidIndex * _longVideoStarTidIndex; // +0x30
    MemoryMappedKV * _migrationKV; // +0x38
    NSObject<OS_dispatch_queue> * _migrationFetchQueue; // +0x40
    NSMutableArray * _pendingQueue; // +0x48
    long long _fetchOffset; // +0x50
    unsigned long long _successCount; // +0x58
    unsigned long long _skipCount; // +0x60
    unsigned long long _failCount; // +0x68
    unsigned long long _bgTaskId; // +0x70
    long long _pendingSkipReverseUnstarFavId; // +0x78
    long long _currentActiveSegmentStartTs; // +0x80
}
- (void)notifyEnableFavStarIfNeeded;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isMigrationSwitchOn;
- (BOOL)readMigrationSwitchExptValue;
- (void)refreshMigrationSwitchFromExpt;
- (BOOL)shouldDualWriteOnAddStar;
- (BOOL)isStarredByBizKey:(id)arg1 source:(id)arg2;
- (void)unstarFavIfNeededByBizKey:(id)arg1 source:(id)arg2;
- (BOOL)isMigrationCompleted;
- (unsigned long long)tryStartStarMigrationFromChatBot;
- (void)ensureSilentMigrationStarted;
- (BOOL)hasExistingStarData;
- (BOOL)hasShownEducation;
- (void)setHasShownEducation;
- (BOOL)hasShownAddStarEducation;
- (void)setHasShownAddStarEducation;
- (void)resetMigrationFlags;
- (void)resetChatBotEverUsedFlag;
- (void)resetMigrationCompletedFlag;
- (BOOL)isInMigrationThrottleCooldown;
- (void)markMigrationThrottledByServer;
- (void)showStarAddedEducationOrSnackBar;
- (void)registerLifecycleObservers;
- (void)unregisterLifecycleObservers;
- (void)onAppDidEnterBackground;
- (void)onAppWillEnterForeground;
- (void)onAppWillTerminate;
- (void)beginBackgroundTaskIfNeeded;
- (void)endBackgroundTaskIfNeeded;
- (void)handleMigrationSwitchTurnedOff;
- (id)migrationFetchQueue;
- (void)startSilentMigrationAsync;
- (void)prepareMigrationStateAndStart;
- (void)accumulateActiveSegmentDurationIfNeeded;
- (void)registerFavExtIfNeeded;
- (void)unregisterFavExtIfNeeded;
- (void)registerMsgExtIfNeeded;
- (void)unregisterMsgExtIfNeeded;
- (void)onMsgDBInitFinish;
- (void)fetchNextBatchAndContinue;
- (void)onBatchFetched:(id)arg1;
- (void)processNextItem;
- (void)runSingleItemMigration:(id)arg1;
- (void)handleAddCompletedForToken:(unsigned int)arg1 success:(BOOL)arg2 skipped:(BOOL)arg3 createdItem:(id)arg4 taskData:(id)arg5;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)scheduleNextItemAfterThrottle;
- (BOOL)shouldStopMigration;
- (void)finalizeMigrationPaused;
- (void)finalizeMigrationCompleted;
- (void)clearMoreVCCachedFavViewController;
- (int)clampDurationToInt32:(long long)arg1;
- (void)reportStarMigrationFinishForEmptyDataShortcut;
- (void)reportStarMigrationFinishWithActiveDuration:(int)arg1 totalDuration:(int)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)invalidateDedupIndexCacheForDeletedItems:(id)arg1;
- (void)skipNextReverseUnstarForFavId:(unsigned int)arg1;
- (BOOL)hasUserEverUsedChatBot;
- (BOOL)shouldBlockChatBotEntryForMiniTaskMigration;
- (void)markUserUsedChatBot;
- (void)applyChatBotEverUsedFlagFromSource:(unsigned char)arg1;
- (void)probeOldChatBotUserAndRefreshEducationIfNeeded;
- (BOOL)shouldProbeOldChatBotUserNow;
- (BOOL)isMiniTaskStarMigrationEnabled;
- (void)setIsMiniTaskStarMigrationEnabled:(BOOL)arg1;
- (id)favTypeDedupIndexCache;
- (id)longVideoStarTidIndex;
- (void)setLongVideoStarTidIndex:(id)arg1;
- (BOOL)cachedMigrationSwitchOn;
- (void)setCachedMigrationSwitchOn:(BOOL)arg1;
- (BOOL)hasInitializedMigrationSwitch;
- (void)setHasInitializedMigrationSwitch:(BOOL)arg1;
- (id)migrationKV;
- (void)setMigrationKV:(id)arg1;
- (void)setMigrationFetchQueue:(id)arg1;
- (id)pendingQueue;
- (void)setPendingQueue:(id)arg1;
- (long long)fetchOffset;
- (void)setFetchOffset:(long long)arg1;
- (unsigned int)processedCount;
- (void)setProcessedCount:(unsigned int)arg1;
- (unsigned int)totalCount;
- (void)setTotalCount:(unsigned int)arg1;
- (unsigned long long)successCount;
- (void)setSuccessCount:(unsigned long long)arg1;
- (unsigned long long)skipCount;
- (void)setSkipCount:(unsigned long long)arg1;
- (unsigned long long)failCount;
- (void)setFailCount:(unsigned long long)arg1;
- (unsigned int)awaitingUploadLocalId;
- (void)setAwaitingUploadLocalId:(unsigned int)arg1;
- (unsigned int)currentItemToken;
- (void)setCurrentItemToken:(unsigned int)arg1;
- (BOOL)migrationInProgress;
- (void)setMigrationInProgress:(BOOL)arg1;
- (BOOL)migrationShouldPause;
- (void)setMigrationShouldPause:(BOOL)arg1;
- (unsigned long long)bgTaskId;
- (void)setBgTaskId:(unsigned long long)arg1;
- (BOOL)hasRegisteredFavExt;
- (void)setHasRegisteredFavExt:(BOOL)arg1;
- (BOOL)hasRegisteredMsgExt;
- (void)setHasRegisteredMsgExt:(BOOL)arg1;
- (BOOL)hasDispatchedInitialMigrationStart;
- (void)setHasDispatchedInitialMigrationStart:(BOOL)arg1;
- (BOOL)appEnteredBackground;
- (void)setAppEnteredBackground:(BOOL)arg1;
- (BOOL)msgDBHasInited;
- (void)setMsgDBHasInited:(BOOL)arg1;
- (long long)pendingSkipReverseUnstarFavId;
- (void)setPendingSkipReverseUnstarFavId:(long long)arg1;
- (unsigned char)chatbotUsedCacheState;
- (void)setChatbotUsedCacheState:(unsigned char)arg1;
- (long long)currentActiveSegmentStartTs;
- (void)setCurrentActiveSegmentStartTs:(long long)arg1;
- (BOOL)enableFavStarCgiInFlight;
- (void)setEnableFavStarCgiInFlight:(BOOL)arg1;
- (void).cxx_destruct;
@end
