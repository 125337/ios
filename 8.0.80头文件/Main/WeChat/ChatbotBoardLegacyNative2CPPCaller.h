@interface ChatbotBoardLegacyNative2CPPCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotBoardLegacyNative2CPPCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotBoardLegacyNative2CPPCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotBoardLegacyNative2CPPCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)notifyLegacyItemHeightChanged:(id)arg1 height:(int)arg2;
- (void)notifyLegacyItemStateChanged:(id)arg1 family:(id)arg2 statePayload:(id)arg3;
- (void)dispatchLegacyItemAction:(id)arg1 family:(id)arg2 actionType:(id)arg3 actionPayload:(id)arg4;
- (void)notifyLegacySceneReady:(id)arg1;
- (void)notifyLegacySceneError:(id)arg1 errorCode:(int)arg2 errorMessage:(id)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
