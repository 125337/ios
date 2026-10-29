@interface MMFinderLiveLastBufferHandler : NSObject
{
    NSData * _cachedData; // +0x8
    unsigned long long _usageCount; // +0x10
    NSDate * _lastUpdateDate; // +0x18
    unsigned long long _maxUsageCount; // +0x20
    double _expirationInterval; // +0x28
}
- (id)initWithData:(id)arg1 maxUsageCount:(unsigned long long)arg2 expirationInterval:(double)arg3;
- (void)setData:(id)arg1;
- (id)getData;
- (void)resetData;
- (void)_resetDataLocked;
- (BOOL)shouldReset;
- (id)cachedData;
- (void)setCachedData:(id)arg1;
- (unsigned long long)usageCount;
- (void)setUsageCount:(unsigned long long)arg1;
- (id)lastUpdateDate;
- (void)setLastUpdateDate:(id)arg1;
- (unsigned long long)maxUsageCount;
- (void)setMaxUsageCount:(unsigned long long)arg1;
- (double)expirationInterval;
- (void)setExpirationInterval:(double)arg1;
- (void).cxx_destruct;
@end
