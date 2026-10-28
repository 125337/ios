@interface WCFinderGetRelatedListCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    WCFinderGetRelatedListParams * _params; // +0x18
}
+ (id)prefetchCacheHashKey:(id)arg1 viewScene:(int)arg2;
- (id)initWithParams:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)createRequestWithFromSessionId:(id)arg1;
- (unsigned int)additionalExptFlag;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)needADDeviceInfo;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
