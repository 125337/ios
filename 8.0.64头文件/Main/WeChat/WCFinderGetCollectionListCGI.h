@interface WCFinderGetCollectionListCGI : WCFinderBaseCgi
{
    unsigned int _scene; // +0x8
    unsigned int _businessType; // +0xc
    NSString * _finderUsername; // +0x10
    NSData * _lastBuffer; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithUsername:(id)arg1 scene:(unsigned int)arg2 businessType:(unsigned int)arg3 lastBuffer:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
