@interface TXCIOSScreenCapturer : NSObject <TXReplayKitAppDelegate, TXIVideoCaptureInterface, TXIIOSScreenCapturerInterface>
{
    EncodeParamsTypeHeader _currentEncodeParams; // +0x8
    BOOL _isRunning; // +0x24
    BOOL _needsKeyFrame; // +0x25
    id <TXIScreenCaptureDelegate> delegate; // +0x28
    TXCDispatchQueue * _queue; // +0x30
    TXCDispatchQueue * _outputQueue; // +0x38
    NSMutableSet * _subscribers; // +0x40
    TXCVideoFrame * _capturedVideoFrame; // +0x48
    NSString * _appGroupId; // +0x50
}
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (int)captureType;
- (void)applyConfigs:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)start;
- (void)stop;
- (void)onReceiveVideoPacket:(const void *)arg1;
- (void)onBroadcastExtStarted;
- (void)onBroadcastExtFinished;
- (void)onBroadcastExtPaused;
- (void)onBroadcastExtResumed;
- (void)onConnected;
- (void)captureFrame:(id /* block */)arg1;
- (void)setEncodeParams:(const void *)arg1;
- (void)setVideoEncodeParams:(const VideoEncodeParams *)arg1;
- (void)setBitrate:(long long)arg1;
- (void)requestKeyFrame;
- (void)enableTranscodingMode:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)outputQueue;
- (void)setOutputQueue:(id)arg1;
- (id)subscribers;
- (void)setSubscribers:(id)arg1;
- (id)capturedVideoFrame;
- (void)setCapturedVideoFrame:(id)arg1;
- (id)appGroupId;
- (void)setAppGroupId:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)needsKeyFrame;
- (void)setNeedsKeyFrame:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
