@interface CBTCoopMagicBrushChannel : NSObject <WAAgentSceneInstanceDelegate>
{
    BOOL _agentRuntimeVisibleState; // +0x8
    CBTCoopSubagentManager * _roomSubagentManager; // +0x10
    CBTAsstBoardDataController * _boardDataController; // +0x18
    WAAgentSceneInstanceHandle * _sceneHandle; // +0x20
    NSMutableDictionary * _lastToolCallSessionIdByAppId; // +0x28
    NSMutableDictionary * _appIdToSessionIdMap; // +0x30
    NSMutableDictionary * _appIdToToolCallIdMap; // +0x38
}
- (id)initWithRoomSubagentManager:(id)arg1 boardDataController:(id)arg2;
- (void)dealloc;
- (void)activateWAAgentRuntime;
- (id)ensureAgentRuntimeSceneInstanceHandle;
- (void)deactivateWAAgentRuntime;
- (void)setAgentRuntimeVisible:(BOOL)arg1;
- (void)sendToolsCardWithCardContext:(id)arg1 containerId:(unsigned int)arg2 containerSize:(CGSize)arg3 autoHeight:(BOOL)arg4 context:(id)arg5 isLocalReplay:(BOOL)arg6;
- (id)miniDevMcpEventMsgForAppId:(id)arg1 source:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 miniDevMcpEventMsg:(id)arg2;
- (void)sendToolCall:(id)arg1 completion:(id /* block */)arg2;
- (void)sendToolCall:(id)arg1;
- (void)onReceiveToolCall:(id)arg1;
- (void)onRecvStopAction;
- (void)onUpstreamMessage:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appId:(id)arg4 toolCallClientProfile:(id)arg5 completion:(id /* block */)arg6;
- (void)onUpstreamAuthorizingWithCardId:(id)arg1 scope:(id)arg2 title:(id)arg3 appId:(id)arg4;
- (void)onFollowupMessage:(id)arg1 sessionId:(id)arg2 method:(id)arg3 params:(id)arg4 appId:(id)arg5;
- (void)onCardRenderError:(id)arg1;
- (id)roomSubagentManager;
- (void)setRoomSubagentManager:(id)arg1;
- (id)boardDataController;
- (void)setBoardDataController:(id)arg1;
- (id)sceneHandle;
- (void)setSceneHandle:(id)arg1;
- (BOOL)agentRuntimeVisibleState;
- (void)setAgentRuntimeVisibleState:(BOOL)arg1;
- (id)lastToolCallSessionIdByAppId;
- (void)setLastToolCallSessionIdByAppId:(id)arg1;
- (id)appIdToSessionIdMap;
- (void)setAppIdToSessionIdMap:(id)arg1;
- (id)appIdToToolCallIdMap;
- (void)setAppIdToToolCallIdMap:(id)arg1;
- (void).cxx_destruct;
@end
