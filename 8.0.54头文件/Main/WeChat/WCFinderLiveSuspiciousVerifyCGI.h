@interface WCFinderLiveSuspiciousVerifyCGI : WCFinderLiveBaseCgi
{
    unsigned int _scene; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    NSString * _finderUsername; // +0x18
    NSString * _verificationId; // +0x20
    unsigned long long _objectId; // +0x28
    unsigned long long _liveId; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failureBlock; // +0x40
}
- (id)initWithTaskId:(id)arg1 finderUsername:(id)arg2 objectId:(unsigned long long)arg3 liveId:(unsigned long long)arg4 scene:(unsigned int)arg5 verificationId:(id)arg6 successBlock:(id /* block */)arg7 failureBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)verificationId;
- (void)setVerificationId:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

