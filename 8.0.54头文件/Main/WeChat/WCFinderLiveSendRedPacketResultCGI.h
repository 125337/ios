@interface WCFinderLiveSendRedPacketResultCGI : WCFinderLiveBaseCgi
{
    MMFinderLiveTaskId * _taskId; // +0x8
    unsigned long long _liveId; // +0x10
    unsigned long long _finderId; // +0x18
    NSString * _finderNonceId; // +0x20
    NSData * _liveCookies; // +0x28
    NSString * _redPacketId; // +0x30
    id /* block */ _successBlock; // +0x38
    id /* block */ _failureBlock; // +0x40
}
- (id)initWithFinderTaskId:(id)arg1 liveId:(unsigned long long)arg2 finderId:(unsigned long long)arg3 finderNonceId:(id)arg4 liveCookies:(id)arg5 redPacketId:(id)arg6 successBlock:(id /* block */)arg7 failureBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)finderId;
- (void)setFinderId:(unsigned long long)arg1;
- (id)finderNonceId;
- (void)setFinderNonceId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)redPacketId;
- (void)setRedPacketId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

