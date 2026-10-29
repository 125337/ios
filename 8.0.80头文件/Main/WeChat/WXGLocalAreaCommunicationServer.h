@interface WXGLocalAreaCommunicationServer : NSObject <LocalAreaPeerServerDelegate, LocalAreaNetworkServerDelegate>
{
    LocalAreaPeerServer * m_peerServer; // +0x8
    LocalAreaNetworkServer * m_networkServer; // +0x10
    unsigned long long m_transferType; // +0x18
    MMTimer * m_transferSpeedTimer; // +0x20
    MMTimer * m_cutConnectionTimer; // +0x28
    BOOL m_isTestSpeedOpen; // +0x30
    double m_slowCutInterval; // +0x38
    float m_slowGapSpeed; // +0x40
    BOOL m_peerDisconnect; // +0x44
    BOOL m_networkDisconnect; // +0x45
    id <LocalAreaCommunicationServerDelegate> _delegate; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)onSwitchContext;
- (void)startNetworkServer:(id *)arg1 port:(unsigned short *)arg2;
- (void)checkTransferSpeed;
- (void)initiativeToTerminateServer;
- (void)startPeerServerWithServerID:(id)arg1 serverHello:(id)arg2 serverOK:(id)arg3;
- (void)stopServer;
- (void)p_stopNetworkServer;
- (void)p_stopPeerServer;
- (unsigned long long)serverSendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)markTestSpeedIsOpen;
- (void)markTestSpeedIsClose;
- (void)choosePeerChannel;
- (void)chooseNetworkChannel;
- (unsigned long long)sendNetworkTestSpeedPacketResponse;
- (unsigned long long)sendPeerTestSpeedPacketResponse;
- (void)onNetworkReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (void)onNetworkConnected;
- (void)onNetworkDisconnect;
- (void)onPeerReceiveData:(id)arg1;
- (void)onPeerConnected;
- (void)onPeerDisconnect;
- (float)getServerSendSpeed:(unsigned long long *)arg1;
- (float)getServerReceiveSpeed:(unsigned long long *)arg1;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getServerOpenTime;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
