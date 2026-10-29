@interface ChatMigrationHeartBeatMonitor : NSObject
{
    unsigned long long nextAckID; // +0x8
    MMTimer * m_heartBeatTimer; // +0x10
    BOOL m_bMonitorEnable; // +0x18
    BOOL m_bHeartBeatTransfer; // +0x19
    id <ChatMigrationHeartBeatMonitorDelegate> _delegate; // +0x20
}
- (id)init;
- (void)p_sendHeartBeatToRemote;
- (void)getHeartBeatPacketWithAckID:(unsigned long long)arg1;
- (void)sendHeartBeatRequest;
- (void)checkHeartBeatResponse;
- (void)enableHeartBeatMonitor;
- (void)disableHeartBeatMonitor;
- (void)checkHeartBeat;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

