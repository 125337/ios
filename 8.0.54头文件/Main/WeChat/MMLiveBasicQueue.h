@interface MMLiveBasicQueue : MMLiveQueue
- (unsigned long long)defaultEvictionBehavior;
- (void)enqueueEx:(id)arg1 tieBreakingBehavior:(unsigned long long)arg2;
@end

