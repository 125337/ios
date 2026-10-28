@interface MMThrottle : NSObject
- (id)initWithInterval:(double)arg1 taskBlock:(id /* block */)arg2;
- (id)initWithInterval:(double)arg1 onQueue:(id)arg2 taskBlock:(id /* block */)arg3;
- (id)initWithThrottleMode:(unsigned long long)arg1 interval:(double)arg2 onQueue:(id)arg3 taskBlock:(id /* block */)arg4;
- (void)call;
- (void)invalidate;
@end
