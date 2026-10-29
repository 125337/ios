@interface WCFinderGetFoldListCGI : WCFinderBaseCgi
{
    NSString * _targetUsername; // +0x8
    NSString * _tid; // +0x10
    NSString * _nonceid; // +0x18
    id /* block */ _successful; // +0x20
    id /* block */ _failure; // +0x28
    NSData * _lastBuff; // +0x30
}
- (id)initWithLastBuff:(id)arg1 friendUsername:(id)arg2 objectID:(id)arg3 nonceID:(id)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)targetUsername;
- (void)setTargetUsername:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceid;
- (void)setNonceid:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (void).cxx_destruct;
@end

