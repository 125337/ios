@interface ChatBotHeadlessAgentMgr : MMUserService <IFunctionCallNotifyExt, IChatbotAudioStateExt, MMServiceProtocol>
{
    NSMutableDictionary * _sessionContexts; // +0x8
    NSString * _lastSearchXiaoweiSessionId; // +0x10
    NSHashTable * _accountClearHandlers; // +0x18
    ChatBotTaskBarReportContext * _lastTaskBarReportContext; // +0x20
    ChatBotHeadlessSessionDelegate * _keepAliveReportDelegate; // +0x28
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)enterRoomAndOpenMic:(id /* block */)arg1 cbtClientUiState:(int)arg2 appUiState:(int)arg3 resultBlock:(id /* block */)arg4;
- (id)headlessEnterRoomCommonWithCbtClientUiState:(int)arg1 appUiState:(int)arg2 options:(id)arg3 enterRoomCallback:(id /* block */)arg4 resultBlock:(id /* block */)arg5;
- (id)enterRoomAndOpenMic:(id /* block */)arg1 cbtClientUiState:(int)arg2 appUiState:(int)arg3 options:(id)arg4 resultBlock:(id /* block */)arg5;
- (id)enterRoomAndSubmitText:(id)arg1 bypassDetail:(id)arg2 cbtClientUiState:(int)arg3 appUiState:(int)arg4 options:(id)arg5 resultBlock:(id /* block */)arg6;
- (void)openMicWithSessionID:(id)arg1 succBlock:(id /* block */)arg2 appUiState:(int)arg3 presentVCBlock:(id /* block */)arg4 resultBlock:(id /* block */)arg5;
- (void)closeMicWithSessionID:(id)arg1;
- (void)closeMicAndRouteWithSessionID:(id)arg1 fromVC:(id)arg2;
- (void)exitRoomWithSessionID:(id)arg1;
- (void)exitRoomForciblyWithSessionID:(id)arg1;
- (void)markExpectFollowUpFunctionCallForSessionID:(id)arg1;
- (void)forceFinishPreviousHeadlessSessionWithAppUiState:(int)arg1;
- (void)cleanupSessionContextWithoutMute:(id)arg1 sessionID:(id)arg2;
- (void)presentHalfScreenForSessionID:(id)arg1 fromVC:(id)arg2;
- (BOOL)presentHalfScreenForSessionID:(id)arg1 fromVC:(id)arg2 dismissCallback:(id /* block */)arg3;
- (BOOL)presentHalfScreenForSessionID:(id)arg1 fromVC:(id)arg2 keepAliveAfterDismiss:(BOOL)arg3 dismissCallback:(id /* block */)arg4;
- (void)onTalkSuccForSession:(id)arg1;
- (void)onCallEndForSession:(id)arg1;
- (void)onShowLinkErrMsg:(int)arg1 errorCode:(int)arg2 sessionID:(id)arg3;
- (void)onRecvStreamTextForSession:(id)arg1 text:(id)arg2 textOutputSource:(int)arg3 traceMsgid:(id)arg4;
- (void)onRecvAsstCardWrapForSession:(id)arg1 cardWrap:(id)arg2 traceMsgid:(id)arg3 storageInfo:(id)arg4;
- (void)markUserASRIfNeededForContext:(id)arg1 text:(id)arg2 textOutputSource:(int)arg3;
- (void)updateTaskBarReportContext:(id)arg1;
- (id)taskBarReportContextForSessionID:(id)arg1;
- (void)updateHeadlessReportSnapshotForSessionID:(id)arg1 mutate:(id /* block */)arg2;
- (void)markHeadlessMiniAppPendingEventsForSessionID:(id)arg1 firstToken:(BOOL)arg2 complete:(BOOL)arg3 flushHandler:(id /* block */)arg4;
- (void)registerHeadlessAccountClearHandler:(id)arg1;
- (void)unregisterHeadlessAccountClearHandler:(id)arg1;
- (id)reportParamsForSessionID:(id)arg1;
- (id)currentSearchXiaoweiSessionId;
- (void)onRecvVoIPAsrInfoForSession:(id)arg1 asrInfo:(id)arg2;
- (void)registerHalfScreenDecisionHandler:(id /* block */)arg1 forSessionID:(id)arg2;
- (BOOL)resolveHalfScreenDecisionForSessionID:(id)arg1 show:(BOOL)arg2;
- (void)unregisterHalfScreenDecisionHandlerForSessionID:(id)arg1;
- (int)appUiStateForSessionID:(id)arg1;
- (void)updateLongPressDestination:(id)arg1 contactUsername:(id)arg2 forSessionID:(id)arg3;
- (void)onAudioStartStateChange:(long long)arg1 error:(id)arg2;
- (void)onRecordStartStateChange:(long long)arg1 error:(id)arg2;
- (id)fullFunctionNameWithModule:(id)arg1 functionName:(id)arg2;
- (void)bindVoiceFCTraceId:(id)arg1 context:(id)arg2;
- (void)onFunctionCallStart:(id)arg1 moduleName:(id)arg2 functionName:(id)arg3 parameters:(id)arg4;
- (void)onFunctionCallEnd:(id)arg1 moduleName:(id)arg2 functionName:(id)arg3 parameters:(id)arg4 returnValue:(id)arg5;
- (id)contextForSessionID:(id)arg1;
- (void)setMicMuted:(BOOL)arg1 isSeqReset:(BOOL)arg2 session:(id)arg3;
- (void)setMicMuted:(BOOL)arg1 isSeqReset:(BOOL)arg2 forbidSendMicStatus:(BOOL)arg3 session:(id)arg4;
- (void)notifyBoardOpenMicForContext:(id)arg1;
- (void)notifyBoardCloseMicForContext:(id)arg1 canceled:(BOOL)arg2;
- (void)restoreAppBypassIfNeededForContext:(id)arg1;
- (void)invokeEnterRoomCallbackForSession:(id)arg1 success:(BOOL)arg2;
- (void)invokeResultBlockForSession:(id)arg1 success:(BOOL)arg2 errorMsg:(id)arg3;
- (void)startVoiceFCChainCostIfNeededForContext:(id)arg1 sessionID:(id)arg2;
- (void)cleanupAllSessions;
- (void)setMicMuted:(BOOL)arg1 isSeqReset:(BOOL)arg2 forbidSendMicStatus:(BOOL)arg3 micBizInfo:(id)arg4 session:(id)arg5;
- (id)sessionContexts;
- (void)setSessionContexts:(id)arg1;
- (id)lastSearchXiaoweiSessionId;
- (void)setLastSearchXiaoweiSessionId:(id)arg1;
- (id)accountClearHandlers;
- (void)setAccountClearHandlers:(id)arg1;
- (id)lastTaskBarReportContext;
- (void)setLastTaskBarReportContext:(id)arg1;
- (id)keepAliveReportDelegate;
- (void)setKeepAliveReportDelegate:(id)arg1;
- (void).cxx_destruct;
@end
