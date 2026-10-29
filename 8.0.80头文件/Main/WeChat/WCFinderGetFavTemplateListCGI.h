@interface WCFinderGetFavTemplateListCGI : WCFinderBaseCgi
{
    BOOL _isPrefetchReq; // +0x8
    id /* block */ _successfulBlock; // +0x10
    id /* block */ _failedBlock; // +0x18
    unsigned long long _preFetchType; // +0x20
    NSString * _pageBufferUniqueId; // +0x28
}
+ (id)mmkvCachedKey;
+ (id)cachedHashKeyWithPageBufferUniqueId:(id)arg1;
- (id)initWithPageBuf:(id)arg1 preFetchType:(unsigned long long)arg2 finderUserName:(id)arg3 successfulBlock:(id /* block */)arg4 failedBlock:(id /* block */)arg5;
- (BOOL)fetchDebugTemplate;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)saveCachedTime:(unsigned long long)arg1;
- (unsigned long long)getCachedTime;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id)sha1HashForData:(id)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (BOOL)isPrefetchReq;
- (void)setIsPrefetchReq:(BOOL)arg1;
- (unsigned long long)preFetchType;
- (void)setPreFetchType:(unsigned long long)arg1;
- (id)pageBufferUniqueId;
- (void)setPageBufferUniqueId:(id)arg1;
- (void).cxx_destruct;
@end
