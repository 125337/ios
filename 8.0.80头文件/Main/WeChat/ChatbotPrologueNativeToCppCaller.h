@interface ChatbotPrologueNativeToCppCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotPrologueNativeToCppCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotPrologueNativeToCppCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotPrologueNativeToCppCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)serviceInit:(id)arg1;
- (void)serviceClearData;
- (void)markMsgAsExposedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)markMsgAsExposedAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)getDataPath:(id)arg1 dataFmt:(id)arg2 isThumb:(BOOL)arg3;
- (id)getPrologueMsgMetaInfo;
- (void)syncPrologueMsg:(int)arg1;
- (id)getAllPrologueMsg:(int)arg1;
- (id)getAllNewMsgs:(int)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
