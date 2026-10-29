@interface WCFinderGetTopicInfoCGI : WCFinderBaseCgi
{
    WCFinderGetTopicInfoRequestParams * _params; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
}
+ (id)prefetchCacheHashKey:(int)arg1 topicWording:(id)arg2 topicId:(unsigned long long)arg3 encryptedEventTopicId:(id)arg4;
- (id)initWithParams:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

