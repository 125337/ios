@interface WCFinderGetTopicListCGI : WCFinderBaseCgi
{
    WCFinderTopicListParamsModel * _paramsModel; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
}
+ (id)prefetchCacheHashKey:(int)arg1 topicWording:(id)arg2 topicId:(unsigned long long)arg3 encryptedEventTopicId:(id)arg4;
- (id)initWithParamsModel:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
