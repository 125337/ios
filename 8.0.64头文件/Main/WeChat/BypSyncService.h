@interface BypSyncService : MMUserService <MMKernelExt, INewSyncPluginExt, PBMessageObserverDelegate, MMServiceProtocol>
{
    BOOL _syncPaused; // +0x8
    BOOL _enableBypSync; // +0x9
    int _syncingScene; // +0xc
    int _lastSyncScene; // +0x10
    int _retryCount; // +0x14
    NSSet * _allKnownSelectors; // +0x18
    BypSyncKeyBuff * _syncBuff; // +0x20
    NSMutableArray * _syncingSelectors; // +0x28
    NSMutableSet * _needSyncSelectors; // +0x30
    unsigned long long _firstAuthTime; // +0x38
}
+ (BOOL)IsSupportMsgItemTypeWithSyncKeyType:(int)arg1;
+ (id)parseMsgWrapFromBypSyncItem:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)config;
- (void)startSyncFinder;
- (void)updatePayBypSyncSelectorEnabled:(BOOL)arg1;
- (void)updateAllKnownSelectors:(id)arg1;
- (void)setSyncPaused:(BOOL)arg1;
- (void)syncWithNotifyData:(id)arg1;
- (void)syncWithActionNotifyData:(id)arg1;
- (void)syncWithSelectors:(id)arg1 syncAll:(BOOL)arg2 scene:(int)arg3;
- (id)syncBufferFilePath;
- (id)syncBuff;
- (void)saveSyncKeyBuff;
- (id)descStringForSyncBuffer:(id)arg1;
- (void)checkQueue;
- (BOOL)isSyncing;
- (void)createSyncEventWithSelectors:(id)arg1 scene:(int)arg2;
- (void)tryRetrySync;
- (void)onSyncSuccessedWithResponse:(id)arg1;
- (void)onSyncFailed;
- (id)mergeSyncBuffer:(id)arg1 newBuffer:(id)arg2;
- (BOOL)isSyncBufferEqualsFrom:(id)arg1 toBuffer:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onAuthOK;
- (void)NotifyCheckSelector;
- (BOOL)syncPaused;
- (id)allKnownSelectors;
- (void)setAllKnownSelectors:(id)arg1;
- (void)setSyncBuff:(id)arg1;
- (id)syncingSelectors;
- (void)setSyncingSelectors:(id)arg1;
- (int)syncingScene;
- (void)setSyncingScene:(int)arg1;
- (int)lastSyncScene;
- (void)setLastSyncScene:(int)arg1;
- (id)needSyncSelectors;
- (void)setNeedSyncSelectors:(id)arg1;
- (BOOL)enableBypSync;
- (void)setEnableBypSync:(BOOL)arg1;
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (unsigned long long)firstAuthTime;
- (void)setFirstAuthTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
