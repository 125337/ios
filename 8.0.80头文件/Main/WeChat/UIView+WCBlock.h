@interface UIView (WCBlock)
- (void)whenTapWithNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (void)whenTapWithNumberOfTouches:(unsigned long long)arg1 numberOfTaps:(unsigned long long)arg2 delay:(double)arg3 handler:(id /* block */)arg4;
- (void)addTapAction:(id /* block */)arg1;
@end
