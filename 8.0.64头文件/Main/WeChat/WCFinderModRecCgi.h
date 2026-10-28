@interface WCFinderModRecCgi : WCFinderBaseCgi
{
    unsigned int _opType; // +0x8
    NSString * _username; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithUserName:(id)arg1 opType:(unsigned int)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
