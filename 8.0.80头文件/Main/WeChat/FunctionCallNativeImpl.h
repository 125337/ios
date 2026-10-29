@interface FunctionCallNativeImpl : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<function_call::FunctionCallNativeImplCppCover> cpp_cover; // +0x80
    weak_ptr<function_call::FunctionCallNativeImplDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<function_call::FunctionCallNativeImplDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)invokeAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)invokeAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
