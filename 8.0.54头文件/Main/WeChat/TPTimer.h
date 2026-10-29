@interface TPTimer : NSObject
{
    BOOL _isValid; // +0x8
    BOOL _isrepeat; // +0x9
    double _timeInterval; // +0x10
    id _atarget; // +0x18
    SEL _aSelector; // +0x20
    id _userInfo; // +0x28
    NSObject<OS_dispatch_queue> * _queue; // +0x30
}
+ (id)timerQueue;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 queue:(id)arg6;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
- (id)init;
- (void)repeatSelector;
- (void)resume;
- (void)resumeAfterSec:(long long)arg1;
- (void)pause;
- (void)invalidate;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (id)atarget;
- (void)setAtarget:(id)arg1;
- (SEL)aSelector;
- (void)setASelector:(SEL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (BOOL)isrepeat;
- (void)setIsrepeat:(BOOL)arg1;
- (void).cxx_destruct;
@end

