@interface WCFinderLiveReportAnchorActionCGI : WCFinderLiveBaseCgi
{
    int _actionType; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failureBlock; // +0x18
}
- (id)initWithTaskId:(id)arg1 actionType:(int)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
