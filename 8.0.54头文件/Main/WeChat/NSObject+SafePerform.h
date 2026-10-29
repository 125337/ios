@interface NSObject (SafePerform)
+ (id)safeCast:(id)arg1;
+ (void)safeCancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (void)safeCancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)objectWrapper;
- (id)objectWrapperIfExist;
- (void)safePerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)safePerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (id /* block */)preciselyPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 delayPrecision:(double)arg4 inModes:(id)arg5;
- (void)gcdAfterDelay:(double)arg1 delayPrecision:(double)arg2 isCanceledBlock:(id /* block */)arg3 finalblock:(id /* block */)arg4;
@end

