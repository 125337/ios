@interface ChatbotUICPP2NativeCaller : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<chatbot::ChatbotUICPP2NativeCallerCppCover> cpp_cover; // +0x80
    weak_ptr<chatbot::ChatbotUICPP2NativeCallerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<chatbot::ChatbotUICPP2NativeCallerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)talkSuccAsync:(unsigned long long)arg1 openScene:(int)arg2 completion:(id /* block */)arg3;
- (void)talkSuccAsync:(unsigned long long)arg1 openScene:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)callEndAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)callEndAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onRecvRUDPAsync:(int)arg1 content:(id)arg2 completion:(id /* block */)arg3;
- (void)onRecvRUDPAsync:(int)arg1 content:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)onTTSBeginAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onTTSBeginAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onTTSEndAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onTTSEndAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onRecvMsgAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onRecvMsgAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onRecvStreamTextAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onRecvStreamTextAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onRecvQuestionInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onRecvQuestionInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onRecvWeAppNotifyClientMsgAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onRecvWeAppNotifyClientMsgAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onRecvWeAppCdpAsync:(id)arg1 callId:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)onRecvWeAppCdpAsync:(id)arg1 callId:(id)arg2 context:(id)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)onRecvWeAppProccessMsgAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onRecvWeAppProccessMsgAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onRecvPOIRequestAsync:(id)arg1 isFirstReq:(BOOL)arg2 callId:(id)arg3 context:(id)arg4 completion:(id /* block */)arg5;
- (void)onRecvPOIRequestAsync:(id)arg1 isFirstReq:(BOOL)arg2 callId:(id)arg3 context:(id)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)onRecvCommonFunctionCallDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onRecvCommonFunctionCallDataAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onSocialHistoryUpdateAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onSocialHistoryUpdateAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onRecvAiSpeakingInfoAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onRecvAiSpeakingInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
