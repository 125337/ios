@interface WCFinderGetContactListCGI : WCFinderBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    unsigned long long _fromScene; // +0x18
    id /* block */ _respSuccessBlock; // +0x20
    unsigned long long _requestContactCount; // +0x28
}
- (id)init;
- (id)initWithReq:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (id)initWithUsername:(id)arg1 relationInfo:(id)arg2 finderUsername:(id)arg3 commentScene:(int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initWithUsernameArray:(id)arg1 contactType:(int)arg2 finderUsername:(id)arg3 commentScene:(int)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initWithAuthorUsernameArray:(id)arg1 commentScene:(int)arg2;
- (id)initWithComment:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithFansInfo:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithContact:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithFinderUsername:(id)arg1 msgInfoArrary:(id)arg2 commentScene:(int)arg3;
- (id)initWithLocalSearchUsernameArray:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithStrangerInfoArray:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithFinderContactCommentLikeInfoArray:(id)arg1 finderUsername:(id)arg2 commentScene:(int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (id)initWithUsername:(id)arg1 relationInfo:(id)arg2 finderUsername:(id)arg3 commentScene:(int)arg4 scene:(unsigned int)arg5 successBlock:(id /* block */)arg6;
- (void)setRequest:(id)arg1;
- (void)setFromScene:(unsigned long long)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)fromScene;
- (id /* block */)respSuccessBlock;
- (void)setRespSuccessBlock:(id /* block */)arg1;
- (unsigned long long)requestContactCount;
- (void)setRequestContactCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

