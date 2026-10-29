@interface FunctionCallCPP2NativeCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<function_call::FunctionCallCPP2NativeCallerCppCover> cpp_cover; // +0x80
    weak_ptr<function_call::FunctionCallCPP2NativeCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<function_call::FunctionCallCPP2NativeCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)notifyFunctionCallStartAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyFunctionCallStartAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyFunctionCallEndAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyFunctionCallEndAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getFunctionProtocolPathAsync:(id /* block */)arg1;
- (void)getFunctionProtocolPathAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getProtocolTempDirAsync:(id /* block */)arg1;
- (void)getProtocolTempDirAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
