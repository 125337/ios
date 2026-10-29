@interface NSObject (MMContextSwizzleForPerformSelector)
+ (void)mmCancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)mmCancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (void)load;
- (id)mmArgumentQueue;
- (void)mmAddArgument:(id)arg1;
- (void)mmRemoveArgument:(id)arg1;
- (void)mmRemoveAllArguments;
- (void)mmContextPerformedSelector:(id)arg1;
- (void)mmPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)mmPerformSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 modes:(id)arg4;
- (void)mmPerformSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 modes:(id)arg5;
- (void)mmPerformSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)mmAddObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)mmRemoveObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)mmRemoveObserver:(id)arg1 forKeyPath:(id)arg2;
@end
