@interface MagicWeAppResourcePreloadReporter : NSObject
- (void)reportRequest:(id)arg1;
- (void)reportConsume:(id)arg1;
- (int)costMsFrom:(double)arg1 to:(double)arg2;
- (void)reportFinish:(id)arg1;
- (void)reportFinish:(id)arg1 cancelledBySweep:(BOOL)arg2;
- (void)reportInvalidation:(id)arg1 reason:(unsigned int)arg2 source:(unsigned int)arg3;
@end
