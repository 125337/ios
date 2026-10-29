@interface WCFinderPrefetchDisasterInfo : NSObject <PBCoding>
{
    unsigned long long _lastRequestTimestamp; // +0x8
    unsigned long long _requestInterval; // +0x10
}
+ (void)PBArrayAdd_lastRequestTimestamp;
+ (void)PBArrayAdd_requestInterval;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned long long)nextAllowedRequestTimestamp;
- (id)description;
- (unsigned long long)lastRequestTimestamp;
- (void)setLastRequestTimestamp:(unsigned long long)arg1;
- (unsigned long long)requestInterval;
- (void)setRequestInterval:(unsigned long long)arg1;
@end

