@interface ChatbotBridgeTransport : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotBridgeTransportCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotBridgeTransportDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotBridgeTransportDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)attachAsync:(id)arg1 endpoint:(id)arg2 completion:(id /* block */)arg3;
- (void)attachAsync:(id)arg1 endpoint:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)detachAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)detachAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)updateCapabilitiesAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)updateCapabilitiesAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dispatchAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dispatchAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
