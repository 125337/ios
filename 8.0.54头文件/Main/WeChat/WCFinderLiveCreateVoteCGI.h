@interface WCFinderLiveCreateVoteCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)initWithFinderTaskId:(id)arg1 question:(id)arg2 choices:(id)arg3 duration:(unsigned int)arg4 allowMultipleSelection:(BOOL)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (id)initWithFinderTaskId:(id)arg1 votingId:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)commonInit;
- (void)createRequestWithVotingId:(id)arg1;
- (void)createRequestWithQuestion:(id)arg1 choices:(id)arg2 duration:(unsigned int)arg3 allowMultipleSelection:(BOOL)arg4;
- (id)votingRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

