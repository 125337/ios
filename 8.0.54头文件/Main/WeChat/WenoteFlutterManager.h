@interface WenoteFlutterManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    WenoteFlutterManagerCppCover cpp_cover; // +0x80
    weak_ptr<wenote::WenoteFlutterManagerDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wenote::WenoteFlutterManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)createWeNoteFlutterInstanceAsync:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (void)createWeNoteFlutterInstanceAsync:(id)arg1 delegate:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)getWeNoteFlutterInstanceAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getWeNoteFlutterInstanceAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)destoryWeNoteFlutterInstanceAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)destoryWeNoteFlutterInstanceAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

