@interface WCFinderAgreeEnterProtocolCgi : WCFinderBaseCgi
{
    BOOL _agreeFlag; // +0x8
    NSString * _username; // +0x10
    id /* block */ _successfulBlock; // +0x18
    id /* block */ _failedBlock; // +0x20
}
- (id)initWithUserName:(id)arg1 agreeFlag:(BOOL)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)agreeFlag;
- (void)setAgreeFlag:(BOOL)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
