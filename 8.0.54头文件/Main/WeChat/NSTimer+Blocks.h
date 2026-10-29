@interface NSTimer (Blocks)
+ (void)initialize;
+ (id)sc_timerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(id /* block */)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 block:(id /* block */)arg2 repeats:(BOOL)arg3;
+ (id)timerWithTimeInterval:(double)arg1 block:(id /* block */)arg2 repeats:(BOOL)arg3;
+ (void)jdExecuteSimpleBlock:(id)arg1;
@end

