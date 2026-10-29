@interface TXCIOSScreenCapturer : NSObject <TXReplayKitAppDelegate, TXIVideoCaptureInterface, TXIIOSScreenCapturerInterface>
{
    EncodeParamsTypeHeader _currentEncodeParams; // +0x8
    BOOL _isRunning; // +0x20
    TXCDispatchQueue * _queue; // +0x28
    TXCDispatchQueue * _outputQueue; // +0x30
    NSMutableSet * _subscribers; // +0x38
    NSString * _appGroupId; // +0x40
}
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned long long)captureType;
- (void)applyConfigs:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)start;
- (void)stop;
- (void)onReceiveVideoPacket:(const void *)arg1;
- (void)onBroadcastExtStarted;
- (void)onBroadcastExtFinished;
- (void)onBroadcastExtPaused;
- (void)onBroadcastExtResumed;
- (void)setEncodeParams:(const void *)arg1;
- (void)requestKeyFrame;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)outputQueue;
- (void)setOutputQueue:(id)arg1;
- (id)subscribers;
- (void)setSubscribers:(id)arg1;
- (id)appGroupId;
- (void)setAppGroupId:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (void).cxx_destruct;
@end

