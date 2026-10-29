@interface WXGLocalAreaCommunicationClient : NSObject <LocalAreaNetworkClientDelegate, LocalAreaPeerClientDelegate, CNetworkStatusExt>
{
    LocalAreaPeerClient * m_peerClient; // +0x8
    LocalAreaNetworkClient * m_networkClient; // +0x10
    unsigned long long m_transferType; // +0x18
    NSData * m_firstPacketData; // +0x20
    MMTimer * m_cutConnectionTimer; // +0x28
    MMTimer * m_transferSpeedTimer; // +0x30
    NSMutableString * m_connectInfoString; // +0x38
    NSDate * m_timeTryToCut; // +0x40
    double m_slowCutInterval; // +0x48
    float m_slowGapSpeed; // +0x50
    BOOL m_detectReach; // +0x54
    BOOL _tryPeer; // +0x55
    unsigned short _server_port; // +0x56
    id <LocalAreaCommunicationClientDelegate> _delegate; // +0x58
    NSString * _server_ip; // +0x60
    NSString * _server_id; // +0x68
    NSString * _server_hello; // +0x70
    NSString * _server_ok; // +0x78
    NSString * _wifiName; // +0x80
}
- (id)init;
- (void)dealloc;
- (id)initWithServerIP:(id)arg1 serverPort:(unsigned short)arg2 serverID:(id)arg3 serverHello:(id)arg4 serverOk:(id)arg5;
- (void)p_resetNetworkClient;
- (void)p_resetPeerClient;
- (void)checkTransferSpeed;
- (void)p_initiativeToTerminateClient;
- (unsigned long long)clientSendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)clientDisconnect;
- (void)p_stopNetworkClient;
- (void)p_stopPeerClient;
- (BOOL)isPeerTransferData;
- (BOOL)canHaveMultipeer;
- (void)chooseNetworkChannel;
- (void)choosePeerChannel;
- (void)onNetworkReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onNetworkDisconnect;
- (void)onNetworkConnectFail;
- (void)onPeerReceiveData:(id)arg1;
- (void)onPeerDisconnect;
- (void)onPeerConnectFailed;
- (void)onPeerConnected;
- (float)getClientReceiveSpeed:(unsigned long long *)arg1;
- (float)getClientSendSpeed:(unsigned long long *)arg1;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getClientOpenTime;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)getDebugInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)server_ip;
- (void)setServer_ip:(id)arg1;
- (unsigned short)server_port;
- (void)setServer_port:(unsigned short)arg1;
- (id)server_id;
- (void)setServer_id:(id)arg1;
- (id)server_hello;
- (void)setServer_hello:(id)arg1;
- (id)server_ok;
- (void)setServer_ok:(id)arg1;
- (BOOL)tryPeer;
- (void)setTryPeer:(BOOL)arg1;
- (id)wifiName;
- (void)setWifiName:(id)arg1;
- (void).cxx_destruct;
@end

