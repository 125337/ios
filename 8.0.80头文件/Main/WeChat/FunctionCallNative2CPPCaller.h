@interface FunctionCallNative2CPPCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<function_call::FunctionCallNative2CPPCallerCppCover> cpp_cover; // +0x80
    weak_ptr<function_call::FunctionCallNative2CPPCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<function_call::FunctionCallNative2CPPCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)attachNativeControllerAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)attachNativeControllerAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)releaseAffAsync:(id /* block */)arg1;
- (void)releaseAffAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)registerFunctionCallingAsync:(id)arg1 moduleName:(id)arg2 schemes:(id)arg3 callback:(id)arg4 completion:(id /* block */)arg5;
- (void)registerFunctionCallingAsync:(id)arg1 moduleName:(id)arg2 schemes:(id)arg3 callback:(id)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)unRegisterFunctionCallingAsync:(id)arg1 moduleName:(id)arg2 completion:(id /* block */)arg3;
- (void)unRegisterFunctionCallingAsync:(id)arg1 moduleName:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)invokeFunctionCallingAsync:(id)arg1 moduleName:(id)arg2 args:(id)arg3 scheme:(int)arg4 completion:(id /* block */)arg5;
- (void)invokeFunctionCallingAsync:(id)arg1 moduleName:(id)arg2 args:(id)arg3 scheme:(int)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)getAllProtocolsAsync:(id /* block */)arg1;
- (void)getAllProtocolsAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)registerFunctionCallPlatformServiceAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)registerFunctionCallPlatformServiceAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)recordLastXiaoweiSentMessage:(id)arg1 localId:(long long)arg2;
- (id)queryLastXiaoweiSentChatId;
- (long long)queryLastXiaoweiSentLocalId;
- (BOOL)clearLastXiaoweiSentMessageIfMatch:(id)arg1 localId:(long long)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
