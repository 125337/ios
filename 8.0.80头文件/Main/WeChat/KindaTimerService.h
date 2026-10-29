@interface KindaTimerService : NSObject <MMKTimerService>
{
    BOOL _needThrottle; // +0x8
    double _m_interval; // +0x10
    MMVoidCallback * _m_timeCheckCallback; // +0x18
    MMTimer * _m_timer; // +0x20
}
- (void)initIntervalAndCheckedCallbackImpl:(float)arg1 timeCheckCallback:(id)arg2;
- (void)startTimeCheck;
- (void)stopTimeCheck;
- (void)timeCheckCallback;
- (void)throttleImpl:(float)arg1 handler:(id)arg2;
- (void)dispatchAfterImpl:(float)arg1 handle:(id)arg2;
- (double)now;
- (void)dispatchAsyncInBgThreadImpl:(id)arg1;
- (void)dispatchAsyncInMainThreadImpl:(id)arg1;
- (double)m_interval;
- (void)setM_interval:(double)arg1;
- (id)m_timeCheckCallback;
- (void)setM_timeCheckCallback:(id)arg1;
- (id)m_timer;
- (void)setM_timer:(id)arg1;
- (BOOL)needThrottle;
- (void)setNeedThrottle:(BOOL)arg1;
- (void).cxx_destruct;
@end
