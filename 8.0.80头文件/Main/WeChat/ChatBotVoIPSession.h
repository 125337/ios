@interface ChatBotVoIPSession : NSObject
{
    BOOL _isTalkSucc; // +0x8
    int _openScene; // +0xc
    NSString * _voipSessionID; // +0x10
    MMUIViewController * _viewController; // +0x18
    ChatBotVoIPMgr * _mgr; // +0x20
    NSHashTable * _delegates; // +0x28
}
- (id)initWithVoIPSessionID:(id)arg1 openScene:(int)arg2 mgr:(id)arg3;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (BOOL)isValid;
- (void)destroySession;
- (void)destroySessionImmediately;
- (void)interruptAISpeaking;
- (void)sendFunctionCallInfoToAI:(id)arg1 outputStr:(id)arg2;
- (void)sendPOI:(CLLocationCoordinate2D)arg1 isSuccess:(BOOL)arg2 needAuth:(BOOL)arg3 callId:(id)arg4 context:(id)arg5;
- (void)sendRUDPCmdMsg:(id)arg1 targetId:(int)arg2;
- (void)sendRUDPCmdMsgAsync:(id)arg1 targetId:(int)arg2 completion:(id /* block */)arg3;
- (void)sendTextMsg:(id)arg1 uiState:(int)arg2;
- (id)sendTextMsgToBot:(id)arg1 state:(int)arg2 imagePaths:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5;
- (id)sendTextMsgToBot:(id)arg1 state:(int)arg2 imagePaths:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 agent:(id)arg6 retryAnswer:(BOOL)arg7 source:(int)arg8;
- (id)sendTextMsgToBot:(id)arg1 state:(int)arg2 imagePaths:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 agent:(id)arg6 retryAnswer:(BOOL)arg7 chatUsernames:(id)arg8;
- (id)sendTextMsgToBot:(id)arg1 state:(int)arg2 imagePaths:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 agent:(id)arg6 retryAnswer:(BOOL)arg7 source:(int)arg8 chatUsernames:(id)arg9;
- (id)sendTextMsgToBot:(id)arg1 state:(int)arg2 imagePaths:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 agent:(id)arg6 retryAnswer:(BOOL)arg7 source:(int)arg8 chatUsernames:(id)arg9 referMsg:(id)arg10;
- (id)sendTextMsgToBot:(id)arg1 state:(int)arg2 imagePaths:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 agent:(id)arg6 retryAnswer:(BOOL)arg7 chatUsernames:(id)arg8 source:(int)arg9;
- (id)sendTextBypass:(id)arg1 state:(int)arg2 imagePaths:(id)arg3 filePaths:(id)arg4 fileNames:(id)arg5 appBypassInfo:(id)arg6 source:(int)arg7;
- (void)cancelSendLastVoiceASR;
- (void)resetActiveVoIPSession;
- (void)sendEndCallUserMsg:(id)arg1 operationInfo:(id)arg2;
- (void)sendToolCallAdaptor:(id)arg1;
- (void)reportOpInfoAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)handleHomePageMenuItemClickEvent:(id)arg1;
- (void)adjustMemoryInfoEvent:(id)arg1;
- (void)chatWithNotionEvent:(id)arg1;
- (void)joinSubAgent:(id)arg1 subagentSource:(unsigned int)arg2 content:(id)arg3;
- (void)bindAppBypass;
- (void)removeAppBypass;
- (id)getAppBypassData;
- (void)getLocationAndAuthorizationSingle:(id)arg1 retryTime:(int)arg2 isFirstReq:(BOOL)arg3 callId:(id)arg4 context:(id)arg5;
- (void)deliverCdpCommand:(id)arg1 callId:(id)arg2 context:(id)arg3;
- (void)reportCdpSessionTimeout:(id)arg1 context:(id)arg2 sessionId:(id)arg3 cmdId:(id)arg4 errorCode:(int)arg5;
- (void)setMute:(BOOL)arg1 roomScene:(int)arg2 uiState:(unsigned int)arg3 needFullDuplex:(BOOL)arg4 withTransferCtx:(id)arg5 forbidSendMicStatus:(BOOL)arg6 needPlaySound:(BOOL)arg7 responseState:(unsigned int)arg8 imagePaths:(id)arg9 filePaths:(id)arg10 fileNames:(id)arg11 attachMsgidMap:(id)arg12 isSeqReset:(BOOL)arg13;
- (void)setMute:(BOOL)arg1 roomScene:(int)arg2 uiState:(unsigned int)arg3 needFullDuplex:(BOOL)arg4 withTransferCtx:(id)arg5 forbidSendMicStatus:(BOOL)arg6 needPlaySound:(BOOL)arg7 responseState:(unsigned int)arg8 imagePaths:(id)arg9 filePaths:(id)arg10 fileNames:(id)arg11 attachMsgidMap:(id)arg12 chatUsernames:(id)arg13 isSeqReset:(BOOL)arg14;
- (void)setMute:(BOOL)arg1 roomScene:(int)arg2 uiState:(unsigned int)arg3 needFullDuplex:(BOOL)arg4 withTransferCtx:(id)arg5 forbidSendMicStatus:(BOOL)arg6 needPlaySound:(BOOL)arg7 responseState:(unsigned int)arg8 imagePaths:(id)arg9 filePaths:(id)arg10 fileNames:(id)arg11 attachMsgidMap:(id)arg12 chatUsernames:(id)arg13 referMsg:(id)arg14 isSeqReset:(BOOL)arg15;
- (void)setMute:(BOOL)arg1 roomScene:(int)arg2 uiState:(unsigned int)arg3 needFullDuplex:(BOOL)arg4 withTransferCtx:(id)arg5 forbidSendMicStatus:(BOOL)arg6 needPlaySound:(BOOL)arg7 responseState:(unsigned int)arg8 imagePaths:(id)arg9 filePaths:(id)arg10 fileNames:(id)arg11 attachMsgidMap:(id)arg12 chatUsernames:(id)arg13 referMsg:(id)arg14 isSeqReset:(BOOL)arg15 micBizInfo:(id)arg16;
- (void)dealloc;
- (void)switchNewRoomWithParams:(id)arg1;
- (id)allDelegates;
- (void)dispatchTalkSucc;
- (void)markTalkSucc;
- (void)dispatchCallEnd;
- (void)dispatchTTSBegin:(id)arg1;
- (void)dispatchTTSEnd:(id)arg1;
- (void)dispatchRecvMsgInfo:(id)arg1;
- (void)dispatchRecvStreamText:(id)arg1 textSeq:(int)arg2 textOutputSource:(int)arg3 identifier:(id)arg4 traceMsgid:(id)arg5 appTraceId:(id)arg6;
- (void)dispatchRecvQuestionInfo:(id)arg1;
- (void)dispatchGetWeAppNotifyClientMsgData:(id)arg1;
- (void)dispatchRecvWeAppCdp:(id)arg1 callId:(id)arg2 context:(id)arg3;
- (void)dispatchRecvWeAppProccessMsg:(id)arg1;
- (void)dispatchSocialHistoryUpdateWithInfo:(id)arg1;
- (void)dispatchRecvAiSpeakingInfo:(id)arg1;
- (void)dispatchAIMicSpeakStatus:(BOOL)arg1;
- (void)dispatchRecvRecommendMsgInfo:(id)arg1;
- (void)dispatchRecvTTSExtraInfo:(id)arg1;
- (void)dispatchRecvToCliInfo:(id)arg1 openScene:(int)arg2 msgID:(unsigned long long)arg3;
- (void)dispatchRecvVoIPAsrInfo:(id)arg1;
- (void)dispatchRecvBlueMicroInfo:(id)arg1;
- (void)dispatchRecvAsstCardWrap:(id)arg1 traceMsgid:(id)arg2 appTraceId:(id)arg3 storageInfo:(id)arg4;
- (void)dispatchRecvA2UIDefinition:(id)arg1;
- (void)dispatchRemoveRecQuestionViewModels;
- (void)dispatchRefreshSendTimestamp;
- (void)dispatchOnChangeSpecialModel:(id)arg1 modelName:(id)arg2;
- (void)dispatchShowLinkErrMsg:(int)arg1 errorCode:(int)arg2;
- (void)dispatchRecvToolCallAdaptor:(id)arg1;
- (id)voipSessionID;
- (void)setVoipSessionID:(id)arg1;
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)mgr;
- (void)setMgr:(id)arg1;
- (id)delegates;
- (void)setDelegates:(id)arg1;
- (BOOL)isTalkSucc;
- (void)setIsTalkSucc:(BOOL)arg1;
- (void).cxx_destruct;
@end
