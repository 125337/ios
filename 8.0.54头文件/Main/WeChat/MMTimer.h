@interface MMTimer : NSObject
{
    BOOL _paused; // +0x8
    NSTimer * _m_timer; // +0x10
    NSDate * _pauseStart; // +0x18
    NSDate * _previousFireDate; // +0x20
}
+ (id)scheduledNoRetainTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (id)startTimeCheckWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)dealloc;
- (void)stopTimeCheck;
- (void)invalidate;
- (void)pauseTimer;
- (void)resumeTimer;
- (id)m_timer;
- (void)setM_timer:(id)arg1;
- (BOOL)paused;
- (void)setPaused:(BOOL)arg1;
- (id)pauseStart;
- (void)setPauseStart:(id)arg1;
- (id)previousFireDate;
- (void)setPreviousFireDate:(id)arg1;
- (void).cxx_destruct;
@end

