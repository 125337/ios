@interface FlutterCommonManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<flutter_common::FlutterCommonManagerCppCover> cpp_cover; // +0x80
    weak_ptr<flutter_common::FlutterCommonManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<flutter_common::FlutterCommonManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (unsigned long long)getCommonStructPointer;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
