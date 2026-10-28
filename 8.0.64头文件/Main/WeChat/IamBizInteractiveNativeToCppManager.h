@interface IamBizInteractiveNativeToCppManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizInteractiveNativeToCppManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizInteractiveNativeToCppManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizInteractiveNativeToCppManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)fetchInteractiveUserInfoAsync:(int)arg1 identityName:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchInteractiveUserInfoAsync:(int)arg1 identityName:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)subscribeNotificationDigestUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotificationDigestUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotificationDigestUpdatedEvent:(id)arg1;
- (void)getLocalNotificationDigestAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getLocalNotificationDigestAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)clearSvrInteractiveRedDotBySceneAsync:(id)arg1 scene:(int)arg2 completion:(id /* block */)arg3;
- (void)clearSvrInteractiveRedDotBySceneAsync:(id)arg1 scene:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)reportBizFansOpAsync:(id)arg1 opType:(int)arg2 sessionId:(int)arg3 openId:(id)arg4 completion:(id /* block */)arg5;
- (void)reportBizFansOpAsync:(id)arg1 opType:(int)arg2 sessionId:(int)arg3 openId:(id)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)getInteractiveStrategyShowWriteArticleAsync:(id /* block */)arg1;
- (void)getInteractiveStrategyShowWriteArticleAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
