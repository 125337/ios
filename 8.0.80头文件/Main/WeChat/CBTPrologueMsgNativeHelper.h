@interface CBTPrologueMsgNativeHelper : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTPrologueMsgNativeHelperCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTPrologueMsgNativeHelperDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTPrologueMsgNativeHelperDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)onPrologueMsgUpdateAsync:(id)arg1 updateMsgList:(id)arg2 completion:(id /* block */)arg3;
- (void)onPrologueMsgUpdateAsync:(id)arg1 updateMsgList:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)onDeletePrologueMsgAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onDeletePrologueMsgAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
