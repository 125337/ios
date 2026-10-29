@interface WCFinderFeedCacheMetrics : NSObject <PBCoding>
{
    long long _strategy; // +0x8
    NSString * _contextId; // +0x10
    unsigned long long _totalCount; // +0x18
    unsigned long long _hitCount; // +0x20
    unsigned long long _retryCount; // +0x28
    unsigned long long _evictCount; // +0x30
    unsigned long long _actualCost; // +0x38
    unsigned long long _evictCost; // +0x40
}
+ (void)PBArrayAdd_strategy;
+ (void)PBArrayAdd_contextId;
+ (void)PBArrayAdd_totalCount;
+ (void)PBArrayAdd_hitCount;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_actualCost;
+ (void)PBArrayAdd_evictCount;
+ (void)PBArrayAdd_evictCost;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrategy:(long long)arg1;
- (long long)strategy;
- (void)setStrategy:(long long)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (unsigned long long)hitCount;
- (void)setHitCount:(unsigned long long)arg1;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (unsigned long long)evictCount;
- (void)setEvictCount:(unsigned long long)arg1;
- (unsigned long long)actualCost;
- (void)setActualCost:(unsigned long long)arg1;
- (unsigned long long)evictCost;
- (void)setEvictCost:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

