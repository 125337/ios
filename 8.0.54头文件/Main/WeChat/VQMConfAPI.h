@interface VQMConfAPI : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    VQMConfAPICppCover cpp_cover; // +0x80
    weak_ptr<vqm::VQMConfAPIDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<vqm::VQMConfAPIDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (BOOL)isEnable;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

