@interface WARedEnvelopesOpenLogic : MMObject <PBMessageObserverDelegate, WCRedEnvelopesReceiveHomeViewDelegate>
{
    id <WARedEnvelopesOpenLogicDelegate> m_delegate; // +0x8
    MMUIViewController * _containerVC; // +0x10
    WARedEnvelopesReceiveHomeView * _introView; // +0x18
    NSData * _signature; // +0x20
    NSString * _appID; // +0x28
    NSString * _sendID; // +0x30
}
- (id)initWithcontainerVC:(id)arg1 appID:(id)arg2 sendID:(id)arg3;
- (void)startOpen;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)containerVC;
- (void)setContainerVC:(id)arg1;
- (id)introView;
- (void)setIntroView:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)sendID;
- (void)setSendID:(id)arg1;
- (void).cxx_destruct;
@end

