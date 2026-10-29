@interface AmoebaSentinelConnectMgr : NSObject <AmoebaWSMessageDelegate, AmoebaStnDelegate>
{
    BOOL _prodConnect; // +0x8
    BOOL _testConnect; // +0x9
    unsigned int _afterConnectAction; // +0xc
    NSString * _sessionId; // +0x10
    id <AmoebaSentinelConnectDelegate> _delegate; // +0x18
}
- (void)setConnectDelegate:(id)arg1;
- (void)connect:(unsigned int)arg1;
- (BOOL)isConnect;
- (void)bindSessionId:(id)arg1;
- (void)send:(id)arg1;
- (void)onWsClosed;
- (void)onConnected:(id)arg1;
- (void)didCloseWithCode:(long long)arg1 reason:(id)arg2 wasClean:(BOOL)arg3;
- (void)didFailWithError:(id)arg1;
- (void)didReceiveMessage:(id)arg1;
- (void)didReceivePong:(id)arg1;
- (void)didReceiveMessage2:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)afterConnectAction;
- (void)setAfterConnectAction:(unsigned int)arg1;
- (BOOL)prodConnect;
- (void)setProdConnect:(BOOL)arg1;
- (BOOL)testConnect;
- (void)setTestConnect:(BOOL)arg1;
- (void).cxx_destruct;
@end
