@interface IamBizNativeToCppManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizNativeToCppManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizNativeToCppManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizNativeToCppManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMessageAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)syncSendMessage:(id)arg1;
- (id)getOfficialAccountSummaryInfo:(id)arg1;
- (id)getNotifyPair;
- (void)subscribeNotifyMessageEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotifyMessageEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotifyMessageEvent:(id)arg1;
- (void)onEnterAsync:(id /* block */)arg1;
- (void)onEnterAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onAppForegroundAsync:(id /* block */)arg1;
- (void)onAppForegroundAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)initIamEnvironment:(id)arg1;
- (BOOL)checkDraftExist:(id)arg1 bizType:(int)arg2;
- (void)getDraftAsync:(id)arg1 bizType:(int)arg2 completion:(id /* block */)arg3;
- (void)getDraftAsync:(id)arg1 bizType:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteDraftAsync:(id)arg1 bizType:(int)arg2 completion:(id /* block */)arg3;
- (void)deleteDraftAsync:(id)arg1 bizType:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)getDraftSummaryAsync:(id)arg1 bizType:(int)arg2 completion:(id /* block */)arg3;
- (void)getDraftSummaryAsync:(id)arg1 bizType:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
