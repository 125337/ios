@interface WCFinderBulletDataService : NSObject
+ (int)postIdentityForObjectID:(id)arg1;
+ (BOOL)bulletSupported:(id)arg1;
+ (BOOL)enableFetch:(id)arg1;
+ (BOOL)enableSend:(id)arg1;
+ (BOOL)_enable;
+ (BOOL)_enableBulletComment:(id)arg1;
+ (void)postBulletCommentWithObjectId:(id)arg1 objectNonceId:(id)arg2 finderUsername:(id)arg3 videoTimestamp:(unsigned long long)arg4 content:(id)arg5 commentSource:(int)arg6 postIdentity:(int)arg7 commentScene:(int)arg8 replyCommentId:(unsigned long long)arg9 followBulletCommentId:(unsigned long long)arg10 interactionDurationMs:(unsigned long long)arg11 feedPlayTimes:(unsigned long long)arg12 successful:(id /* block */)arg13 failure:(id /* block */)arg14;
+ (void)deleteBulletCommentWithObjectId:(id)arg1 objectNonceId:(id)arg2 commentId:(unsigned long long)arg3 commentScene:(int)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
+ (void)modBulletCommentWithObjectId:(id)arg1 nonceID:(id)arg2 finderUsername:(id)arg3 isSwitchON:(BOOL)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
+ (void)changeAuthorBulletCommentOpenState:(BOOL)arg1 contentVM:(id)arg2 isLandscape:(BOOL)arg3 commentScene:(int)arg4 completion:(id /* block */)arg5;
+ (void)modBlackListWithOpType:(int)arg1 commentInfo:(id)arg2 objectId:(id)arg3 nonceID:(id)arg4 success:(id /* block */)arg5 failure:(id /* block */)arg6;
+ (void)getGetBulletCommentUserInfoWithObjectId:(id)arg1 objectNonceId:(id)arg2 commentId:(unsigned long long)arg3 commentScene:(int)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
+ (void)updateBulletCommentStatusWithObjectId:(unsigned long long)arg1 refBulletCommentId:(unsigned long long)arg2 action:(long long)arg3 finderUsername:(id)arg4 nonceID:(id)arg5 commentScene:(int)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
@end
