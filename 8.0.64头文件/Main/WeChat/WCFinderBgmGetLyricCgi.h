@interface WCFinderBgmGetLyricCgi : WCFinderBaseCgi
{
    int _type; // +0x8
    unsigned long long _identifier; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithType:(int)arg1 identifier:(unsigned long long)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
