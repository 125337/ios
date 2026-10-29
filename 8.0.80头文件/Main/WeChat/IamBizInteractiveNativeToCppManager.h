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
- (void)fetchInteractiveUserInfoAsync:(id)arg1 identityType:(int)arg2 identityName:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchInteractiveUserInfoAsync:(id)arg1 identityType:(int)arg2 identityName:(id)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)subscribeNotifyFetchMeTabRedPointEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotifyFetchMeTabRedPointEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotifyFetchMeTabRedPointEvent:(id)arg1;
- (void)subscribeNotifyWorksEntryRedDotUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotifyWorksEntryRedDotUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotifyWorksEntryRedDotUpdatedEvent:(id)arg1;
- (void)subscribeNotifyClearRedDotsInStagesEnabledChangedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotifyClearRedDotsInStagesEnabledChangedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotifyClearRedDotsInStagesEnabledChangedEvent:(id)arg1;
- (void)fetchMeTabRedPointAsync:(const void *)arg1 regNoticeInfo:(const void *)arg2 completion:(id /* block */)arg3;
- (void)fetchMeTabRedPointAsync:(const void *)arg1 regNoticeInfo:(const void *)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)disposeMeTabRedPointAsync:(const void *)arg1 scene:(int)arg2 regNoticeInfo:(const void *)arg3 completion:(id /* block */)arg4;
- (void)disposeMeTabRedPointAsync:(const void *)arg1 scene:(int)arg2 regNoticeInfo:(const void *)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)getMeTabStrategyCacheAsync:(id /* block */)arg1;
- (void)getMeTabStrategyCacheAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchMeTabStrategyWithCacheCheckAsync:(BOOL)arg1 finderOpen:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)fetchMeTabStrategyWithCacheCheckAsync:(BOOL)arg1 finderOpen:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchMeTabStrategyCacheAsync:(id /* block */)arg1;
- (void)fetchMeTabStrategyCacheAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)turnOnCreateBizPhotoAndFetchMeTabStrategyAsync:(id /* block */)arg1;
- (void)turnOnCreateBizPhotoAndFetchMeTabStrategyAsync:(id)arg1 completion:(id /* block */)arg2;
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
- (void)getInteractiveStrategyShowWordPosterAsync:(id /* block */)arg1;
- (void)getInteractiveStrategyShowWordPosterAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)requestBInviteCAsync:(id)arg1 context:(id)arg2 inviteOpenid:(id)arg3 serviceType:(int)arg4 completion:(id /* block */)arg5;
- (void)requestBInviteCAsync:(id)arg1 context:(id)arg2 inviteOpenid:(id)arg3 serviceType:(int)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)requestCReplyInviteAsync:(id)arg1 username:(id)arg2 completion:(id /* block */)arg3;
- (void)requestCReplyInviteAsync:(id)arg1 username:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
