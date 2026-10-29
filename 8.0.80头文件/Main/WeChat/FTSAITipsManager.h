@interface FTSAITipsManager : NSObject <WebSearchMgrDelegate>
{
    BOOL _isLoading; // +0x8
    BOOL _hasLoaded; // +0x9
    NSArray * _cachedItems; // +0x10
    double _lastRefreshTime; // +0x18
    double _clientExpireTime; // +0x20
    FTSWebSearchMgr * _webSearchMgr; // +0x28
    id /* block */ _requestCompletion; // +0x30
    NSString * _searchID; // +0x38
    NSString * _sessionId; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)loadAITipsWithCompletion:(id /* block */)arg1;
- (id)getCachedAITips;
- (void)fetchAITipsData;
- (void)handleFetchSuccess:(id)arg1 jsonDict:(id)arg2;
- (void)handleFetchFailure;
- (id)parseAITipsFromResponse:(id)arg1;
- (id)parseAITipsItem:(id)arg1;
- (id)getMMKV;
- (void)loadConfigFromCache;
- (void)saveConfig;
- (void)loadDataFromCache;
- (void)saveDataToCache:(id)arg1;
- (id)generateMockData;
- (void)onSearchRecmdDataSuccess:(id)arg1;
- (void)onSearchRecmdDataFail:(id)arg1;
- (id)cachedItems;
- (void)setCachedItems:(id)arg1;
- (double)lastRefreshTime;
- (void)setLastRefreshTime:(double)arg1;
- (double)clientExpireTime;
- (void)setClientExpireTime:(double)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)hasLoaded;
- (void)setHasLoaded:(BOOL)arg1;
- (id)webSearchMgr;
- (void)setWebSearchMgr:(id)arg1;
- (id /* block */)requestCompletion;
- (void)setRequestCompletion:(id /* block */)arg1;
- (id)searchID;
- (void)setSearchID:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void).cxx_destruct;
@end
