@interface CBTAsstVoIPCppApiCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::CBTAsstVoIPCppApiCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::CBTAsstVoIPCppApiCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::CBTAsstVoIPCppApiCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)attachNativeAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)attachNativeAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)detachNativeAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)detachNativeAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)attachDartAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)attachDartAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)detachDartAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)detachDartAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)syncCallContext;
- (void)onXmlMsgEventAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onXmlMsgEventAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onLCKCallHandledAsync:(id)arg1 accepted:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onLCKCallHandledAsync:(id)arg1 accepted:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)onIncomingCardTappedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onIncomingCardTappedAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)acceptInComingCallAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)acceptInComingCallAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onCallConnectedAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onCallConnectedAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)endCallAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)endCallAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSwitchAudioRouteAsync:(id)arg1 audioRoute:(int)arg2 completion:(id /* block */)arg3;
- (void)requestSwitchAudioRouteAsync:(id)arg1 audioRoute:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)onAudioRouteChangedAsync:(id)arg1 audioRoute:(int)arg2 completion:(id /* block */)arg3;
- (void)onAudioRouteChangedAsync:(id)arg1 audioRoute:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
