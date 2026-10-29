@interface MMFinderLiveRewardComboPriorityQueue : NSObject
{
    NSMutableArray * _comboObjectQueue; // +0x8
    id /* block */ _comparator; // +0x10
}
- (id)init;
- (id)initWithCapacity:(int)arg1;
- (BOOL)isEmpty;
- (unsigned long long)size;
- (BOOL)contains:(id)arg1;
- (void)clear;
- (void)add:(id)arg1;
- (void)remove:(id)arg1;
- (id)peek;
- (id)poll;
- (id)toArray;
- (id /* block */)comparator;
- (void)insert:(id)arg1;
- (id)comboObjectQueue;
- (void)setComboObjectQueue:(id)arg1;
- (void)setComparator:(id /* block */)arg1;
- (void).cxx_destruct;
@end
