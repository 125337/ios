@interface VOIPCSSyncMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    BOOL mIsWeakSessionActive; // +0x8
    BOOL mIsSessionActive; // +0x9
    BOOL mIsNeedSync; // +0xa
    long long mRoomId; // +0x10
    long long mRoomKey; // +0x18
    BOOL m_isDoingSync; // +0x20
    int cancelInviteStatus; // +0x24
    unsigned int mCSNotifySeq; // +0x28
    unsigned int m_syncTimerCnt; // +0x2c
    unsigned int m_syncTimerStopValue; // +0x30
    NSData * mKeyBuf; // +0x38
    NSMutableArray * mOplogList; // +0x40
    NSRecursiveLock * mOplogLock; // +0x48
    MMTimer * m_syncTimer; // +0x50
}
- (void)check_next_sync;
- (BOOL)isCSNotifySeqNew:(unsigned int)arg1;
- (BOOL)isSyncKeyNew:(id)arg1;
- (void)retriveKeyFrom:(id)arg1 StatusKey:(unsigned int *)arg2 RelayKey:(unsigned int *)arg3 ConnectingKey:(unsigned int *)arg4;
- (void)HandleVoipSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleVoipCSSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SendSyncRequestFor:(id)arg1 withSelector:(unsigned int)arg2;
- (void)SendCSSyncRequestFor:(id)arg1 withSelector:(unsigned int)arg2;
- (void)AddOplog:(unsigned int)arg1 data:(id)arg2;
- (void)ClearOplog;
- (void)onServiceClearData;
- (long long)getRoomId;
- (long long)getRoomKey;
- (int)getSitemStatus;
- (id)init;
- (void)dealloc;
- (void)StopSyncTimer;
- (void)StartSyncTimer:(unsigned long long)arg1;
- (void)forceCheck_next_sync;
- (void)StartWeakSessionWithRoomId:(long long)arg1 andRoomKey:(long long)arg2;
- (void)StartSessionWithRoomId:(long long)arg1 andRoomKey:(long long)arg2;
- (void)SyncByNotifyWithRoomId:(long long)arg1 andRoomKey:(long long)arg2;
- (void)PushControlStatus:(unsigned int)arg1;
- (void)PushRelayData:(id)arg1;
- (void)StopSession;
- (id)mKeyBuf;
- (void)setMKeyBuf:(id)arg1;
- (id)mOplogList;
- (void)setMOplogList:(id)arg1;
- (id)mOplogLock;
- (void)setMOplogLock:(id)arg1;
- (id)m_syncTimer;
- (void)setM_syncTimer:(id)arg1;
- (unsigned int)m_syncTimerCnt;
- (void)setM_syncTimerCnt:(unsigned int)arg1;
- (unsigned int)m_syncTimerStopValue;
- (void)setM_syncTimerStopValue:(unsigned int)arg1;
- (void).cxx_destruct;
@end

