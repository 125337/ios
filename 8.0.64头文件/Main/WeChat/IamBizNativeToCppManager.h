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
- (void)subscribeNotifyMessageEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotifyMessageEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotifyMessageEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
