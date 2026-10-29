@interface PSTNSyncMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    BOOL mIsSessionActive; // +0x8
    BOOL mIsNeedSync; // +0x9
    int mRoomId; // +0xc
    long long mRoomKey; // +0x10
    long long mCallSeq; // +0x18
    BOOL m_isDoingSync; // +0x20
    unsigned int m_nCalledStatus; // +0x24
    unsigned int m_nStatusSyncKey; // +0x28
    int mAcceptDataFlag; // +0x2c
    MMTimer * m_syncTimer; // +0x30
}
- (void)check_next_sync;
- (void)HandlePSTNSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SendSyncRequestFor;
- (void)onServiceClearData;
- (int)getRoomId;
- (long long)getRoomKey;
- (unsigned int)getStatusSyncKey;
- (void)setCalledStatus:(unsigned int)arg1;
- (void)setStatusSyncKey:(unsigned int)arg1;
- (void)setAcceptDataFlag:(int)arg1;
- (id)init;
- (void)StopSyncTimer;
- (void)StartSyncTimer:(unsigned long long)arg1;
- (void)forceCheck_next_sync;
- (void)StartSessionWithRoomId:(int)arg1 andRoomKey:(long long)arg2 andCallSeq:(long long)arg3;
- (void)StopSession;
- (id)m_syncTimer;
- (void)setM_syncTimer:(id)arg1;
- (void).cxx_destruct;
@end
