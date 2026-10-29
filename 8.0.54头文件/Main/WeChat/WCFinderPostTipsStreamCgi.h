@interface WCFinderPostTipsStreamCgi : WCFinderBaseCgi
{
    BOOL _isPrefetch; // +0x8
    int _scene; // +0xc
    NSData * _byPass; // +0x10
    NSData * _lastBuf; // +0x18
    id /* block */ _successfulBlock; // +0x20
    id /* block */ _failedBlock; // +0x28
}
+ (id)cachedHashKeyWithScene:(int)arg1 byPass:(id)arg2 lastBuffer:(id)arg3;
- (id)initWithScene:(int)arg1 byPass:(id)arg2 lastBuffer:(id)arg3 isPrefetch:(BOOL)arg4 successful:(id /* block */)arg5 failed:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (BOOL)isPrefetch;
- (void)setIsPrefetch:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)byPass;
- (void)setByPass:(id)arg1;
- (id)lastBuf;
- (void)setLastBuf:(id)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

