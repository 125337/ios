@interface WCFinderNavLiveStreamRequestModel : WCFinderLiveStreamRequestModel
{
    BOOL _isPreRecommendRequest; // +0xa8
    unsigned int _nextPagePullType; // +0xac
    FinderLiveDiscoverPreloadInfo * _discoverPreloadInfo; // +0xb0
    NSData * _preNavliveMoreLiveObjectsBuffer; // +0xb8
    NSData * _jumpNavliveBuffer; // +0xc0
    unsigned long long _homePageScene; // +0xc8
    ClientSpecificConfig * _clientSpecConfig; // +0xd0
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
