@interface MMFinderJoinLivePrefetchInfo : NSObject
{
    BOOL _usePrefetchCache; // +0x8
    unsigned long long _fetchType; // +0x10
    unsigned long long _prefetchCgiRequestTime; // +0x18
    unsigned long long _consumeCgiRequestTime; // +0x20
}
- (unsigned long long)fetchType;
- (void)setFetchType:(unsigned long long)arg1;
- (BOOL)usePrefetchCache;
- (void)setUsePrefetchCache:(BOOL)arg1;
- (unsigned long long)prefetchCgiRequestTime;
- (void)setPrefetchCgiRequestTime:(unsigned long long)arg1;
- (unsigned long long)consumeCgiRequestTime;
- (void)setConsumeCgiRequestTime:(unsigned long long)arg1;
@end

