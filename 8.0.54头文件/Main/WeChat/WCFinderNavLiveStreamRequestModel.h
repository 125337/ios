@interface WCFinderNavLiveStreamRequestModel : WCFinderLiveStreamRequestModel
{
    BOOL _isPreRecommendRequest; // +0xa0
    unsigned int _nextPagePullType; // +0xa4
    FinderLiveDiscoverPreloadInfo * _discoverPreloadInfo; // +0xa8
    NSData * _preNavliveMoreLiveObjectsBuffer; // +0xb0
    NSData * _jumpNavliveBuffer; // +0xb8
    unsigned long long _homePageScene; // +0xc0
    ClientSpecificConfig * _clientSpecConfig; // +0xc8
}
- (id)discoverPreloadInfo;
- (void)setDiscoverPreloadInfo:(id)arg1;
- (id)preNavliveMoreLiveObjectsBuffer;
- (void)setPreNavliveMoreLiveObjectsBuffer:(id)arg1;
- (BOOL)isPreRecommendRequest;
- (void)setIsPreRecommendRequest:(BOOL)arg1;
- (id)jumpNavliveBuffer;
- (void)setJumpNavliveBuffer:(id)arg1;
- (unsigned long long)homePageScene;
- (void)setHomePageScene:(unsigned long long)arg1;
- (id)clientSpecConfig;
- (void)setClientSpecConfig:(id)arg1;
- (unsigned int)nextPagePullType;
- (void)setNextPagePullType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

