@interface TXCIPCTunnelTransport : NSObject <TXCAsyncSocketDelegate>
{
    int _listenPort; // +0x8
    int _current_packet_type; // +0xc
    TXCAsyncSocket * _socket; // +0x10
    NSObject<OS_dispatch_queue> * _socketQueue; // +0x18
    TXCIPCTunnelEndPoint * _endpoint; // +0x20
    id <TXCIPCTunnelTransportDelegate> _delegate; // +0x28
}
- (id)initWithEndPoint:(id)arg1 delegate:(id)arg2;
- (void)sendBuffer:(id)arg1;
- (void)connect;
- (void)accept;
- (void)disconnect;
- (void)readPacketHeader;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didConnectToUrl:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 memoryOwner:(id)arg4;
- (int)listenPort;
- (void)setListenPort:(int)arg1;
- (id)socket;
- (void)setSocket:(id)arg1;
- (id)socketQueue;
- (void)setSocketQueue:(id)arg1;
- (id)endpoint;
- (void)setEndpoint:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)current_packet_type;
- (void)setCurrent_packet_type:(int)arg1;
- (void).cxx_destruct;
@end

