@interface WCFinderCreateSockPuppetCGI : WCFinderBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failure; // +0x10
}
- (id)initWithNickname:(id)arg1 headImageURL:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

