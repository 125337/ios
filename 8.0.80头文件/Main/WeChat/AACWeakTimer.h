@interface AACWeakTimer : NSObject
{
    struct _timerFlags; // +0x8
    MMContext * m_context; // +0x10
    BOOL _repeats; // +0x18
    double _tolerance; // +0x20
    double _timeInterval; // +0x28
    id _target; // +0x30
    SEL _selector; // +0x38
    id _userInfo; // +0x40
    NSObject<OS_dispatch_queue> * _privateSerialQueue; // +0x48
    NSObject<OS_dispatch_source> * _timer; // +0x50
}
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 dispatchQueue:(id)arg6;
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 dispatchQueue:(id)arg6;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
- (void)resetTimerProperties;
- (void)schedule;
- (void)fire;
- (void)invalidate;
- (void)timerFired;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)repeats;
- (void)setRepeats:(BOOL)arg1;
- (id)privateSerialQueue;
- (void)setPrivateSerialQueue:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
