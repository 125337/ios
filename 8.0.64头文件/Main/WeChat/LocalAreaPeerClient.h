@interface LocalAreaPeerClient : NSObject <MCNearbyServiceBrowserDelegate, MCSessionDelegate>
{
    MCNearbyServiceBrowser * m_browser; // +0x8
    MCSession * m_clientSession; // +0x10
    NSString * m_currentServiceType; // +0x18
    NSDictionary * m_dicoverInfo; // +0x20
    NSString * m_answerInfo; // +0x28
    MCPeerID * m_localPeerID; // +0x30
    MCPeerID * m_otherPeerID; // +0x38
    BOOL m_bConnectOK; // +0x40
    MMTimer * m_connectTimer; // +0x48
    NSDate * m_peerOpenDate; // +0x50
    unsigned long long m_totalReceiveLength; // +0x58
    unsigned long long m_totalSendLength; // +0x60
    unsigned long long m_lastTotalReceiveLength; // +0x68
    unsigned long long m_lastTotalSendLength; // +0x70
    WXGSpeedFilter * m_sendSpeedFilter; // +0x78
    WXGSpeedFilter * m_receiveSpeedFilter; // +0x80
    NSDate * m_sendStartDate; // +0x88
    NSDate * m_receiveStartDate; // +0x90
    id <LocalAreaPeerClientDelegate> _delegate; // +0x98
}
- (id)init;
- (void)dealloc;
- (void)startClientWithDiscoverInfo:(id)arg1 withAnswerInfo:(id)arg2 withServiceType:(id)arg3;
- (void)p_checkConnected;
- (void)stopClient;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (BOOL)p_checkDiscoverInfo:(id)arg1;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(id /* block */)arg4;
- (float)getPeerReceiveSpeed:(unsigned long long *)arg1;
- (float)getPeertSendSpeed:(unsigned long long *)arg1;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getClientOpenTime;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
