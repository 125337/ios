@interface LocalAreaNetworkServer : MMObject <C2ObjcServerCallBackExt>
{
    NSString * client_ip; // +0x8
    unsigned short client_port; // +0x10
    NSDate * m_sendStartDate; // +0x18
    NSDate * m_receiveStartDate; // +0x20
    unsigned long long m_totalReceiveLength; // +0x28
    unsigned long long m_totalSendLength; // +0x30
    unsigned long long m_lastTotalReciveLength; // +0x38
    unsigned long long m_lastTotalSendLength; // +0x40
    WXGSpeedFilter * m_sendSpeedFilter; // +0x48
    WXGSpeedFilter * m_recveSpeedFilter; // +0x50
    NSDate * m_serverConnectDate; // +0x58
    id <LocalAreaNetworkServerDelegate> _delegate; // +0x60
}
+ (void)stopServer;
- (id)init;
- (void)reset;
- (void)dealloc;
- (BOOL)startServer:(id *)arg1 port:(unsigned short *)arg2;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onRecv:(id)arg1 port:(unsigned short)arg2 data:(id)arg3 length:(unsigned int)arg4;
- (void)onConnected:(id)arg1 port:(unsigned short)arg2;
- (void)onDisconnect:(id)arg1 port:(unsigned short)arg2;
- (float)getServerSendSpeed:(unsigned long long *)arg1;
- (float)getServerReceiveSpeed:(unsigned long long *)arg1;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getServerOpenTime;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

