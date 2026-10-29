@interface TXCAppScreenCapturer : NSObject <TXCTimedOutputDelegate, RPScreenRecorderDelegate, TXIVideoCaptureInterface, TXIScreenCaptureInterface>
{
    BOOL _isRunning; // +0x8
    BOOL _isAppCapturing; // +0x9
    BOOL _isAppCapturerLaunching; // +0xa
    id <TXIScreenCaptureDelegate> delegate; // +0x10
    TXCDispatchQueue * _queue; // +0x18
    TXCDispatchQueue * _outputQueue; // +0x20
    TXCTimedOutput * _timedOutput; // +0x28
    TXCVideoCaptureConfig * _config; // +0x30
    NSMutableSet * _subscribers; // +0x38
    TXCVideoFrame * _capturedVideoFrame; // +0x40
}
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (int)captureType;
- (void)applyConfigs:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (CGSize)screenSize;
- (void)start;
- (void)stop;
- (void)startScreenCaptureInternal:(int)arg1;
- (void)startCaptureWithRestRetryCount:(long long)arg1;
- (void)stopScreenCaptureInternal:(int)arg1;
- (void)notifyError:(id)arg1;
- (void)notifyScreenSize:(id)arg1;
- (void)screenRecorder:(id)arg1 didStopRecordingWithPreviewViewController:(id)arg2 error:(id)arg3;
- (void)screenRecorderDidChangeAvailability:(id)arg1;
- (void)captureFrame:(id /* block */)arg1;
- (void)timedOutput:(id)arg1 outputObject:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)outputQueue;
- (void)setOutputQueue:(id)arg1;
- (id)timedOutput;
- (void)setTimedOutput:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)isAppCapturing;
- (void)setIsAppCapturing:(BOOL)arg1;
- (BOOL)isAppCapturerLaunching;
- (void)setIsAppCapturerLaunching:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)subscribers;
- (void)setSubscribers:(id)arg1;
- (id)capturedVideoFrame;
- (void)setCapturedVideoFrame:(id)arg1;
- (void).cxx_destruct;
@end
