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
- (void)updateMicStatusAsync:(id)arg1 isOpen:(BOOL)arg2 roomScene:(int)arg3 uiState:(int)arg4 isFullDuplex:(BOOL)arg5 switchToFullDuplex:(BOOL)arg6 transferCtx:(id)arg7 forbidSendMicStatus:(BOOL)arg8 responseState:(int)arg9 imagePaths:(id)arg10 filePaths:(id)arg11 fileNames:(id)arg12 voipSessionID:(id)arg13 attachMsgidMap:(id)arg14 chatUsernames:(id)arg15 referMsg:(id)arg16 isSeqReset:(BOOL)arg17 micBizInfo:(id)arg18 cardWraps:(id)arg19 completion:(id /* block */)arg20;
- (void)updateMicStatusAsync:(id)arg1 isOpen:(BOOL)arg2 roomScene:(int)arg3 uiState:(int)arg4 isFullDuplex:(BOOL)arg5 switchToFullDuplex:(BOOL)arg6 transferCtx:(id)arg7 forbidSendMicStatus:(BOOL)arg8 responseState:(int)arg9 imagePaths:(id)arg10 filePaths:(id)arg11 fileNames:(id)arg12 voipSessionID:(id)arg13 attachMsgidMap:(id)arg14 chatUsernames:(id)arg15 referMsg:(id)arg16 isSeqReset:(BOOL)arg17 micBizInfo:(id)arg18 cardWraps:(id)arg19 on:(id)arg20 completion:(id /* block */)arg21;
- (void)updateNetworkTypeAsync:(int)arg1 ispInfo:(id)arg2 simtype:(int)arg3 completion:(id /* block */)arg4;
- (void)updateNetworkTypeAsync:(int)arg1 ispInfo:(id)arg2 simtype:(int)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)cleanAudioPlayBufferAsync:(id /* block */)arg1;
- (void)cleanAudioPlayBufferAsync:(id)arg1 completion:(id /* block */)arg2;
- (id)getAudioFmtParams;
- (void)setAudioFmtParams:(id)arg1;
- (void)setUserCachePath:(id)arg1 documentPath:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
