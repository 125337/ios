@interface WCFinderLikeCGI : WCFinderBaseCgi
{
    int _likeFlag; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    unsigned long long _scene; // +0x20
    WCFinderLikeCGIParam * _param; // +0x28
    unsigned long long _objectID; // +0x30
    unsigned long long _commentID; // +0x38
    unsigned long long _reportScene; // +0x40
}
- (id)initFeedLikeCGIWithParam:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (id)initCommentLikeWithParam:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (id)likeRequestWithParam:(id)arg1;
- (id)additionalUdfKVInfo;
- (id)initFriendsLikeCGIWith:(unsigned long long)arg1 nonceID:(id)arg2 reportScene:(int)arg3 scene:(unsigned long long)arg4 commentID:(unsigned long long)arg5 finderUsername:(id)arg6 likeUsername:(id)arg7 isLike:(BOOL)arg8 sessionBuffer:(id)arg9 successBlock:(id /* block */)arg10 failureBlock:(id /* block */)arg11;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (unsigned long long)objectID;
- (void)setObjectID:(unsigned long long)arg1;
- (int)likeFlag;
- (void)setLikeFlag:(int)arg1;
- (unsigned long long)commentID;
- (void)setCommentID:(unsigned long long)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
