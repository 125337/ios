@interface CaraNativeAccountFeatureCenter : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    CaraNativeAccountFeatureCenterCppCover cpp_cover; // +0x80
    weak_ptr<cara::CaraNativeAccountFeatureCenterDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<cara::CaraNativeAccountFeatureCenterDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (int)gender;
- (int)momentPrivacy;
- (id)discoverTab;
- (BOOL)isRegisteredInChina;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
