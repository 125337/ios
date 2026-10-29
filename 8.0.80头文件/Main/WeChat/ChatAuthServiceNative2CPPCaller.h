@interface ChatAuthServiceNative2CPPCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<function_call::ChatAuthServiceNative2CPPCallerCppCover> cpp_cover; // +0x80
    weak_ptr<function_call::ChatAuthServiceNative2CPPCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<function_call::ChatAuthServiceNative2CPPCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)registerAuthChatIdsAsync:(id)arg1 sessionId:(id)arg2 completion:(id /* block */)arg3;
- (void)registerAuthChatIdsAsync:(id)arg1 sessionId:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)unregisterAuthChatIdsForSessionIdAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterAuthChatIdsForSessionIdAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)grantDailyGrantAsync:(id /* block */)arg1;
- (void)grantDailyGrantAsync:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)hasValidDailyGrant;
- (void)revokeDailyGrantAsync:(id /* block */)arg1;
- (void)revokeDailyGrantAsync:(id)arg1 completion:(id /* block */)arg2;
- (double)queryDailyGrantAt;
- (double)queryDailyGrantExpireAt;
- (void)grantChatDailyGrantAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)grantChatDailyGrantAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)hasValidChatDailyGrant:(id)arg1;
- (void)revokeChatDailyGrantAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)revokeChatDailyGrantAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (double)queryChatDailyGrantAt:(id)arg1;
- (double)queryChatDailyGrantExpireAt;
- (id)queryAllowedChatIds:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
