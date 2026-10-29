@interface WASpecializedAgentUpstreamMessagePipeline : NSObject
{
    NSString * _hostAppId; // +0x8
    id <WASpecializedAgentUpstreamMessagePipelineDelegate> _delegate; // +0x10
    WAAgentVoIPSession * _voipSession; // +0x18
}
- (id)initWithHostAppId:(id)arg1 voipSession:(id)arg2;
- (void)sendAgentStartEvent:(BOOL)arg1 openAgentScene:(unsigned long long)arg2;
- (void)sendAgentContextReadyEventWithIsColdLaunch:(BOOL)arg1 context:(id)arg2 openAgentScene:(unsigned long long)arg3 referrerAppId:(id)arg4;
- (void)sendAgentCloseEvent;
- (void)sendRecordStartEvent:(BOOL)arg1 isColdLaunch:(BOOL)arg2 openAgentScene:(unsigned long long)arg3;
- (void)sendRecordEndEvent;
- (BOOL)sendRecordAsrEvent:(id)arg1 images:(id)arg2 fileItems:(id)arg3;
- (BOOL)sendTextMessage:(id)arg1 methodData:(id)arg2 images:(id)arg3 fileItems:(id)arg4 agentContext:(id)arg5 isColdLaunch:(BOOL)arg6 openAgentScene:(unsigned long long)arg7 sourceAppId:(id)arg8;
- (BOOL)sendMethodEventWithMethod:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appId:(id)arg4 completion:(id /* block */)arg5;
- (BOOL)sendMethodEventWithMethod:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appId:(id)arg4 toolCallClientProfile:(id)arg5 completion:(id /* block */)arg6;
- (void)sendCustomMessage:(id)arg1;
- (void)sendImageMessages:(id)arg1;
- (void)cancelAgentSpeaking;
- (id)agentContextWithContext:(id)arg1 isColdLaunch:(BOOL)arg2 openAgentScene:(unsigned long long)arg3 referrerAppId:(id)arg4;
- (void)appendFileItems:(id)arg1 toEvent:(id)arg2;
- (BOOL)sendEvent:(id)arg1 appId:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)sendAssembledEvent:(id)arg1;
- (BOOL)sendEvent:(id)arg1 withImages:(id)arg2;
- (void)uploadImages:(id)arg1 completion:(id /* block */)arg2;
- (id)startUploadImageToCDN:(id)arg1 completion:(id /* block */)arg2;
- (id)hostAppId;
- (void)setHostAppId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voipSession;
- (void)setVoipSession:(id)arg1;
- (void).cxx_destruct;
@end
