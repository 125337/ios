@interface WCCommentFinderDataService : WCCommentDataService
{
    int _viewScene; // +0x8
    unsigned long long _reportScene; // +0x10
}
- (id)init;
- (void)setCommentObject:(id)arg1;
- (unsigned long long)finderCommentListDirectionFromUniCommentDirection:(int)arg1;
- (id)finderObjectId;
- (id)finderNonceId;
- (int)commentViewScene;
- (unsigned long long)finderCommentAndLikeSceneFromUniCommentScene:(unsigned long long)arg1;
- (unsigned long long)finderCommentAndLikeScene;
- (void)getCommentWithLastBuffer:(id)arg1 refCommentId:(unsigned long long)arg2 direction:(int)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (BOOL)markObjectFailCommentsRead;
- (void)fetchSubCommentListWithRootCommentBuffer:(id)arg1 rootCommentID:(unsigned long long)arg2 direction:(int)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)postCommentWith:(id)arg1;
- (void)postSubCommentWith:(id)arg1;
- (void)repostCommentWith:(id)arg1;
- (void)postFinderComment:(id)arg1;
- (void)postCommentWithComment:(id)arg1;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)commentLikeChangedWithSelectedFlag:(BOOL)arg1 isDislike:(BOOL)arg2 comment:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)deletePostingCommentWithComment:(id)arg1;
- (id)getPostingFailComment;
- (void)onFinderDataItemPostComment:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostCommentFail:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onFinderDataItemPostCommentSuccessful:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemPostSubComment:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubCommentSuccessful:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3;
- (void)onFinderDataItemPostSubCommentFail:(id)arg1 tid:(id)arg2 rootCommentID:(unsigned long long)arg3 retCode:(int)arg4;
- (void)onFinderDataItemCommentLikeStatusChangeWithTid:(id)arg1 commentID:(unsigned long long)arg2 rootCommentID:(unsigned long long)arg3 likeStatus:(BOOL)arg4;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (int)viewScene;
- (void)setViewScene:(int)arg1;
@end

