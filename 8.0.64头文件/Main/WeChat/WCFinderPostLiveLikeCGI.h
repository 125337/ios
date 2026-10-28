@interface WCFinderPostLiveLikeCGI : WCFinderLiveBaseCgi
{
    int _msgType; // +0x8
    unsigned long long _likeCount; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
    WCFinderDataItem * _dataItem; // +0x28
    NSString * _sessionBuffer; // +0x30
    NSData * _liveCookies; // +0x38
    unsigned long long _commentSeq; // +0x40
    NSString * _clientMsgId; // +0x48
    long long _likeScene; // +0x50
    long long _opType; // +0x58
    long long _likeSource; // +0x60
    unsigned long long _accumulateLikeCount; // +0x68
}
- (id)initWithFinderTaskId:(id)arg1 likeCount:(unsigned long long)arg2 liveCookies:(id)arg3 likeScene:(long long)arg4 opType:(long long)arg5 likeSource:(long long)arg6 accumulateLikeCount:(unsigned long long)arg7 successBlock:(id /* block */)arg8 failBlock:(id /* block */)arg9;
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 commentSeq:(unsigned long long)arg3 clientMsgId:(id)arg4 msgType:(unsigned int)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (id)initWithFeedStreamFriendLike:(id)arg1 isLike:(BOOL)arg2 sessionBuffer:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)createCommentLikeRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)commentSeq;
- (void)setCommentSeq:(unsigned long long)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (int)msgType;
- (void)setMsgType:(int)arg1;
- (long long)likeScene;
- (void)setLikeScene:(long long)arg1;
- (long long)opType;
- (void)setOpType:(long long)arg1;
- (long long)likeSource;
- (void)setLikeSource:(long long)arg1;
- (unsigned long long)accumulateLikeCount;
- (void)setAccumulateLikeCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
