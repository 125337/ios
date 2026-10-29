@interface WCFinderLiveManageSyndicationCgi : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)initWithFinderUsername:(id)arg1 syndicateModel:(id)arg2 action:(unsigned long long)arg3 targetFinderUsername:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initForJoiningAsParticipantWithFinderUsername:(id)arg1 syndicateId:(unsigned long long)arg2 initiator:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithFinderUsername:(id)arg1 syndicateId:(unsigned long long)arg2 action:(unsigned long long)arg3 targetFinderUsername:(id)arg4 initiatorFinderUsername:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
