@interface WCFinderNavLiveStreamCGI : WCFinderLiveStreamBaseCGI
{
    BOOL _isPreRecommendRequest; // +0x8
    BOOL _overLiteCgi; // +0x9
    FinderLiveDiscoverPreloadInfo * _discoverPreloadInfo; // +0x10
    NSData * _preNavliveMoreLiveObjectsBuffer; // +0x18
    NSData * _jumpNavliveBuffer; // +0x20
    WCFinderNavLiveStreamRequestModel * _model; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failedBlock; // +0x38
    WCFinderNavLiveStreamPrefetchExtraData * _prefetchExtra; // +0x40
}
+ (id)prefetchCacheHashKey:(int)arg1 containerId:(unsigned long long)arg2 tabId:(unsigned long long)arg3 relatedObjectId:(unsigned long long)arg4 homePageScene:(unsigned long long)arg5;
- (id)initWithModel:(id)arg1 overLiteCgi:(BOOL)arg2 successBlock:(id /* block */)arg3 failedBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)reportPrefetch:(unsigned long long)arg1 request:(id)arg2;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id)discoverPreloadInfo;
- (void)setDiscoverPreloadInfo:(id)arg1;
- (id)preNavliveMoreLiveObjectsBuffer;
- (void)setPreNavliveMoreLiveObjectsBuffer:(id)arg1;
- (BOOL)isPreRecommendRequest;
- (void)setIsPreRecommendRequest:(BOOL)arg1;
- (BOOL)overLiteCgi;
- (void)setOverLiteCgi:(BOOL)arg1;
- (id)jumpNavliveBuffer;
- (void)setJumpNavliveBuffer:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (id)prefetchExtra;
- (void)setPrefetchExtra:(id)arg1;
- (void).cxx_destruct;
@end
