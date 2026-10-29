@interface WCUniCommentDataService : WCCommentDataService <WCCommentPostManagerDelegate>
{
    WCCommentPostManager * _postManager; // +0x8
    WCCommentWCDB * _dataBase; // +0x10
    NSMutableArray * _tasks; // +0x18
}
+ (id)genFinderBaseRequest;
+ (void)commentLikeChangedWithCommentObject:(id)arg1 scene:(unsigned long long)arg2 selectedFlag:(BOOL)arg3 isDislike:(BOOL)arg4 comment:(id)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
+ (void)commentLikeChangedWithEntityId:(id)arg1 uniCommentAppName:(id)arg2 bypassBuffer:(id)arg3 bypassBufferType:(int)arg4 scene:(unsigned long long)arg5 selectedFlag:(BOOL)arg6 isDislike:(BOOL)arg7 comment:(id)arg8 successBlock:(id /* block */)arg9 failureBlock:(id /* block */)arg10;
+ (int)operationIdentityTypeFromScene:(unsigned long long)arg1;
+ (void)sendLikeRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)generateFinderBaseRequest;
- (void)getCommentWithLastBuffer:(id)arg1 refCommentId:(unsigned long long)arg2 direction:(int)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)sendGetCommentRequest:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (id)commentFromPbComment:(id)arg1;
- (id)getPostingFailCommentWithObjectId:(id)arg1;
- (void)deletePostingCommentWithComment:(id)arg1;
- (id)getPostingFailComment;
- (BOOL)markObjectFailCommentsRead;
- (void)fetchSubCommentListWithRootCommentBuffer:(id)arg1 rootCommentID:(unsigned long long)arg2 direction:(int)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)setupCommentBaseElementBeforePosting:(id)arg1;
- (void)postCommentWith:(id)arg1;
- (void)postCommentWith:(id)arg1 scene:(unsigned long long)arg2 entityId:(id)arg3;
- (void)postSubCommentWith:(id)arg1;
- (void)postSubCommentWith:(id)arg1 scene:(unsigned long long)arg2 entityId:(id)arg3;
- (void)repostCommentWith:(id)arg1;
- (void)repostCommentWith:(id)arg1 entityId:(id)arg2;
- (void)sendUniCommentRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteComment:(id)arg1 rootCommentID:(unsigned long long)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)commentLikeChangedWithSelectedFlag:(BOOL)arg1 isDislike:(BOOL)arg2 comment:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)commentStartPostWithComment:(id)arg1;
- (void)handleSendCommentSuccessWithCommentId:(unsigned long long)arg1 clientId:(id)arg2 comment:(id)arg3;
- (void)handleSendCommentFailWithRet:(int)arg1 errorMessage:(id)arg2 comment:(id)arg3;
- (void)commentPostFailWithComment:(id)arg1;
- (void)commentPostSuccessfulWitComment:(id)arg1;
- (id)commentBaseDirectory;
- (id)commentPostingDirectory;
- (id)commentDbDirectory;
- (id)postManager;
- (id)dataBase;
- (void)setPostManager:(id)arg1;
- (void)setDataBase:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (void).cxx_destruct;
@end

