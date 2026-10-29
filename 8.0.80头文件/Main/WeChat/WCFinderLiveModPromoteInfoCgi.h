@interface WCFinderLiveModPromoteInfoCgi : WCFinderLiveBaseCgi
{
    int _opType; // +0x8
    MMFinderLiveAnchorPromoteInfo * _modPromoteInfo; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1 opType:(unsigned long long)arg2 promoteInfo:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)getCurrentAnchorUsername;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)opType;
- (void)setOpType:(int)arg1;
- (id)modPromoteInfo;
- (void)setModPromoteInfo:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
