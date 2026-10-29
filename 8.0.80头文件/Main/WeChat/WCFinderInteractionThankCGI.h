@interface WCFinderInteractionThankCGI : WCFinderBaseCgi
{
    BOOL _thanked; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _wxUsername; // +0x28
    WCFinderInteractionThankCGIParams * _params; // +0x30
}
- (id)initWithThanked:(BOOL)arg1 finderUsername:(id)arg2 wxUsername:(id)arg3 params:(id)arg4 success:(id /* block */)arg5 fail:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)description;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)wxUsername;
- (void)setWxUsername:(id)arg1;
- (BOOL)thanked;
- (void)setThanked:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
