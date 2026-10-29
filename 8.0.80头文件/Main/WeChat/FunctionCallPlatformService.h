@interface FunctionCallPlatformService : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<function_call::FunctionCallPlatformServiceCppCover> cpp_cover; // +0x80
    weak_ptr<function_call::FunctionCallPlatformServiceDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<function_call::FunctionCallPlatformServiceDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)notifyFlutterThumbUpOpAsync:(id)arg1 isThumbLiked:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)notifyFlutterThumbUpOpAsync:(id)arg1 isThumbLiked:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyFlutterLikeOpAsync:(id)arg1 isLiked:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)notifyFlutterLikeOpAsync:(id)arg1 isLiked:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)shareToFavWithTingItemAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)shareToFavWithTingItemAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
