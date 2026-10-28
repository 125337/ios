@interface CaraCpp : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    CaraCppCppCover cpp_cover; // +0x80
    weak_ptr<cara::CaraCppDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<cara::CaraCppDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)launch;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
