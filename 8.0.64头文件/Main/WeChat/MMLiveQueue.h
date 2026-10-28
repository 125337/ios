@interface MMLiveQueue : NSObject <NSFastEnumeration>
{
    unsigned long long _maxCount; // +0x8
    NSMutableArray * _queue; // +0x10
}
- (id)init;
- (id)initNonPrioritized;
- (id)initNonPrioritizedWithMaxCount:(unsigned long long)arg1;
- (id)initWithPrioritizationPolicy:(id /* block */)arg1;
- (id)initWithPrioritizationPolicy:(id /* block */)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)count;
- (unsigned long long)defaultEvictionBehavior;
- (BOOL)enqueue:(id)arg1;
- (BOOL)enqueue:(id)arg1 evictionBehavior:(unsigned long long)arg2;
- (BOOL)enqueue:(id)arg1 evictionBehavior:(unsigned long long)arg2 tieBreakingBehavior:(unsigned long long)arg3;
- (id)peek;
- (id)dequeue;
- (BOOL)contains:(id)arg1;
- (unsigned long long)indexOf:(id)arg1;
- (void)reprioritize:(id)arg1;
- (void)reprioritize:(id)arg1 tieBreakingBehavior:(unsigned long long)arg2;
- (void)reprioritizeAll;
- (BOOL)remove:(id)arg1;
- (void)clear;
- (id)arrayCopy;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)enqueueEx:(id)arg1 tieBreakingBehavior:(unsigned long long)arg2;
- (unsigned long long)maxCount;
- (void)setMaxCount:(unsigned long long)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
