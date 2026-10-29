@interface CBTStreamMDNativeToCppCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTStreamMDNativeToCppCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTStreamMDNativeToCppCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTStreamMDNativeToCppCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)generateParser:(id)arg1 delegate:(id)arg2;
- (void)destoryParser:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
