@interface WCFinderLiveAnchorGetJumpInfoListCGI : WCFinderLiveBaseCgi
{
    unsigned int _type; // +0x8
    NSString * _anchorFinderUsername; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
    NSData * _lastBuffer; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 type:(unsigned int)arg2 anchorFinderUsername:(id)arg3 lastBuffer:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

