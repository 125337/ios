@interface MMLiveKWSProcessor : NSObject <MMLiveKWSEngine>
{
    BOOL _isSessionActive; // +0x8
    int _dropCount; // +0xc
    id <MMLiveKWSEngineDelegate> _delegate; // +0x10
    void * _kwsHandle; // +0x18
    NSObject<OS_dispatch_semaphore> * _frameSemaphore; // +0x20
    NSObject<OS_dispatch_queue> * _processQueue; // +0x28
    MMTimer * _calibrationTimer; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (BOOL)isEngineReady;
- (BOOL)loadResourceWithPath:(id)arg1 resName:(id)arg2;
- (void)processAudioData:(id)arg1 channels:(int)arg2 sampleRate:(int)arg3;
- (void)_processAudioDataImpl:(id)arg1 channels:(int)arg2 sampleRate:(int)arg3;
- (void)feedDataToEngine:(const short *)arg1 length:(int)arg2;
- (void)handleWakeupDetected;
- (void)resetSession;
- (void)startCalibrationTimer;
- (void)stopCalibrationTimer;
- (void)onCalibrationTick;
- (void)releaseEngine;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void *)kwsHandle;
- (void)setKwsHandle:(void *)arg1;
- (BOOL)isSessionActive;
- (void)setIsSessionActive:(BOOL)arg1;
- (int)dropCount;
- (void)setDropCount:(int)arg1;
- (id)frameSemaphore;
- (void)setFrameSemaphore:(id)arg1;
- (id)processQueue;
- (void)setProcessQueue:(id)arg1;
- (id)calibrationTimer;
- (void)setCalibrationTimer:(id)arg1;
- (void).cxx_destruct;
@end
