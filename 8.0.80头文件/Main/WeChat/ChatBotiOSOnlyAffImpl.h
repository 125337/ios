@interface ChatBotiOSOnlyAffImpl : NSObject <ChatbotiOSOnlyCPP2NativeCallerBase>
{
    ChatbotiOSOnlyCPP2NativeCallerCallback * _nativeCallback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)onRecvBlueMicroInfoAsync:(unsigned long long)arg1 downlinkSideInfo:(id)arg2 voipSessionID:(id)arg3;
- (void)onRecvAsstCardAsync:(unsigned long long)arg1 cardData:(id)arg2 traceMsgid:(id)arg3 appTraceId:(id)arg4 voipSessionID:(id)arg5 storageInfo:(id)arg6;
- (void)onMsgStorageIdReadyAsync:(unsigned long long)arg1 matchKey:(id)arg2 storageInfo:(id)arg3;
- (void)onRecvA2UIDefinitionAsync:(unsigned long long)arg1 callInput:(id)arg2 voipSessionID:(id)arg3;
- (void)onUploadMultimodalImageResultAsync:(unsigned long long)arg1 localImagePaths:(id)arg2 multimodalWrap:(id)arg3;
- (unsigned long long)getServerTime;
- (id)nativeCallback;
- (void)setNativeCallback:(id)arg1;
- (void).cxx_destruct;
@end
