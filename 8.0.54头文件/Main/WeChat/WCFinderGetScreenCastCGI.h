@interface WCFinderGetScreenCastCGI : WCFinderBaseCgi
{
    NSMutableArray * _objectIds; // +0x8
    NSString * _username; // +0x10
    id /* block */ _successful; // +0x18
    id /* block */ _failure; // +0x20
}
- (id)initWithObjectIds:(id)arg1 username:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)objectIds;
- (void)setObjectIds:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

