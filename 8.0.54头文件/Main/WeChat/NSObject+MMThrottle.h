@interface NSObject (MMThrottle)
- (void)doThrottledTaskWithInterval:(double)arg1 taskId:(id)arg2 taskBlock:(id /* block */)arg3;
- (void)doThrottledTaskWithMode:(unsigned long long)arg1 interval:(double)arg2 taskId:(id)arg3 taskBlock:(id /* block */)arg4;
@end

