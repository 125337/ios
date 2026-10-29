@interface NewLifePrefetchConfig : NSObject <PBCoding>
{
    BOOL _ignoreIntervalLimit; // +0x8
    BOOL _checkExpired; // +0x9
    BOOL _isLoading; // +0xa
    BOOL _disablePrefetchWhenPageExists; // +0xb
    unsigned int _pullType; // +0xc
    long long _type; // +0x10
    unsigned long long _tabTipsId; // +0x18
    NSData * _tabTipsPassInfo; // +0x20
    NewLifePagePreloadCache * _preloadCache; // +0x28
    NSString * _searchPassInfo; // +0x30
    unsigned long long _prefetchTimeStamp; // +0x38
    unsigned long long _expiredTime; // +0x40
    NewLifeStreamResponse * _response; // +0x48
    NSString * _identifierId; // +0x50
}
+ (id)defaultConfig;
+ (id)configFromRedDotTipsShowInfo:(id)arg1;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_tabTipsId;
+ (void)PBArrayAdd_tabTipsPassInfo;
+ (void)PBArrayAdd_ignoreIntervalLimit;
+ (void)PBArrayAdd_checkExpired;
+ (void)PBArrayAdd_prefetchTimeStamp;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_response;
+ (void)PBArrayAdd_searchPassInfo;
+ (void)PBArrayAdd_identifierId;
+ (void)PBArrayAdd_pullType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)isExpired;
- (unsigned int)lastPrefecthTime;
- (void)setLastPrefecthTime:(unsigned int)arg1;
- (unsigned int)checkOutterPrefetchInterval;
- (unsigned int)prefetchValidTimeInterval;
- (unsigned int)prefetchTimeInterval;
- (BOOL)shouldPrefetchStream;
- (void)tryPrefetch:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)setPrefetchExistObjectList:(id)arg1;
- (void)setPrefetchReadStatList:(id)arg1;
- (void)deactive;
- (id)generatePrefetchCallbackReq;
- (void)predownloadImage:(id)arg1 index:(long long)arg2;
- (void)predownloadFeedIndexImage:(id)arg1 index:(long long)arg2 feedCount:(long long)arg3;
- (long long)type;
- (void)setType:(long long)arg1;
- (unsigned long long)tabTipsId;
- (void)setTabTipsId:(unsigned long long)arg1;
- (id)tabTipsPassInfo;
- (void)setTabTipsPassInfo:(id)arg1;
- (id)preloadCache;
- (void)setPreloadCache:(id)arg1;
- (id)searchPassInfo;
- (void)setSearchPassInfo:(id)arg1;
- (BOOL)ignoreIntervalLimit;
- (void)setIgnoreIntervalLimit:(BOOL)arg1;
- (BOOL)checkExpired;
- (void)setCheckExpired:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (unsigned long long)prefetchTimeStamp;
- (void)setPrefetchTimeStamp:(unsigned long long)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)identifierId;
- (void)setIdentifierId:(id)arg1;
- (unsigned int)pullType;
- (void)setPullType:(unsigned int)arg1;
- (BOOL)disablePrefetchWhenPageExists;
- (void)setDisablePrefetchWhenPageExists:(BOOL)arg1;
- (void).cxx_destruct;
@end

