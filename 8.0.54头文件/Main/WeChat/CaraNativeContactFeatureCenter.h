@interface CaraNativeContactFeatureCenter : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    CaraNativeContactFeatureCenterCppCover cpp_cover; // +0x80
    weak_ptr<cara::CaraNativeContactFeatureCenterDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<cara::CaraNativeContactFeatureCenterDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (id)getContactByUsername:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

