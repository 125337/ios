@interface TXReplayKitApp : NSObject <TXCMediaStreamIPCTunnelServerDelegate>
{
    EncodeParamsTypeHeader _replaykitEncodeParmas; // +0x8
    unsigned int _encodedFrameCount; // +0x24
    unsigned int _encodedWidth; // +0x28
    unsigned int _encodedHeight; // +0x2c
    unsigned int _encodeDataLengthInBits; // +0x30
    unique_ptr<liteav::Throtter, std::default_delete<liteav::Throtter>> _stats_throtter; // +0x38
    unsigned int _last_request_keyframe_ts_ms; // +0x40
    NSMutableDictionary * _delegateTable; // +0x48
    TXCMediaStreamIPCTunnelServer * _server; // +0x50
    TXCDarwinNotificationCenter * _center; // +0x58
    NSObject<OS_dispatch_queue> * _outputQueue; // +0x60
    ReplayKitEncoderStats * _replayKitEncoderStats; // +0x68
    NSMutableArray * _seiList; // +0x70
}
+ (id)sharedInstance;
- (id)init;
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
- (void)setCoverImage:(CoverImageTypeHeader)arg1 ImageData:(vector<unsigned char, std::allocator<unsigned char>>)arg2;
- (void)addSei:(const void *)arg1 payloadType:(int)arg2 repeatTimes:(int)arg3;
- (void)bindSeiNaluToPacket:(void *)arg1;
- (void)onReceiveVideoPacket:(unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::VideoTypeHeader>>>)arg1;
- (void)onReceiveAudioPacket:(unique_ptr<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>, std::default_delete<liteav::replayKit::IPCTunnelPacket<liteav::replayKit::AudioTypeHeader>>>)arg1;
- (void)onConnected;
- (void)onDisconnected;
- (id)GetEncoderStats;
- (void)accumulateStatsData:(void *)arg1;
- (void)updateEncoderStats;
- (id)delegateTable;
- (void)setDelegateTable:(id)arg1;
- (id)server;
- (void)setServer:(id)arg1;
- (id)center;
- (void)setCenter:(id)arg1;
- (id)outputQueue;
- (void)setOutputQueue:(id)arg1;
- (id)replayKitEncoderStats;
- (void)setReplayKitEncoderStats:(id)arg1;
- (id)seiList;
- (void)setSeiList:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
