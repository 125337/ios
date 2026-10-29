@interface TXCCustomCapturer : NSObject <TXCTimedOutputDelegate, TXIVideoCaptureInterface, TXICustomCapturerInterface>
{
    BOOL _isRunning; // +0x8
    BOOL _isTranscodingMode; // +0x9
    unsigned int _currentPtsMs; // +0xc
    unsigned int _firstPtsMs; // +0x10
    unsigned long long captureType; // +0x18
    TXCDispatchQueue * _queue; // +0x20
    TXCDispatchQueue * _outputQueue; // +0x28
    TXCVideoCaptureConfig * _config; // +0x30
    NSMutableSet * _subscribers; // +0x38
    TXCPixelBufferPool * _bufferPool; // +0x40
    id /* block */ _logger; // +0x48
    long long _lastTicks; // +0x50
    TXCTimedOutput * _timedOutput; // +0x58
    unsigned long long _firstOutputMs; // +0x60
}
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2;
- (unsigned long long)captureType;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)applyConfigs:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)sendVideoFrame:(id)arg1;
- (void)enableTranscodingMode:(BOOL)arg1;
- (void)startTimedOutput;
- (void)stopTimedOutput;
- (void)updateFps:(long long)arg1;
- (id)convertFrame:(id)arg1;
- (void)timedOutput:(id)arg1 outputObject:(id)arg2;
- (id)queue;
- (id)outputQueue;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)subscribers;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (id)bufferPool;
- (id /* block */)logger;
- (void)setLogger:(id /* block */)arg1;
- (long long)lastTicks;
- (void)setLastTicks:(long long)arg1;
- (id)timedOutput;
- (void)setTimedOutput:(id)arg1;
- (unsigned int)currentPtsMs;
- (void)setCurrentPtsMs:(unsigned int)arg1;
- (unsigned int)firstPtsMs;
- (void)setFirstPtsMs:(unsigned int)arg1;
- (unsigned long long)firstOutputMs;
- (void)setFirstOutputMs:(unsigned long long)arg1;
- (BOOL)isTranscodingMode;
- (void)setIsTranscodingMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

