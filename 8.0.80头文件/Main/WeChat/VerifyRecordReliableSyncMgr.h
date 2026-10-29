@interface VerifyRecordReliableSyncMgr : CommonReliableSyncMgr <MMKernelExt, VerifyRecordLogicDelegate>
{
    BOOL _didStartInitialHistorySync; // +0x8
    BOOL _initialHistorySyncInProgress; // +0x9
    BOOL _initialHistorySyncCompleted; // +0xa
    VerifyRecordReliableSyncLogic * _oVerifyRecordReliableSyncLogic; // +0x10
    VerifyRecordLogic * _oVerifyRecordLogic; // +0x18
    unsigned long long _initialHistoryMaxVersion; // +0x20
    NSMutableArray * _initialHistorySyncCompletionBlocks; // +0x28
}
- (void)onServiceInit;
- (void)initData;
- (void)onServiceClearData;
- (void)ensureInitialSyncAfterSwitchEnabled;
- (void)performAfterInitialSyncIfNeeded:(id /* block */)arg1;
- (void)syncWithActionNotifyData:(id)arg1 commBizIdBit:(unsigned int)arg2;
- (BOOL)triggerActiveSyncForEnterUI;
- (void)triggerActiveSyncForNewMessagesWithSvrIDs:(id)arg1;
- (BOOL)triggerActiveSyncForReAddAfterContactDeletedWithEncryptTalker:(id)arg1;
- (BOOL)triggerActiveSyncWithReason:(id)arg1;
- (id)getVerifyRecordLogic;
- (void)finishInitialHistorySyncAndAllowRetry:(BOOL)arg1;
- (void)OnGetVerifyRecordHistorySuccessWithVersion:(unsigned long long)arg1 records:(id)arg2 hasMore:(BOOL)arg3 syncKeyBuff:(id)arg4 syncScene:(unsigned int)arg5;
- (void)OnGetVerifyRecordHistoryFail:(id)arg1 syncScene:(unsigned int)arg2;
- (void)onAuthOK;
- (void)onInitOK;
- (void)onManulLoginOK;
- (id)oVerifyRecordReliableSyncLogic;
- (void)setOVerifyRecordReliableSyncLogic:(id)arg1;
- (id)oVerifyRecordLogic;
- (void)setOVerifyRecordLogic:(id)arg1;
- (BOOL)didStartInitialHistorySync;
- (void)setDidStartInitialHistorySync:(BOOL)arg1;
- (BOOL)initialHistorySyncInProgress;
- (void)setInitialHistorySyncInProgress:(BOOL)arg1;
- (BOOL)initialHistorySyncCompleted;
- (void)setInitialHistorySyncCompleted:(BOOL)arg1;
- (unsigned long long)initialHistoryMaxVersion;
- (void)setInitialHistoryMaxVersion:(unsigned long long)arg1;
- (id)initialHistorySyncCompletionBlocks;
- (void)setInitialHistorySyncCompletionBlocks:(id)arg1;
- (void).cxx_destruct;
@end
