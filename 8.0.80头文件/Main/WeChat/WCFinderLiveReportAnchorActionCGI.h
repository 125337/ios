@interface WCFinderLiveReportAnchorActionCGI : WCFinderLiveBaseCgi
{
    int _actionType; // +0x8
    unsigned int _subActionType; // +0xc
    NSString * _params; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failureBlock; // +0x20
}
- (id)initWithTaskId:(id)arg1 actionType:(int)arg2 subActionType:(unsigned int)arg3 params:(id)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (unsigned int)subActionType;
- (void)setSubActionType:(unsigned int)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
