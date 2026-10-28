@interface LocalAreaNetworkClient : MMObject <C2ObjcClientCallBackExt>
{
    unsigned long long m_totalReciveLength; // +0x8
    unsigned long long m_totalSendLength; // +0x10
    unsigned long long m_lastTotalReciveLength; // +0x18
    unsigned long long m_lastTotalSendLength; // +0x20
    NSDate * m_realSendStartDate; // +0x28
    NSDate * m_sendStartDate; // +0x30
    NSDate * m_reciveStartDate; // +0x38
    WXGSpeedFilter * m_sendSpeedFilter; // +0x40
    WXGSpeedFilter * m_recveSpeedFilter; // +0x48
    BOOL m_bIsInDisconnect; // +0x50
    BOOL m_bFirstBusinessPacket; // +0x51
    BOOL m_bFirstPacketOKofBusiness; // +0x52
    MMTimer * m_firstPacketTimer; // +0x58
    unsigned short _server_port; // +0x60
    id <LocalAreaNetworkClientDelegate> _delegate; // +0x68
    NSString * _server_ip; // +0x70
}
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)stopClient;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onRecv:(id)arg1 port:(unsigned short)arg2 data:(id)arg3 length:(unsigned int)arg4;
- (void)onDisconnect:(id)arg1 port:(unsigned short)arg2;
- (void)p_checkFirstPacket;
- (float)getClientRecvSpeed:(unsigned long long *)arg1;
- (float)getClientSendSpeed:(unsigned long long *)arg1;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalRecvLength;
- (unsigned long long)getClientOpenTime;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)server_ip;
- (void)setServer_ip:(id)arg1;
- (unsigned short)server_port;
- (void)setServer_port:(unsigned short)arg1;
- (void).cxx_destruct;
@end
