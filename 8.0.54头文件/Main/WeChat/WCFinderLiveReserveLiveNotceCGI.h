@interface WCFinderLiveReserveLiveNotceCGI : WCFinderLiveBaseCgi
{
    int _scene; // +0x8
    int _opType; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    long long _innerScene; // +0x20
}
- (id)initWithTaskId:(id)arg1 scene:(int)arg2 innerScene:(long long)arg3 opType:(int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)scene;
- (void)setScene:(int)arg1;
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

