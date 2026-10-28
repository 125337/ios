@interface WCFinderLimitedSet : NSObject
{
    NSMutableSet * _set; // +0x8
    NSMutableArray * _orderArray; // +0x10
    unsigned long long _maxCount; // +0x18
}
- (id)initWithMaxCount:(unsigned long long)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)removeOldestObject;
- (void)clearAllObjects;
- (id)set;
- (void)setSet:(id)arg1;
- (id)orderArray;
- (void)setOrderArray:(id)arg1;
- (unsigned long long)maxCount;
- (void)setMaxCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
