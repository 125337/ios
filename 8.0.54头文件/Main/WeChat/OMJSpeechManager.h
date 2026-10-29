@interface OMJSpeechManager : NSObject
{
    SharedPtr<XMJSpeechManager> _backingSpeechManager; // +0x8
}
- (id)initWithBackingSpeechManager:(const void *)arg1;
- (long long)requestSpeechInfoWithRequestParams:(id)arg1 requestBuff:(id)arg2 iLinkAppRequest:(id)arg3 iLinkCmd:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)requestSpeechRecognitionWithAudioData:(id)arg1 postParams:(id)arg2 iLinkAppRequest:(id)arg3 iLinkCmd:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)requestFullSpeechRecognitionWithAudioData:(id)arg1 postParams:(id)arg2 voiceIDForHttp:(id)arg3 iLinkAppRequest:(id)arg4 iLinkCmd:(id)arg5 completionHandler:(id /* block */)arg6;
- (long long)requestSpeechToSpeechWithAudioData:(id)arg1 postParams:(id)arg2 voiceIDForHttp:(id)arg3 iLinkAppRequest:(id)arg4 iLinkCmd:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)cancelTask:(long long)arg1;
- (void)cancelAll;
- (long long)submitAsyncSpeechRequestWithAudioData:(id)arg1 postParams:(id)arg2 voiceIDForHttp:(id)arg3 iLinkAppRequest:(id)arg4 iLinkCmd:(id)arg5 audioDurationMillis:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
- (long long)queryAsyncSpeechRequestWithSubmitTaskID:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 contextBuff:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)submitAsyncTTSRequestWithInfo:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)queryAsyncTTSRequestWithSubmitTaskID:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 contextBuff:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)submitAsyncSpeechCloneRequestWithInfo:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)queryAsyncSpeechCloneRequestWithSubmitTaskID:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 contextBuff:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)submitAsyncSpeechSynthRequestWithInfo:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)queryAsyncSpeechSynthRequestWithSubmitTaskID:(id)arg1 iLinkAppRequest:(id)arg2 iLinkCmd:(id)arg3 contextBuff:(id)arg4 completionHandler:(id /* block */)arg5;
- (SharedPtr<XMJSpeechManager>)backingSpeechManager;
- (void)setBackingSpeechManager:(SharedPtr<XMJSpeechManager>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

