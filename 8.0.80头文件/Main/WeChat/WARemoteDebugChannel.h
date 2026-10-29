@interface WARemoteDebugChannel : NSObject
{
    unsigned long long _totalSendLength; // +0x8
    unsigned long long _lastTotalSendLength; // +0x10
    unsigned long long _totalReciveLength; // +0x18
    unsigned long long _lastTotalReciveLength; // +0x20
    unsigned int _proxyPort; // +0x28
    id <WARemoteDebugChannelDelegate> _delegate; // +0x30
    NSString * _wsEndPoint; // +0x38
}
- (id)initWithWsEndPoint:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)isConnected;
- (void)openChannel;
- (void)closeChannel;
- (void)sendString:(id)arg1;
- (void)sendData:(id)arg1;
- (void)addSendLength:(unsigned long long)arg1;
- (id)getTotalSendLength;
- (void)addReceiveLength:(unsigned long long)arg1;
- (id)getTotalReceiveLength;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)wsEndPoint;
- (void)setWsEndPoint:(id)arg1;
- (unsigned int)proxyPort;
- (void)setProxyPort:(unsigned int)arg1;
- (void).cxx_destruct;
@end
