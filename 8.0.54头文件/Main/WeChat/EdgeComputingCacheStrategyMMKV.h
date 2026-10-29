@interface EdgeComputingCacheStrategyMMKV : EdgeComputingCacheStrategyBase
- (void)save:(id)arg1;
- (void)remove:(id)arg1;
- (void)clear;
- (id)query:(id)arg1;
- (unsigned long long)count;
- (id)getMMKV;
- (id)keyForDataCache:(id)arg1;
@end

