@interface WCFinderLiveAddFansListCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    unsigned long long _liveID; // +0x18
    NSString * _finderUsername; // +0x20
    unsigned long long _maxFansId; // +0x28
}
- (id)initWithLiveID:(unsigned long long)arg1 maxFansId:(unsigned long long)arg2 finderUsername:(id)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (unsigned long long)liveID;
- (void)setLiveID:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)maxFansId;
- (void)setMaxFansId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
