@interface WCFinderLiveReserveLiveNotceCGI : WCFinderLiveBaseCgi
{
    int _opType; // +0x8
    long long _scene; // +0x10
    NSString * _userName; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
    long long _innerScene; // +0x30
}
- (id)initWithTaskId:(id)arg1 scene:(long long)arg2 innerScene:(long long)arg3 opType:(int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initWithUserName:(id)arg1 scene:(long long)arg2 innerScene:(long long)arg3 opType:(int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (long long)innerScene;
- (void)setInnerScene:(long long)arg1;
- (void).cxx_destruct;
@end
