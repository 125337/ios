@interface WCFinderDramaPermeateStreamCache : NSObject <PBCoding>
{
    BOOL _hasMore; // +0x8
    NSArray * _firstScreenObjects; // +0x10
    NSString * _nextPageBuffer; // +0x18
    unsigned long long _tabSessionId; // +0x20
    unsigned long long _cacheTimestamp; // +0x28
}
+ (void)PBArrayAdd_firstScreenObjects;
+ (void)PBArrayAdd_nextPageBuffer;
+ (void)PBArrayAdd_tabSessionId;
+ (void)PBArrayAdd_cacheTimestamp;
+ (void)PBArrayAdd_hasMore;
+ (void)initialize;
+ (id)mappedKV;
+ (id)readCache;
+ (void)writeCache:(id)arg1;
+ (void)clearCache;
+ (BOOL)hasFreshCacheWithinSeconds:(unsigned long long)arg1;
+ (unsigned long long)cacheTimestamp;
+ (BOOL)hasValidFirstScreenObjectsWithFirstObjectTid:(id)arg1;
+ (unsigned long long)firstScreenObjectCount;
- (id)init;
- (id)getPBPropertyTable;
- (id)firstScreenObjects;
- (void)setFirstScreenObjects:(id)arg1;
- (id)nextPageBuffer;
- (void)setNextPageBuffer:(id)arg1;
- (unsigned long long)tabSessionId;
- (void)setTabSessionId:(unsigned long long)arg1;
- (unsigned long long)cacheTimestamp;
- (void)setCacheTimestamp:(unsigned long long)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
