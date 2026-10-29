@interface CaraNativeSessionFeatureCenter : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    CaraNativeSessionFeatureCenterCppCover cpp_cover; // +0x80
    weak_ptr<cara::CaraNativeSessionFeatureCenterDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<cara::CaraNativeSessionFeatureCenterDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
