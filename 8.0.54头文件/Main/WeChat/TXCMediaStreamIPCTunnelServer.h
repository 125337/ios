@interface TXCMediaStreamIPCTunnelServer : NSObject <TXCIPCTunnelTransportDelegate>
{
    BOOL _isAccept; // +0x8
    id <TXCMediaStreamIPCTunnelServerDelegate> _delegate; // +0x10
    TXCIPCTunnelTransport * _transport; // +0x18
}
- (id)initWithAppGroup:(id)arg1 delegate:(id)arg2;
- (void)startListen;
- (void)sendSamplePacketWithCmd:(unsigned int)arg1;
- (void)requestIFrame;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)sendVersion;
- (void)sendTime;
- (void)updateEncoderParams:(EncodeParamsTypeHeader)arg1;
- (void)onReceivePacket:(int)arg1 data:(id)arg2;
- (void)onConnect;
- (void)onAccept;
- (void)onDisconnect;
- (BOOL)isAccept;
- (void)setIsAccept:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)transport;
- (void)setTransport:(id)arg1;
- (void).cxx_destruct;
@end

