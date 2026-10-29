@interface WCFinderLiveComplainReplayMsgCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)initWithFinderTaskId:(id)arg1 frameId:(id)arg2 msgSeq:(unsigned long long)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithObjectId:(unsigned long long)arg1 liveId:(unsigned long long)arg2 frameId:(id)arg3 msgSeq:(unsigned long long)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequestWithObjectId:(unsigned long long)arg1 liveId:(unsigned long long)arg2 frameId:(id)arg3 seq:(unsigned long long)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
