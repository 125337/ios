@interface HeartBeatMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    BOOL m_isStop; // +0x8
    NSMutableSet * m_setRequestEventID; // +0x10
    MMTimer * m_timer; // +0x18
    unsigned long long m_checkTime; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)StartHeartBeat;
- (void)StopHeartBeat;
- (void)internalStart;
- (void)internalStop;
- (void)startRequest;
- (void)stopRequest;
- (void)addRequestEventID:(unsigned int)arg1;
- (BOOL)isLatestRequestEventID:(unsigned int)arg1;
- (void)removeRequestEventID:(unsigned int)arg1;
- (void)handleResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)resetTimer;
- (void)stopTimer;
- (void)onCheckTime;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)m_isStop;
- (void)setM_isStop:(BOOL)arg1;
- (id)m_setRequestEventID;
- (void)setM_setRequestEventID:(id)arg1;
- (id)m_timer;
- (void)setM_timer:(id)arg1;
- (unsigned long long)m_checkTime;
- (void)setM_checkTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

