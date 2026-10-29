@interface TXReplayKitApp : NSObject <TXCMediaStreamIPCTunnelServerDelegate>
{
    NSMutableDictionary * _delegateTable; // +0x8
    TXCMediaStreamIPCTunnelServer * _server; // +0x10
    TXCDarwinNotificationCenter * _center; // +0x18
    NSObject<OS_dispatch_queue> * _outputQueue; // +0x20
}
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
- (void)removeObserver;
- (void)setupObserver;
- (void)startWithAppGroup:(id)arg1;
- (void)stop;
- (void)pause;
- (void)resume;
- (void)updateEncoderParams:(EncodeParamsTypeHeader)arg1;
- (void)requestIFrame;
- (void)addDelegateWithKey:(id)arg1 delegate:(id)arg2;
- (void)removeDelegateWithKey:(id)arg1;
- (void)onReceiveVideoPacket:(unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>>>)arg1;
- (void)onReceiveAudioPacket:(unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>>>)arg1;
- (void)onConnected;
- (void)onDisconnected;
- (id)delegateTable;
- (void)setDelegateTable:(id)arg1;
- (id)server;
- (void)setServer:(id)arg1;
- (id)center;
- (void)setCenter:(id)arg1;
- (id)outputQueue;
- (void)setOutputQueue:(id)arg1;
- (void).cxx_destruct;
@end

