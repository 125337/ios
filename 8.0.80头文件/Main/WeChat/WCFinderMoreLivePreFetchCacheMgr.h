@interface WCFinderMoreLivePreFetchCacheMgr : NSObject
{
    _TtC6WeChat24WCFinderLiveHomePageKara * _kara; // +0x8
    _TtC6WeChat27WCFinderLiveSessionFlowKara * _sessionFlowKara; // +0x10
    NSMutableDictionary * _firstScreenCaches; // +0x18
    NSMutableDictionary * _prefetchL2Caches; // +0x20
    NSMutableDictionary * _aggrecardThemePrefetchConfDict; // +0x28
}
+ (id)GetLiveTabsInfoCacheWithScene:(long long)arg1;
+ (BOOL)saveLiveTabsInfoCache:(id)arg1 scene:(unsigned long long)arg2;
+ (unsigned int)GetHomePageResponseFlag;
+ (void)UpdateHomePageResponseFlag:(unsigned int)arg1;
- (id)init;
- (void)onMemoryWarning;
- (void)updatePrefetchInterval:(unsigned long long)arg1 scene:(int)arg2;
- (unsigned long long)validTimeIntervalWithScene:(int)arg1;
- (unsigned long long)canPrefetchNowWithParams:(id)arg1;
- (BOOL)isPullTypeCanPrefetch:(unsigned long long)arg1;
- (unsigned long long)lastDiscoverReddotPreloadFreqLimitTs;
- (void)setLastDiscoverReddotPreloadFreqLimitTs:(unsigned long long)arg1;
- (unsigned long long)totalDiscoverReddotPreloadCount;
- (void)setTotalDiscoverReddotPreloadCount:(unsigned long long)arg1;
- (unsigned long long)totalDiscoverReddotPreloadFailedCount;
- (void)setTotalDiscoverReddotPreloadFailedCount:(unsigned long long)arg1;
- (unsigned long long)totalDiscoverReddotPreloadConsumeCount;
- (void)setTotalDiscoverReddotPreloadConsumeCount:(unsigned long long)arg1;
- (unsigned long long)lastDiscoverNonReddotPreloadFailTs;
- (void)setLastDiscoverNonReddotPreloadFailTs:(unsigned long long)arg1;
- (BOOL)lastIsTabStream;
- (void)setLastIsTabStream:(BOOL)arg1;
- (BOOL)lastIsCircleFollow;
- (void)setLastIsCircleFollow:(BOOL)arg1;
- (BOOL)lastIsColumnFollow;
- (void)setLastIsColumnFollow:(BOOL)arg1;
- (id)lastDiscoverStyleInfo;
- (void)setLastDiscoverStyleInfo:(id)arg1;
- (id)kara;
- (id)sessionFlowKara;
- (id)lastPreRecommendRequestInfo;
- (void)updateLastPreRecommendRequestInfo:(id)arg1;
- (void)markPreRecommended:(id)arg1 objectId:(unsigned long long)arg2;
- (BOOL)isPreRecommendReddotValid:(id)arg1;
- (BOOL)hasRequestPreRecommend:(id)arg1;
- (unsigned long long)homePagePageCacheTimeSec;
- (void)addPrefetchL2Cache:(id)arg1 cache:(id)arg2;
- (void)removePrefetchL2Cache:(id)arg1;
- (id)preloadCtrlConf;
- (void)setPreloadCtrlConf:(id)arg1;
- (id)discoverPreloadConf;
- (void)setDiscoverPreloadConf:(id)arg1;
- (void)updateNoReddotPreloadConfigWithCtrlInfo:(id)arg1;
- (void)updateNavLiveStreamPreloadConfigWithResponse:(id)arg1;
- (void)clearCurrentLiveReddotPreloadInfo;
- (void)_updateNavLivePreloadCtrlConfig:(id)arg1;
- (void)_updateDiscoverPreloadConfig:(id)arg1;
- (id)lastRefreshObjectsBuffer;
- (void)setLastRefreshObjectsBuffer:(id)arg1;
- (void)prefetchIfNeeded:(id)arg1;
- (void)updateLiveActiveLevelWithCtrlInfo:(id)arg1;
- (void)setKara:(id)arg1;
- (void)setSessionFlowKara:(id)arg1;
- (id)firstScreenCaches;
- (void)setFirstScreenCaches:(id)arg1;
- (id)prefetchL2Caches;
- (void)setPrefetchL2Caches:(id)arg1;
- (id)aggrecardThemePrefetchConfDict;
- (void)setAggrecardThemePrefetchConfDict:(id)arg1;
- (void).cxx_destruct;
@end
