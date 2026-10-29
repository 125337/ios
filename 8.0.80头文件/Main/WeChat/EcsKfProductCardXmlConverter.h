@interface EcsKfProductCardXmlConverter : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<ecs::EcsKfProductCardXmlConverterCppCover> cpp_cover; // +0x80
    weak_ptr<ecs::EcsKfProductCardXmlConverterDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<ecs::EcsKfProductCardXmlConverterDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)convertKfProductCardXmlAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)convertKfProductCardXmlAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)convertKfProductCardXmlSync:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
