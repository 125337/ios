@interface MBTimerInfo : NSObject
{
    BOOL _repeat; // +0x8
    BOOL _paused; // +0x9
    int _timerId; // +0xc
    NSTimer * _timer; // +0x10
    void * _holder; // +0x18
    NSDate * _pauseStart; // +0x20
    NSDate * _previousFireDate; // +0x28
}
- (void)pauseTimer;
- (void)resumeTimer;
- (void *)detachHolder;
- (BOOL)repeat;
- (void)setRepeat:(BOOL)arg1;
- (int)timerId;
- (void)setTimerId:(int)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void *)holder;
- (void)setHolder:(void *)arg1;
- (BOOL)paused;
- (void)setPaused:(BOOL)arg1;
- (id)pauseStart;
- (void)setPauseStart:(id)arg1;
- (id)previousFireDate;
- (void)setPreviousFireDate:(id)arg1;
- (void).cxx_destruct;
@end
