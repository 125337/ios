@interface WXVoIPAudioUnitThreadDaemon : NSObject
{
    BOOL _isThreadAlive; // +0x8
    unsigned short _maxCaptureSampleValue; // +0xa
    unsigned int _timingIntervalInMS; // +0xc
    id <WXVoIPAudioUnitThreadDaemonDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _timerQueue; // +0x18
    NSObject<OS_dispatch_source> * _timer; // +0x20
}
- (id)init:(id)arg1 delegate:(id)arg2 intervalInMs:(unsigned int)arg3;
- (void)dealloc;
- (void)initTimer;
- (void)notifyCapturing:(const AudioFrame *)arg1;
- (void)notifyPlaying;
- (void)timingProcess;
- (BOOL)needCapture;
- (BOOL)needPlay;
- (BOOL)isCaptureMute;
- (BOOL)isThreadDead;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timerQueue;
- (void)setTimerQueue:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (BOOL)isThreadAlive;
- (void)setIsThreadAlive:(BOOL)arg1;
- (unsigned short)maxCaptureSampleValue;
- (void)setMaxCaptureSampleValue:(unsigned short)arg1;
- (unsigned int)timingIntervalInMS;
- (void)setTimingIntervalInMS:(unsigned int)arg1;
- (void).cxx_destruct;
@end

