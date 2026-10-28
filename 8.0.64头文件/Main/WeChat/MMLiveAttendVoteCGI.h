@interface MMLiveAttendVoteCGI : WCFinderLiveBaseCgi
{
    MMFinderLiveTaskId * _taskId; // +0x8
    unsigned long long _objectId; // +0x10
    NSMutableArray * _choiceIds; // +0x18
    NSString * _nonceId; // +0x20
    NSData * _cookies; // +0x28
    NSString * _votingId; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failBlock; // +0x40
}
- (id)initWithFinderTaskId:(id)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3 choiceIds:(id)arg4 cookies:(id)arg5 votingId:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)choiceIds;
- (void)setChoiceIds:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)cookies;
- (void)setCookies:(id)arg1;
- (id)votingId;
- (void)setVotingId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
