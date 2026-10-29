@interface WAAgentService : MMUserService <MMServiceProtocol>
{
    long long _cdpEventCallbackId; // +0x8
    NSString * _latestXml; // +0x10
    NSMutableDictionary * _dicPendingCommands; // +0x18
    NSMutableDictionary * _dicCompletedCommands; // +0x20
    NSObject * _commandsLock; // +0x28
    NSMutableDictionary * _dicCDPContext; // +0x30
    NSMutableDictionary * _dicAgentResult; // +0x38
    NSMutableSet * _setInterruptedSessionId; // +0x40
    NSMutableDictionary * _dicPauseCmdIds; // +0x48
    NSMutableDictionary * _dicSessionIdSnapshotStack; // +0x50
    id <IWAAgentServiceExt> _delegate; // +0x58
}
- (void)runCommand:(NSString *)arg1 sessionId:(NSString *)arg2 task:(WAAppTask *)arg3 completionHandler:(id /* block */)arg4;
- (void)onServiceInit;
- (void)registerServiceDelegate:(id)arg1;
- (void)interruptAgentTaskBySessionId:(id)arg1 state:(unsigned long long)arg2 dismissTask:(BOOL)arg3;
- (void)interruptAgentTaskBySessionId:(id)arg1 state:(unsigned long long)arg2 dismissTask:(BOOL)arg3 keepSession:(BOOL)arg4;
- (BOOL)sessionIdHasInterrupted:(id)arg1;
- (BOOL)sessionIdHasPreempted:(id)arg1;
- (void)clearInterruptedAndPreemptedForSessionId:(id)arg1;
- (void)preemptSessionId:(id)arg1 byNewSessionId:(id)arg2 exceptAppId:(id)arg3;
- (id)getAgentResultForAppid:(id)arg1;
- (void)saveAgentResult:(id)arg1 forAppid:(id)arg2;
- (id)getCDPContextForSessionId:(id)arg1;
- (void)bindAppid:(id)arg1 toSessionId:(id)arg2;
- (void)removeAppid:(id)arg1 fromSessionId:(id)arg2 state:(unsigned long long)arg3;
- (id)getTopAppTaskWithSessionId:(id)arg1;
- (id)getRootAppTaskWithSessionId:(id)arg1;
- (id)getAppTaskListWithSessionId:(id)arg1;
- (void)saveSnapshotStackForSessionId:(id)arg1;
- (id)getSnapshotStackWithSessionId:(id)arg1;
- (id)getAppIdNextToTaskInSnapshotStack:(id)arg1;
- (void)setAuthCardData:(id)arg1 forSessionId:(id)arg2;
- (void)setAutoAuthData:(id)arg1 forSessionId:(id)arg2;
- (void)resumeAgentTaskCommand:(id)arg1;
- (void)onChatBotBypNewCmdGet:(id)arg1 sessionId:(id)arg2 cmdId:(id)arg3 username:(id)arg4 callId:(id)arg5 context:(id)arg6 voipSessionID:(id)arg7 traceMsgid:(id)arg8;
- (void)preprocessCDPCommand:(id)arg1 sessionId:(id)arg2 cmdId:(id)arg3 username:(id)arg4 callId:(id)arg5 context:(id)arg6 voipSessionID:(id)arg7 traceMsgid:(id)arg8;
- (void)onCDPCommandEnd:(id)arg1;
- (void)requestAgentCgi:(id)arg1;
- (id)generateDiagnosticInfoForSessionId:(id)arg1;
- (void)addCompletedCommand:(id)arg1;
- (void)addPendingCommand:(id)arg1;
- (void)removePendingCommand:(id)arg1;
- (id)getPendingCommandsForKey:(id)arg1;
- (void)addPauseCmdId:(id)arg1 forSessionId:(id)arg2;
- (void)removePauseCmdId:(id)arg1 forSessionId:(id)arg2;
- (id)commandKeyForSessionId:(id)arg1 cmdId:(id)arg2;
- (void)handleLink:(id)arg1 withExtraInfo:(id)arg2;
- (void)onJSEventEndWithResult:(id)arg1 handler:(id)arg2 task:(id)arg3;
- (id)featureWithImage:(id)arg1;
- (double)getSnapShotModelInvokeRes:(id)arg1 otherFeature:(id)arg2;
- (id)getFeatureWithParseHTML:(id)arg1;
- (BOOL)checkJSEventNeedInterrupt:(id)arg1;
- (BOOL)isFaceAuthJSAPI:(id)arg1;
- (BOOL)checkJSEventNeedProxyByModel:(id)arg1;
- (BOOL)checkJSEventNeedCallUser:(id)arg1;
- (long long)cdpEventCallbackId;
- (void)setCdpEventCallbackId:(long long)arg1;
- (id)latestXml;
- (void)setLatestXml:(id)arg1;
- (id)dicPendingCommands;
- (void)setDicPendingCommands:(id)arg1;
- (id)dicCompletedCommands;
- (void)setDicCompletedCommands:(id)arg1;
- (id)commandsLock;
- (void)setCommandsLock:(id)arg1;
- (id)dicCDPContext;
- (void)setDicCDPContext:(id)arg1;
- (id)dicAgentResult;
- (void)setDicAgentResult:(id)arg1;
- (id)setInterruptedSessionId;
- (void)setSetInterruptedSessionId:(id)arg1;
- (id)dicPauseCmdIds;
- (void)setDicPauseCmdIds:(id)arg1;
- (id)dicSessionIdSnapshotStack;
- (void)setDicSessionIdSnapshotStack:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
