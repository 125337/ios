@interface WCFinderFetchFeedbackReasonCGI : WCFinderBaseCgi
{
    int _commentScene; // +0x8
    unsigned long long _feedID; // +0x10
    long long _liveScene; // +0x18
    unsigned long long _feedbackType; // +0x20
    NSString * _sessionBuffer; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithFeedID:(unsigned long long)arg1 liveScene:(long long)arg2 feedbackType:(unsigned long long)arg3 commentScene:(int)arg4 sessionBuffer:(id)arg5 success:(id /* block */)arg6 fail:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)feedID;
- (void)setFeedID:(unsigned long long)arg1;
- (long long)liveScene;
- (void)setLiveScene:(long long)arg1;
- (unsigned long long)feedbackType;
- (void)setFeedbackType:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

