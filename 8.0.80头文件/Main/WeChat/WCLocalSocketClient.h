@interface WCLocalSocketClient : NSObject <GCDAsyncSocketDelegate>
{
    BOOL _connected; // +0x8
    id <WCLocalSocketClientDelegate> _delegate; // +0x10
    MMFinderGCDAsyncSocket * _socket; // +0x18
    NSObject<OS_dispatch_queue> * _queue; // +0x20
}
- (void)connectOnPort:(unsigned short)arg1;
- (void)disconnect;
- (void)setUpSocketOnPort:(unsigned short)arg1;
- (void)sendData:(id)arg1;
- (void)socket:(id)arg1 didConnectToUrl:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)readDataToData;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)socket;
- (void)setSocket:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (BOOL)connected;
- (void)setConnected:(BOOL)arg1;
- (void).cxx_destruct;
@end
