@interface FinderLvChannelFlowCGI : WCFinderBaseCgi
{
    int _tabType; // +0x8
    id /* block */ _channelRequestCompletion; // +0x10
    unsigned long long _pullType; // +0x18
    WCFinderRedDotCtrlInfo * _finderCtrlInfo; // +0x20
    NSData * _prefetchData; // +0x28
    NSData * _lastBuffer; // +0x30
    id /* block */ _successful; // +0x38
    id /* block */ _failure; // +0x40
}
+ (id)prefetchCacheHashKey:(int)arg1;
- (id)initWithPullType:(unsigned long long)arg1 tabType:(int)arg2 finderCtrlInfo:(id)arg3 prefetchData:(id)arg4 lastBuffer:(id)arg5 successful:(id /* block */)arg6 failure:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)cancel;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (id /* block */)channelRequestCompletion;
- (void)setChannelRequestCompletion:(id /* block */)arg1;
- (unsigned long long)pullType;
- (void)setPullType:(unsigned long long)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (id)finderCtrlInfo;
- (void)setFinderCtrlInfo:(id)arg1;
- (id)prefetchData;
- (void)setPrefetchData:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
