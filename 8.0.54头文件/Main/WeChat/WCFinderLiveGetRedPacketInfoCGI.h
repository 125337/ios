@interface WCFinderLiveGetRedPacketInfoCGI : WCFinderLiveBaseCgi
{
    MMFinderLiveTaskId * _taskId; // +0x8
    unsigned long long _liveId; // +0x10
    unsigned long long _finderId; // +0x18
    NSString * _finderNonceId; // +0x20
    NSData * _liveCookies; // +0x28
    NSArray * _redPacketIdList; // +0x30
    NSString * _finderUsername; // +0x38
    long long _liveScene; // +0x40
    id /* block */ _successBlock; // +0x48
    id /* block */ _failureBlock; // +0x50
}
- (id)initWithFinderTaskId:(id)arg1 liveId:(unsigned long long)arg2 finderId:(unsigned long long)arg3 finderNonceId:(id)arg4 liveCookies:(id)arg5 redPacketIdList:(id)arg6 finderUsername:(id)arg7 liveScene:(long long)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
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
- (id)redPacketIdList;
- (void)setRedPacketIdList:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (long long)liveScene;
- (void)setLiveScene:(long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

