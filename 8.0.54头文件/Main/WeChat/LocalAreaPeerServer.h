@interface LocalAreaPeerServer : NSObject <MCNearbyServiceAdvertiserDelegate, MCSessionDelegate>
{
    MCNearbyServiceAdvertiser * m_advertiser; // +0x8
    MCSession * m_serverSession; // +0x10
    NSDictionary * m_dicoverInfo; // +0x18
    NSString * m_answerInfo; // +0x20
    MCPeerID * m_localPeerID; // +0x28
    MCPeerID * m_otherPeerID; // +0x30
    NSDate * m_sendStartDate; // +0x38
    NSDate * m_receiveStartDate; // +0x40
    unsigned long long m_totalReceiveLength; // +0x48
    unsigned long long m_totalSendLength; // +0x50
    unsigned long long m_lastTotalReciveLength; // +0x58
    unsigned long long m_lastTotalSendLength; // +0x60
    WXGSpeedFilter * m_sendSpeedFilter; // +0x68
    WXGSpeedFilter * m_recveSpeedFilter; // +0x70
    NSDate * m_peerOpenDate; // +0x78
    id <LocalAreaPeerServerDelegate> _delegate; // +0x80
}
- (id)init;
- (void)dealloc;
- (void)startServerWithDiscoverInfo:(id)arg1 withAnswerInfo:(id)arg2 withServiceType:(id)arg3;
- (void)stopServer;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(id /* block */)arg4;
- (void)advertiser:(id)arg1 didNotStartAdvertisingPeer:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(id /* block */)arg4;
- (float)getPeerSendSpeed:(unsigned long long *)arg1;
- (float)getPeerReceiveSpeed:(unsigned long long *)arg1;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getPeerOpenTime;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

