@interface CBTAsstReddotApi : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTAsstReddotApiCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTAsstReddotApiDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTAsstReddotApiDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)attachObserver:(id)arg1;
- (void)detachObserver:(id)arg1;
- (void)shouldShowHomeReddotAsync:(id /* block */)arg1;
- (void)shouldShowHomeReddotAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getHomeReddotCountAsync:(id /* block */)arg1;
- (void)getHomeReddotCountAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)shouldShowSettingsReddotAsync:(id /* block */)arg1;
- (void)shouldShowSettingsReddotAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)markUserVisitedAsst;
- (void)consumeAllItems;
- (void)setInviteQuotaReddot:(BOOL)arg1;
- (void)consumeInviteQuotaReddot;
- (void)shouldShowInviteQuotaReddotAsync:(id /* block */)arg1;
- (void)shouldShowInviteQuotaReddotAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setSessionStartTimeForUplink:(unsigned long long)arg1;
- (void)shouldPlayHomeNewbieAnimationAsync:(id /* block */)arg1;
- (void)shouldPlayHomeNewbieAnimationAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)markNewbieAnimationPlayed;
- (void)getReminderItemsWithRenderDataAsync:(id /* block */)arg1;
- (void)getReminderItemsWithRenderDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getFixedBannerItemsWithRenderDataAsync:(id /* block */)arg1;
- (void)getFixedBannerItemsWithRenderDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)recordReminderLocateAnchorAsync:(unsigned long long)arg1 localId:(int)arg2 answerId:(long long)arg3 completion:(id /* block */)arg4;
- (void)recordReminderLocateAnchorAsync:(unsigned long long)arg1 localId:(int)arg2 answerId:(long long)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)notifyReddotDisplayedForImplicitUplink:(id)arg1;
- (void)showUnreadNotifyAsync:(id)arg1 body:(id)arg2 localId:(int)arg3 source:(id)arg4 completion:(id /* block */)arg5;
- (void)showUnreadNotifyAsync:(id)arg1 body:(id)arg2 localId:(int)arg3 source:(id)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)getReminderSvrIdsAsync:(id /* block */)arg1;
- (void)getReminderSvrIdsAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyFullScreenInsertManagerActive:(BOOL)arg1;
- (void)ensureServiceStartup:(BOOL)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
