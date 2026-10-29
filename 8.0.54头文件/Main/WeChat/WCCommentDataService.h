@interface WCCommentDataService : NSObject
{
    WCCommentObject * _commentObject; // +0x8
    unsigned long long _pullScene; // +0x10
    unsigned long long _commentAndLikeScene; // +0x18
    id <WCCommentDataServiceDelegate> _delegate; // +0x20
}
+ (void)commentLikeChangedWithCommentObject:(id)arg1 scene:(unsigned long long)arg2 selectedFlag:(BOOL)arg3 isDislike:(BOOL)arg4 comment:(id)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
+ (void)updateFinderComment:(id)arg1 withSelectedFlag:(BOOL)arg2 isDislike:(BOOL)arg3 entityId:(id)arg4;
- (void)getCommentWithLastBuffer:(id)arg1 refCommentId:(unsigned long long)arg2 direction:(int)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (BOOL)markObjectFailCommentsRead;
- (void)fetchSubCommentListWithRootCommentBuffer:(id)arg1 rootCommentID:(unsigned long long)arg2 direction:(int)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)postCommentWith:(id)arg1;
- (void)postSubCommentWith:(id)arg1;
- (void)repostCommentWith:(id)arg1;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)commentLikeChangedWithSelectedFlag:(BOOL)arg1 isDislike:(BOOL)arg2 comment:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)deletePostingCommentWithComment:(id)arg1;
- (id)getPostingFailComment;
- (id)commentObject;
- (void)setCommentObject:(id)arg1;
- (unsigned long long)pullScene;
- (void)setPullScene:(unsigned long long)arg1;
- (unsigned long long)commentAndLikeScene;
- (void)setCommentAndLikeScene:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

