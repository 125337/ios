@interface WCFinderGetSvrExptConfigRequest : WCFinderBaseCgi
{
    int _expID; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failure; // +0x18
}
- (id)initWithExpID:(int)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)expID;
- (void)setExpID:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
