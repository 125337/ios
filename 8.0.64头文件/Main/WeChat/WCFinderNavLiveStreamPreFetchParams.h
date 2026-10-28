@interface WCFinderNavLiveStreamPreFetchParams : WCFinderLiveStreamPreFetchBaseParams <WCFinderNavLiveStreamL2CacheKeyProtocol>
{
    BOOL _isPreRecommendRequest; // +0x48
    BOOL _isKaraPredicted; // +0x49
    float _predictScore; // +0x4c
    unsigned long long _containerId; // +0x50
    NSMutableArray * _containerContext; // +0x58
    WCFinderRedDotCtrlInfo * _redDotCtrlInfo; // +0x60
    FinderLiveDiscoverPreloadConfig * _preloadConfig; // +0x68
    unsigned long long _cacheDurationInSeconds; // +0x70
    NSData * _jumpNavliveBuffer; // +0x78
    unsigned long long _scene; // +0x80
}
- (void)setScene:(unsigned long long)arg1;
- (id)description;
- (id)prefetchCacheHashKey;
- (BOOL)isRequestEqaulToCache:(id)arg1;
- (BOOL)isDiscoveryPrefetch;
- (BOOL)needL2PrefetchCache;
- (id)prefetchL2CacheKey;
- (unsigned long long)containerId;
- (void)setContainerId:(unsigned long long)arg1;
- (id)containerContext;
- (void)setContainerContext:(id)arg1;
- (id)redDotCtrlInfo;
- (void)setRedDotCtrlInfo:(id)arg1;
- (BOOL)isPreRecommendRequest;
- (void)setIsPreRecommendRequest:(BOOL)arg1;
- (BOOL)isKaraPredicted;
- (void)setIsKaraPredicted:(BOOL)arg1;
- (float)predictScore;
- (void)setPredictScore:(float)arg1;
- (id)preloadConfig;
- (void)setPreloadConfig:(id)arg1;
- (unsigned long long)cacheDurationInSeconds;
- (void)setCacheDurationInSeconds:(unsigned long long)arg1;
- (id)jumpNavliveBuffer;
- (void)setJumpNavliveBuffer:(id)arg1;
- (unsigned long long)scene;
- (void).cxx_destruct;
@end
