@interface CBTCoopV3NotificationApi : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTCoopV3NotificationApiCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTCoopV3NotificationApiDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTCoopV3NotificationApiDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)postAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)postAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)attachObserver:(id)arg1;
- (void)detachObserver:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
