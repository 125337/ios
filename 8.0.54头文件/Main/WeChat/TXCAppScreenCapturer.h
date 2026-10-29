@interface TXCAppScreenCapturer : NSObject <TXCTimedOutputDelegate, RPScreenRecorderDelegate, TXIVideoCaptureInterface, TXIScreenCaptureInterface>
{
    BOOL _isRunning; // +0x8
    unsigned long long captureType; // +0x10
    TXCDispatchQueue * _queue; // +0x18
    TXCDispatchQueue * _outputQueue; // +0x20
    TXCTimedOutput * _timedOutput; // +0x28
    TXCVideoCaptureConfig * _config; // +0x30
    NSMutableSet * _subscribers; // +0x38
}
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned long long)captureType;
- (void)applyConfigs:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (CGSize)screenSize;
- (void)start;
- (void)stop;
- (void)startScreenCaptureInternal:(int)arg1;
- (void)stopScreenCaptureInternal:(int)arg1;
- (void)startCaptureWithRestRetryCount:(long long)arg1;
- (void)notifyError:(id)arg1;
- (void)notifyScreenSize:(id)arg1;
- (void)screenRecorder:(id)arg1 didStopRecordingWithPreviewViewController:(id)arg2 error:(id)arg3;
- (void)screenRecorderDidChangeAvailability:(id)arg1;
- (void)timedOutput:(id)arg1 outputObject:(id)arg2;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)outputQueue;
- (void)setOutputQueue:(id)arg1;
- (id)timedOutput;
- (void)setTimedOutput:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)subscribers;
- (void)setSubscribers:(id)arg1;
- (void).cxx_destruct;
@end

