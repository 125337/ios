@interface WCFinderGetLongVideoCGI : WCFinderBaseCgi
{
    int _tabType; // +0x8
    unsigned long long _pullType; // +0x10
    LVReddotInfo * _reddotInfo; // +0x18
    NSData * _lastBuffer; // +0x20
    id /* block */ _successful; // +0x28
    id /* block */ _failure; // +0x30
}
+ (id)prefetchCacheHashKey:(int)arg1;
- (id)initWithWithPullType:(unsigned long long)arg1 tabType:(int)arg2 reddotInfo:(id)arg3 lastBuffer:(id)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)createRequest;
- (id)genFinderUnreadItemList:(int)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)pullType;
- (void)setPullType:(unsigned long long)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (id)reddotInfo;
- (void)setReddotInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

