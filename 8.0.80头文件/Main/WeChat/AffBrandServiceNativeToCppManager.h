@interface AffBrandServiceNativeToCppManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<brand_service::AffBrandServiceNativeToCppManagerCppCover> cpp_cover; // +0x80
    weak_ptr<brand_service::AffBrandServiceNativeToCppManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<brand_service::AffBrandServiceNativeToCppManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)requestAdFetchingWithResortAsync:(id /* block */)arg1;
- (void)requestAdFetchingWithResortAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyInsertSearchRecCardAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyInsertSearchRecCardAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)appendFeedsClickBypassInfo:(id)arg1;
- (id)getFeedsClickBypassInfo;
- (void)clearFeedsClickBypassInfo;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
