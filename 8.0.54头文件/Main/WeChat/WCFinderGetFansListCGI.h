@interface WCFinderGetFansListCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    unsigned long long _lastFansMaxId; // +0x18
    NSData * _lastBuf; // +0x20
    NSString * _finderUsername; // +0x28
}
- (id)initWithLastFansMaxId:(unsigned long long)arg1 lastBuf:(id)arg2 finderUsername:(id)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (unsigned long long)lastFansMaxId;
- (void)setLastFansMaxId:(unsigned long long)arg1;
- (id)lastBuf;
- (void)setLastBuf:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

