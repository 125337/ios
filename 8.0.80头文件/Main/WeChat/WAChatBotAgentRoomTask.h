@interface WAChatBotAgentRoomTask : WAChatBotVoIPBaseRoomTask
{
    id <WAChatBotAgentRoomTaskReportDelegate> _reportDelegate; // +0x8
}
+ (id)convertCmdMsgData:(id)arg1;
- (id)eventTypeToString:(int)arg1;
- (BOOL)sendClient2AgentEvent:(id)arg1;
- (BOOL)sendClient2AgentEvent:(id)arg1 withOverrideAppId:(id)arg2;
- (void)sendAgentStartEvent:(BOOL)arg1;
- (void)sendAgentStartEvent:(BOOL)arg1 openAgentScene:(unsigned long long)arg2;
- (void)sendAgentContextReadyEventWithIsColdLaunch:(BOOL)arg1 context:(id)arg2;
- (void)sendAgentContextReadyEventWithIsColdLaunch:(BOOL)arg1 context:(id)arg2 openAgentScene:(unsigned long long)arg3;
- (void)sendAgentContextReadyEventWithIsColdLaunch:(BOOL)arg1 context:(id)arg2 openAgentScene:(unsigned long long)arg3 referrerAppId:(id)arg4;
- (void)sendAgentCloseEvent:(id)arg1;
- (void)sendRecordStartEvent:(BOOL)arg1 overrideAppId:(id)arg2 isColdLaunch:(BOOL)arg3 openAgentScene:(unsigned long long)arg4;
- (void)sendRecordEndEvent:(id)arg1;
- (void)sendRecordAsrEvent:(id)arg1 images:(id)arg2;
- (void)sendRecordAsrEvent:(id)arg1 images:(id)arg2 fileItems:(id)arg3;
- (void)sendRecordAsrEvent:(id)arg1 images:(id)arg2 fileItems:(id)arg3 overrideAppId:(id)arg4;
- (void)sendTextMessage:(id)arg1 methodData:(id)arg2;
- (void)sendTextMessage:(id)arg1 methodData:(id)arg2 images:(id)arg3;
- (void)sendTextMessage:(id)arg1 methodData:(id)arg2 images:(id)arg3 agentContext:(id)arg4;
- (void)sendTextMessage:(id)arg1 methodData:(id)arg2 images:(id)arg3 agentContext:(id)arg4 isColdLaunch:(BOOL)arg5;
- (void)sendTextMessage:(id)arg1 methodData:(id)arg2 images:(id)arg3 fileItems:(id)arg4 agentContext:(id)arg5 isColdLaunch:(BOOL)arg6;
- (void)sendTextMessage:(id)arg1 methodData:(id)arg2 images:(id)arg3 fileItems:(id)arg4 agentContext:(id)arg5 isColdLaunch:(BOOL)arg6 overrideAppId:(id)arg7 openAgentScene:(unsigned long long)arg8;
- (void)sendEvent:(id)arg1 withImages:(id)arg2;
- (void)sendEvent:(id)arg1 withImages:(id)arg2 overrideAppId:(id)arg3;
- (void)uploadImages:(id)arg1 completion:(id /* block */)arg2;
- (id)startUploadImageToCDN:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMethodEventWithMethod:(id)arg1 params:(id)arg2 sessionId:(id)arg3;
- (void)sendMethodEventWithMethod:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appid:(id)arg4;
- (BOOL)sendMethodEventWithMethod:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appid:(id)arg4 completion:(id /* block */)arg5;
- (void)sendSpeakCancel;
- (void)sendCustomMsg:(id)arg1;
- (void)sendImageMessage:(id)arg1;
- (void)sendImageMessages:(id)arg1;
- (BOOL)sendCmdContentData:(id)arg1;
- (BOOL)sendCmdContentData:(id)arg1 completion:(id /* block */)arg2;
- (void)fillClient2AgentEvent:(id)arg1 withOverrideAppId:(id)arg2;
- (void)fillClient2AgentEvent:(id)arg1;
- (void)onRecvToCliInfoData:(id)arg1;
- (void)onRecvVoIPAsrInfoData:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (void).cxx_destruct;
@end
