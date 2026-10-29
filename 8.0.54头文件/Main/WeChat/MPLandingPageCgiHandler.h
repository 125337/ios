@interface MPLandingPageCgiHandler : MMObject <PBMessageObserverDelegate>
{
    unsigned int _enterId; // +0x8
}
- (void)dealloc;
- (void)cancelAllRequest;
- (void)getCommentsWithOpenParam:(id)arg1 offset:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)callbackGetCommentFail:(id /* block */)arg1;
- (void)callbackGetCommentWithSuccess:(BOOL)arg1 commentMsgArr:(id)arg2 funcEnable:(BOOL)arg3 nextOffset:(int)arg4 onlyFansCanComment:(BOOL)arg5 completionHandler:(id /* block */)arg6;
- (void)handleGetCommentResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)addCommentsWithOpenParam:(id)arg1 content:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addCommentReplysWithOpenParam:(id)arg1 content:(id)arg2 personalCommentId:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)addCommentCommen:(id)arg1 content:(id)arg2 actionType:(int)arg3 personalCommentId:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
- (void)callbackAddCommentFail:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)callbackAddCommentWithSuccess:(BOOL)arg1 personalCommentId:(unsigned int)arg2 errMsg:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleAddCommentResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)deleteCommentWithOpenParam:(id)arg1 commentMsg:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteReplyWithOpenParam:(id)arg1 commentMsg:(id)arg2 commentReply:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteWithOpenParam:(id)arg1 commentMsg:(id)arg2 isDeleteReply:(BOOL)arg3 commentReply:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)callbackDeleteCommentFail:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)callbackDeleteCommentWithSuccess:(BOOL)arg1 errMsg:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleDeleteCommmentResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)setCommentLikeStatus:(id)arg1 isLike:(BOOL)arg2 isLikeReply:(BOOL)arg3 replyId:(unsigned int)arg4 openParam:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)callbackLikeCommentFail:(id /* block */)arg1;
- (void)callbackLikeCommentWithSuccess:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)handleLikeCommentResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)requestVideoStateByVid:(id)arg1 mpUrl:(id)arg2 oldVideoUrl:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleGetVideoUrlResp:(id)arg1 eventID:(unsigned int)arg2;
- (void)callbackGetVideoUrlWithSuccess:(BOOL)arg1 reqVid:(id)arg2 newUrl:(id)arg3 isBlock:(BOOL)arg4 errorWording:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)checkCGIBaseRespSuccess:(id)arg1;
- (void)reportReqNetWorkFail:(id)arg1;
- (void)reportReqSvrErr:(id)arg1;
- (unsigned int)enterId;
- (void)setEnterId:(unsigned int)arg1;
@end

