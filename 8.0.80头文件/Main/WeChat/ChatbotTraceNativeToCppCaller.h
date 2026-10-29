@interface ChatbotTraceNativeToCppCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotTraceNativeToCppCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotTraceNativeToCppCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotTraceNativeToCppCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)serviceInit;
- (void)serviceClearData;
- (void)fetchChatBotTraceItemAsync:(id /* block */)arg1;
- (void)fetchChatBotTraceItemAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)insertChatBotTraceItemAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)insertChatBotTraceItemAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getAllTraceItemAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getAllTraceItemAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)getTraceItemDataPath:(id)arg1 dataFmt:(id)arg2 isThumb:(BOOL)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
