@interface WCLocalSocketServer : NSObject <GCDAsyncSocketDelegate>
{
    BOOL _serviceSocketSuccess; // +0x8
    id <WCLocalSocketServerDelegate> _delegate; // +0x10
    MMFinderGCDAsyncSocket * _socket; // +0x18
    NSObject<OS_dispatch_queue> * _queue; // +0x20
    NSMutableArray * _sockets; // +0x28
}
- (void)startOnPort:(unsigned short)arg1;
- (void)stop;
- (void)sendData:(id)arg1 socket:(id)arg2;
- (BOOL)isServiceSocketSuccess;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socketDidCloseReadStream:(id)arg1;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)readDataToData:(id)arg1;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 sock:(id)arg3;
- (void)readDataWithTimeout:(double)arg1 sock:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)socket;
- (void)setSocket:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)sockets;
- (void)setSockets:(id)arg1;
- (BOOL)serviceSocketSuccess;
- (void)setServiceSocketSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
