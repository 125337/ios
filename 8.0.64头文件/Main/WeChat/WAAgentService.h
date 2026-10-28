@interface WAAgentService : MMUserService <MMServiceProtocol>
{
    long long _cdpEventCallbackId; // +0x8
    NSMutableDictionary * _dicPendingCommands; // +0x10
    NSMutableDictionary * _dicCompletedCommands; // +0x18
    NSMutableDictionary * _dicSessionIdToAppIds; // +0x20
    NSMutableDictionary * _dicAgentResult; // +0x28
    NSMutableSet * _setInterruptedSessionId; // +0x30
    NSMutableDictionary * _dicPauseCmdIds; // +0x38
    NSMutableDictionary * _dicSessionIdSnapshotStack; // +0x40
}
- (void)runCommand:(NSString *)arg1 sessionId:(NSString *)arg2 task:(WAAppTask *)arg3 completionHandler:(id /* block */)arg4;
- (void)onServiceInit;
- (void)interruptAgentTaskBySessionId:(id)arg1 state:(unsigned long long)arg2 dismissTask:(BOOL)arg3;
- (void)interruptAgentTaskBySessionId:(id)arg1 state:(unsigned long long)arg2 dismissTask:(BOOL)arg3 keepSession:(BOOL)arg4;
- (BOOL)sessionIdHasInterrupted:(id)arg1;
- (id)getAgentResultForAppid:(id)arg1;
- (void)saveAgentResult:(id)arg1 forAppid:(id)arg2;
- (void)bindAppid:(id)arg1 toSessionId:(id)arg2;
- (void)removeAppid:(id)arg1 fromSessionId:(id)arg2;
- (id)getTopAppTaskWithSessionId:(id)arg1;
- (id)getRootAppTaskWithSessionId:(id)arg1;
- (id)getAppTaskListWithSessionId:(id)arg1;
- (void)saveSnapshotStackForSessionId:(id)arg1;
- (id)getSnapshotStackWithSessionId:(id)arg1;
- (id)getAppIdNextToTaskInSnapshotStack:(id)arg1;
- (void)resumeAgentTaskCommand:(id)arg1;
- (void)onChatBotBypNewCmdGet:(id)arg1 sessionId:(id)arg2 cmdId:(id)arg3 username:(id)arg4 callId:(id)arg5 context:(id)arg6;
- (void)preprocessCDPCommand:(id)arg1 sessionId:(id)arg2 cmdId:(id)arg3 username:(id)arg4 callId:(id)arg5 context:(id)arg6;
- (void)onCDPCommandEnd:(id)arg1;
- (void)requestAgentCgi:(id)arg1;
- (void)addCompletedCommand:(id)arg1;
- (void)removeCompletedCommandArray:(id)arg1;
- (void)addPendingCommand:(id)arg1;
- (void)removePendingCommand:(id)arg1;
- (id)getPendingCommandsForKey:(id)arg1;
- (void)addPauseCmdId:(id)arg1 forSessionId:(id)arg2;
- (void)removePauseCmdId:(id)arg1 forSessionId:(id)arg2;
- (id)commandKeyForSessionId:(id)arg1 cmdId:(id)arg2;
- (void)handleLink:(id)arg1 withExtraInfo:(id)arg2;
- (long long)cdpEventCallbackId;
- (void)setCdpEventCallbackId:(long long)arg1;
- (id)dicPendingCommands;
- (void)setDicPendingCommands:(id)arg1;
- (id)dicCompletedCommands;
- (void)setDicCompletedCommands:(id)arg1;
- (id)dicSessionIdToAppIds;
- (void)setDicSessionIdToAppIds:(id)arg1;
- (id)dicAgentResult;
- (void)setDicAgentResult:(id)arg1;
- (id)setInterruptedSessionId;
- (void)setSetInterruptedSessionId:(id)arg1;
- (id)dicPauseCmdIds;
- (void)setDicPauseCmdIds:(id)arg1;
- (id)dicSessionIdSnapshotStack;
- (void)setDicSessionIdSnapshotStack:(id)arg1;
- (void).cxx_destruct;
@end
