@interface MMLivePrioritizedQueue : MMLiveQueue
{
    id /* block */ _comparator; // +0x8
}
- (id)initWithPrioritizationPolicy:(id /* block */)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)defaultEvictionBehavior;
- (void)enqueueEx:(id)arg1 tieBreakingBehavior:(unsigned long long)arg2;
- (id /* block */)comparator;
- (void)setComparator:(id /* block */)arg1;
- (void).cxx_destruct;
@end

