@interface WCFinderLiveCheckVerifyResultCGI : WCFinderLiveBaseCgi
{
    unsigned int _verifyType; // +0x8
    NSString * _secverifyId; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithVerifyType:(unsigned int)arg1 secverifyId:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)verifyType;
- (void)setVerifyType:(unsigned int)arg1;
- (id)secverifyId;
- (void)setSecverifyId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
