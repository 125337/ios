@interface WCFinderLimitedCapacityQueueMgr : NSObject
{
    NSMutableDictionary * _capacityContainerDic; // +0x8
    long long _capacityCount; // +0x10
}
- (id)initWithCapacityCount:(long long)arg1;
- (id)initWithCapacityCount:(long long)arg1 queueKey:(id)arg2;
- (BOOL)appendObject:(id)arg1;
- (id)getCapacityQueue;
- (BOOL)removeFirstObject;
- (BOOL)removeLastObject;
- (void)resetQueueState;
- (id)initWithCapacityCount:(long long)arg1 queueKeyArray:(id)arg2;
- (id)getCapacityQueueArrayFromContainerDicWithKey:(id)arg1;
- (BOOL)appendObject:(id)arg1 queueKey:(id)arg2;
- (BOOL)checkObjectAlreadyInQueue:(id)arg1 queueKey:(id)arg2;
- (id)getCapacityQueueWithQueueKey:(id)arg1;
- (BOOL)removeFirstObjectWithQueueKey:(id)arg1;
- (BOOL)removeLastObjectWithQueueKey:(id)arg1;
- (BOOL)resetQueueStateWithQueueKey:(id)arg1;
- (void)resetAllQueueState;
- (id)getAllCapacityObject;
- (id)capacityContainerDic;
- (void)setCapacityContainerDic:(id)arg1;
- (long long)capacityCount;
- (void)setCapacityCount:(long long)arg1;
- (void).cxx_destruct;
@end
