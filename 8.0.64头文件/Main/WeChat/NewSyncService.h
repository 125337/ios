@interface NewSyncService : MMUserService <PBMessageObserverDelegate, INewSyncExt, MMServiceProtocol>
{
    BOOL m_bHasInit; // +0x8
    unsigned int m_uiSelector; // +0xc
    unsigned int m_uiSyncScene; // +0x10
    unsigned int m_uiSyncContinueCount; // +0x14
    NSString * m_lastSyncKeyMd5; // +0x18
    NSDate * m_tLastNotify; // +0x20
    NSDate * m_tLastLongConnDisconnect; // +0x28
    CMMDB * m_oMMDB; // +0x30
    NSRecursiveLock * m_oLock; // +0x38
    OplogDataLogic * m_oplogData; // +0x40
    BOOL m_bNeedSyncOplog; // +0x48
    BOOL m_bSyncOplog; // +0x49
    BOOL m_bSyncOpError; // +0x4a
    BOOL m_bSyncOperating; // +0x4b
    BOOL m_lastSyncFinishCallingExtension; // +0x4c
    unsigned int m_syncEventID; // +0x50
    BOOL m_bIsSyncPause; // +0x54
    BOOL m_isGettingData; // +0x55
    BOOL m_bFirstSyncAfterBgfgChange; // +0x56
    BOOL m_bNeedSync; // +0x57
    BOOL _m_bHasSync; // +0x58
    NSObject<OS_dispatch_queue> * m_actionNotifySyncQueue; // +0x60
}
- (id)init;
- (void)dealloc;
- (void)InitDB:(id)arg1 Lock:(id)arg2;
- (id)actionNotifySyncQueue;
- (BOOL)isGettingData;
- (void)resetGettingData;
- (void)SetLastNotifyTime:(id)arg1;
- (void)SetLastLongConnDisconectTime:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onWillSuspend;
- (BOOL)StartNewInit:(unsigned int)arg1;
- (BOOL)InternalCreateSync:(unsigned int)arg1;
- (BOOL)creatPBNewSyncEvent:(unsigned int)arg1;
- (BOOL)NotifyToSync;
- (void)NeedToSync;
- (void)ApnsNotifySync;
- (void)BackGroundToForeGroundSync;
- (void)ProcessStartSync;
- (BOOL)BackGroundFetchToSync;
- (BOOL)VOIPPushAwakeToNewSyncByLocalNotification;
- (BOOL)VOIPPushAwakeToSyncByCallKit;
- (BOOL)VOIPPushAwakeToSyncByVoIP;
- (BOOL)SlientPushAwakeToNewSync;
- (void)AfterManualAuthNotifySync;
- (void)LongLinkTimerSync;
- (void)setNeedSyncWithScene:(int)arg1;
- (void)checkNeedSync;
- (unsigned int)GetSelector;
- (void)SetSelector:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleSyncResp:(id)arg1 handleResult:(BOOL)arg2;
- (void)markSyncOperating;
- (void)HandleNewSyncPush:(id)arg1;
- (BOOL)ignoreNotifyDataWhenSyncOperating;
- (void)startSyncOplog;
- (BOOL)InsertOplog:(unsigned int)arg1 Oplog:(id)arg2 Sync:(BOOL)arg3;
- (void)checkSyncOplog;
- (void)NeedToSyncOplog;
- (void)HandleOplog:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)StartOplog:(unsigned int)arg1 Oplog:(id)arg2;
- (void)StartOplog:(unsigned int)arg1 Oplog:(id)arg2 complete:(id /* block */)arg3;
- (void)makeSyncPause;
- (void)makeSyncResume;
- (BOOL)handleBatchMessages:(id)arg1 ignoreSession:(BOOL)arg2;
- (void)onNewSyncOplogOK;
- (void)onNewSyncOplogFail;
- (BOOL)IsLastSyncFinishCallingExtension;
- (BOOL)m_bHasSync;
- (void)setM_bHasSync:(BOOL)arg1;
- (void).cxx_destruct;
@end
