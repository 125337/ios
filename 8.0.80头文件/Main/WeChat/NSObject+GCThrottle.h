@interface NSObject (GCThrottle)
- (BOOL)performSelector:(SEL)arg1 withObject:(id)arg2 withMinInterval:(double)arg3;
- (void)checkShouldDeallocAfter5;
- (void)checkShouldDeallocAfterTime:(double)arg1;
- (void)checkNil;
@end
