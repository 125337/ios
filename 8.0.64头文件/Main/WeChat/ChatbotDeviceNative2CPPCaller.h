@interface ChatbotDeviceNative2CPPCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotDeviceNative2CPPCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotDeviceNative2CPPCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotDeviceNative2CPPCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)audioStartStatusAsync:(id)arg1 isSucc:(BOOL)arg2 errCode:(int)arg3 isRecordMode:(BOOL)arg4 isStarting:(BOOL)arg5 isFullDuplex:(BOOL)arg6 completion:(id /* block */)arg7;
- (void)audioStartStatusAsync:(id)arg1 isSucc:(BOOL)arg2 errCode:(int)arg3 isRecordMode:(BOOL)arg4 isStarting:(BOOL)arg5 isFullDuplex:(BOOL)arg6 on:(id)arg7 completion:(id /* block */)arg8;
- (void)updateMicStatusAsync:(id)arg1 isOpen:(BOOL)arg2 scene:(int)arg3 transferCtx:(id)arg4 completion:(id /* block */)arg5;
- (void)updateMicStatusAsync:(id)arg1 isOpen:(BOOL)arg2 scene:(int)arg3 transferCtx:(id)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)videoStartSuccessAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)videoStartSuccessAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)videoStopSuccessAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)videoStopSuccessAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)updateNetworkTypeAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)updateNetworkTypeAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)cleanAudioPlayBufferAsync:(id /* block */)arg1;
- (void)cleanAudioPlayBufferAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
