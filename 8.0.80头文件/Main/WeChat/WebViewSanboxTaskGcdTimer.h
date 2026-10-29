@interface WebViewSanboxTaskGcdTimer : NSObject
{
    NSObject<OS_dispatch_source> * _timer; // +0x8
    id _userInfo; // +0x10
}
+ (id)scheduledTimerWithQueue:(id)arg1 timeInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
+ (id)scheduledTimerWithQueue:(id)arg1 timeInterval:(double)arg2 block:(id /* block */)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
- (void)invalidate;
- (id)userInfo;
- (void)dealloc;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
