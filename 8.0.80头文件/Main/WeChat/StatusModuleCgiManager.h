@interface StatusModuleCgiManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<status::StatusModuleCgiManagerCppCover> cpp_cover; // +0x80
    weak_ptr<status::StatusModuleCgiManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<status::StatusModuleCgiManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getRecommendIconsByImageAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getRecommendIconsByImageAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadAndGetRecommendIconsAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)uploadAndGetRecommendIconsAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadMediaToStatusCDNAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)uploadMediaToStatusCDNAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)requestTextStatusDetailReadAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTextStatusDetailReadAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getTextStatusReadListUsersAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getTextStatusReadListUsersAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
