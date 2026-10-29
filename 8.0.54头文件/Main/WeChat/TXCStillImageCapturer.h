@interface TXCStillImageCapturer : NSObject <TXCTimedOutputDelegate, TXIVideoCaptureInterface, TXIVirtualCapturerInterface>
{
    BOOL _isRunning; // +0x8
    TXCDispatchQueue * _queue; // +0x10
    TXCDispatchQueue * _outputQueue; // +0x18
    TXCVideoCaptureConfig * _config; // +0x20
    NSMutableSet * _subscribers; // +0x28
    TXCTimedOutput * _timedOutput; // +0x30
    long long _defaultFps; // +0x38
}
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;
- (unsigned long long)captureType;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)applyConfigs:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)setStillImage:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateFps:(long long)arg1;
- (void)updateStillImage:(id)arg1;
- (void)timedOutput:(id)arg1 outputObject:(id)arg2;
- (id)queue;
- (id)outputQueue;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)subscribers;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (id)timedOutput;
- (void)setTimedOutput:(id)arg1;
- (long long)defaultFps;
- (void).cxx_destruct;
@end

