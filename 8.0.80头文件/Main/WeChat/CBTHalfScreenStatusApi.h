@interface CBTHalfScreenStatusApi : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTHalfScreenStatusApiCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTHalfScreenStatusApiDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTHalfScreenStatusApiDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)attachObserver:(id)arg1;
- (void)detachObserver:(id)arg1;
- (void)notifyHalfScreenLifecycleAsync:(id)arg1 paused:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)notifyHalfScreenLifecycleAsync:(id)arg1 paused:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
