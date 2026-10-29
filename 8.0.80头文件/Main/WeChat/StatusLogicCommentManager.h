@interface StatusLogicCommentManager : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)isLikeTextStatus:(id)arg1;
- (id)insertOrReplaceLikeData:(id)arg1;
- (id)deleteLikeData:(id)arg1 sequence:(long long)arg2;
- (id)performSelfDoLike:(id)arg1 isLike:(BOOL)arg2;
- (id)getAllTextStatusLike:(id)arg1 limit:(int)arg2;
- (id)getLikeDataByUserNameAndId:(id)arg1 userName:(id)arg2;
- (id)insertOrReplaceComment:(id)arg1;
- (id)deleteComment:(id)arg1 sequence:(long long)arg2;
- (id)getCommentNoSendSuccess:(id)arg1;
- (id)updateCommentSendState:(id)arg1;
- (id)deleteMessage:(id)arg1;
- (id)markAllMessageRead;
- (id)clearAllMessage;
- (id)getAllMessage:(id)arg1;
- (id)getMessageByCondition:(int)arg1 isUnread:(BOOL)arg2 maxCreateTimeMs:(long long)arg3;
- (int)getMessageCount:(id)arg1;
- (id)getLikeMessage:(id)arg1;
- (id)getCommentMessage:(id)arg1;
- (int)getNotReadNotifyCount;
- (id)markAllNotifyRead;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
