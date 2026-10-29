@interface WCFinderGetUserContactCgi : WCFinderBaseCgi
{
    NSString * _nickname; // +0x8
    NSString * _exportUsername; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithNickname:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (id)initWithExpostUsername:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)exportUsername;
- (void)setExportUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
