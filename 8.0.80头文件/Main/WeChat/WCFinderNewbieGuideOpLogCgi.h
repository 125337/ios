@interface WCFinderNewbieGuideOpLogCgi : WCFinderBaseCgi
{
    BOOL _neverShow; // +0x8
    int _eduType; // +0xc
    NSString * _userName; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithEduType:(int)arg1 userName:(id)arg2 neverShow:(BOOL)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)neverShow;
- (void)setNeverShow:(BOOL)arg1;
- (int)eduType;
- (void)setEduType:(int)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
