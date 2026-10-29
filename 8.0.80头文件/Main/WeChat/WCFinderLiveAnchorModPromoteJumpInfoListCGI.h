@interface WCFinderLiveAnchorModPromoteJumpInfoListCGI : WCFinderLiveBaseCgi
{
    unsigned int _opType; // +0x8
    unsigned int _type; // +0xc
    NSString * _anchorFinderUsername; // +0x10
    MMFinderLivePromoteListBaseViewItem * _item; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 type:(unsigned int)arg2 anchorFinderUsername:(id)arg3 opType:(unsigned int)arg4 item:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
