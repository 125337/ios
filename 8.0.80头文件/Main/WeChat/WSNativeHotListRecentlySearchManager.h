@interface WSNativeHotListRecentlySearchManager : NSObject <WebSearchMgrDelegate>
{
    NSString * _matchedQuery; // +0x8
    NSString * _matchedTagTitle; // +0x10
    long long _matchedType; // +0x18
    NSMutableDictionary * _rawDict; // +0x20
    NSDictionary * _responseData; // +0x28
    double _cacheTime; // +0x30
    double _clientExpireTime; // +0x38
    FTSWebSearchMgr * _webSearchMgr; // +0x40
    NSString * _lastFetchedSessionId; // +0x48
    id /* block */ _completion; // +0x50
    NSMutableArray * _recentlySearchExposeList; // +0x58
    MemoryMappedKV * _mmkv; // +0x60
}
+ (id)sharedManager;
+ (BOOL)isFeatureEnabled;
+ (void)invalidateCacheForNextFetch;
+ (void)onSearchPerformed:(id)arg1;
- (id)init;
- (void)callCompletionAndClear;
- (void)loadCache;
- (void)invalidateCache;
- (void)saveCache;
- (void)saveRecentlySearchExposeList;
- (BOOL)isCacheValid;
- (id)readMMKVDictForKey:(id)arg1;
- (id)readMMKVStringForKey:(id)arg1;
- (id)buildHisReqInfo;
- (BOOL)shouldSkipFetch;
- (void)fetchIfNeededWithSessionId:(id)arg1 completion:(id /* block */)arg2;
- (void)processResponse:(id)arg1;
- (void)recordRecentlySearchExposeForQuery:(id)arg1 sessionId:(id)arg2;
- (id)matchWithHistoryQueries:(id)arg1 sessionId:(id)arg2;
- (BOOL)shouldShowRecentlySearchTagForQuery:(id)arg1;
- (void)removeExposeRecordForQuery:(id)arg1;
- (void)clearAllExposeRecords;
- (void)onSearchRecmdDataSuccess:(id)arg1;
- (void)onSearchRecmdDataFail:(id)arg1;
- (id)matchedQuery;
- (void)setMatchedQuery:(id)arg1;
- (id)matchedTagTitle;
- (void)setMatchedTagTitle:(id)arg1;
- (long long)matchedType;
- (void)setMatchedType:(long long)arg1;
- (id)rawDict;
- (void)setRawDict:(id)arg1;
- (id)responseData;
- (void)setResponseData:(id)arg1;
- (double)cacheTime;
- (void)setCacheTime:(double)arg1;
- (double)clientExpireTime;
- (void)setClientExpireTime:(double)arg1;
- (id)webSearchMgr;
- (void)setWebSearchMgr:(id)arg1;
- (id)lastFetchedSessionId;
- (void)setLastFetchedSessionId:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)recentlySearchExposeList;
- (void)setRecentlySearchExposeList:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end
