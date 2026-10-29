@interface WCFinderPauseLiveCgi : WCFinderLiveBaseCgi
{
    int _action; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    NSString * _finderUsername; // +0x18
    unsigned long long _liveId; // +0x20
    unsigned long long _finderId; // +0x28
    NSString * _finderNonceId; // +0x30
    double _duration; // +0x38
    unsigned long long _scene; // +0x40
    id /* block */ _successBlock; // +0x48
    id /* block */ _failureBlock; // +0x50
}
- (id)initWithTaskId:(id)arg1 finderUsername:(id)arg2 liveId:(unsigned long long)arg3 finderId:(unsigned long long)arg4 finderNonceId:(id)arg5 action:(int)arg6 duration:(double)arg7 scene:(unsigned long long)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)finderId;
- (void)setFinderId:(unsigned long long)arg1;
- (id)finderNonceId;
- (void)setFinderNonceId:(id)arg1;
- (int)action;
- (void)setAction:(int)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

