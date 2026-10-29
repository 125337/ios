@interface WCFinderModFeedReproductionCgi : WCFinderBaseCgi
{
    BOOL _notReproduction; // +0x8
    NSString * _username; // +0x10
    id /* block */ _success; // +0x18
    id /* block */ _failure; // +0x20
}
- (id)initWithUsername:(id)arg1 notReproduction:(BOOL)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)notReproduction;
- (void)setNotReproduction:(BOOL)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

