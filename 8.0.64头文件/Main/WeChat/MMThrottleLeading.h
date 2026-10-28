@interface MMThrottleLeading : MMThrottle
{
    double _interval; // +0x8
    id /* block */ _taskBlock; // +0x10
    NSObject<OS_dispatch_queue> * _queue; // +0x18
    NSDate * _lastRunTaskDate; // +0x20
}
- (id)initWithInterval:(double)arg1 onQueue:(id)arg2 taskBlock:(id /* block */)arg3;
- (void)call;
- (void)runTaskDirectly;
- (void)invalidate;
- (double)interval;
- (void)setInterval:(double)arg1;
- (id /* block */)taskBlock;
- (void)setTaskBlock:(id /* block */)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)lastRunTaskDate;
- (void)setLastRunTaskDate:(id)arg1;
- (void).cxx_destruct;
@end
