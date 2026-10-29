@interface WAAgentRuntimeChannelService : MMUserService <WAAppTaskMgrExt, WASpecializedAgentChannelDelegate, MMServiceProtocol>
{
    BOOL _isChannelReady; // +0x8
    WAContact * _currentContact; // +0x10
    unsigned long long _activeRoomId; // +0x18
    id <WAChatBotAgentRoomTaskReportDelegate> _reportDelegate; // +0x20
    NSMutableDictionary * _specializedAgentVCNewCache; // +0x28
    NSMutableDictionary * _pendingEventsByAppId; // +0x30
    unsigned long long _pendingEventsTotalCount; // +0x38
    NSMutableDictionary * _channelsByHostAppId; // +0x40
    NSMapTable * _reportDelegatesByHostAppId; // +0x48
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (id)coreService;
- (id)specializedAgentChannelForHostAppId:(id)arg1;
- (id)specializedAgentChannelForContact:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)setReportDelegate:(id)arg1 forHostAppId:(id)arg2;
- (void)bindHostViewController:(id)arg1 forHostAppId:(id)arg2;
- (BOOL)isBizAlive;
- (id)sessionHandleForHostAppId:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)startSessionWithContact:(id)arg1 completion:(id /* block */)arg2;
- (void)notifySessionClose:(id)arg1;
- (void)notifyAgentPageVisibleForHostAppId:(id)arg1 context:(id)arg2 isColdLaunch:(BOOL)arg3 openAgentScene:(unsigned long long)arg4 referrerAppId:(id)arg5;
- (void)sendText:(id)arg1 methodData:(id)arg2 images:(id)arg3 fileItems:(id)arg4 agentContext:(id)arg5 isColdLaunch:(BOOL)arg6 hostAppId:(id)arg7 openAgentScene:(unsigned long long)arg8 sourceAppId:(id)arg9;
- (void)sendTurnNewWithSessionId:(id)arg1 hostAppId:(id)arg2;
- (void)notifyStartRecord:(BOOL)arg1 fromAppId:(id)arg2 isColdLaunch:(BOOL)arg3 openAgentScene:(unsigned long long)arg4;
- (void)notifyEndRecord:(id)arg1;
- (void)sendRecordAsrEvent:(id)arg1 images:(id)arg2 fileItems:(id)arg3 hostAppId:(id)arg4;
- (void)notifyCancelRecordForHostAppId:(id)arg1;
- (unsigned long long)activeRoomIdForHostAppId:(id)arg1;
- (id)hostAppIdForSceneInstanceHandle:(id)arg1;
- (void)sendToolsCardWithCardContext:(id)arg1 containerId:(unsigned int)arg2 containerSize:(CGSize)arg3 autoHeight:(BOOL)arg4 hostAppId:(id)arg5 context:(id)arg6 isLocalReplay:(BOOL)arg7;
- (void)notifyCardVisibilityChanged:(unsigned int)arg1 isVisible:(BOOL)arg2;
- (void)registerFrameSetViewObserverForContainerId:(unsigned int)arg1 observer:(id)arg2;
- (void)unregisterFrameSetViewObserverForContainerId:(unsigned int)arg1;
- (void)markCardsExpired:(id)arg1;
- (void)bindCardMetadataForContainerId:(unsigned int)arg1 metadata:(id)arg2;
- (void)unbindCardMetadataForContainerId:(unsigned int)arg1;
- (id)getVisibleAgentHost:(id)arg1 sessionId:(id)arg2;
- (id)specializedAgentViewControllerIfExistForAppid:(id)arg1;
- (id)specializedAgentViewControllerForContact:(id)arg1;
- (BOOL)hasActiveSpecializedAgentSessionForContact:(id)arg1;
- (void)enqueueAgentEvent:(id)arg1 targetUIAppId:(id)arg2 typeDesc:(id)arg3 broadcast:(id /* block */)arg4;
- (void)dropOldestPendingEventGlobally;
- (void)drainPendingEventsForAppId:(id)arg1;
- (void)dropPendingEventsForAppId:(id)arg1;
- (BOOL)hasPendingEventsForAppId:(id)arg1;
- (id)voipStatusDescriptionForHostAppId:(id)arg1;
- (void)specializedAgentChannel:(id)arg1 didChangeReadyState:(BOOL)arg2;
- (void)specializedAgentChannel:(id)arg1 didChangeConnectionState:(unsigned long long)arg2 errorMsg:(id)arg3;
- (void)specializedAgentChannel:(id)arg1 didReceiveEvent:(id)arg2;
- (void)specializedAgentChannel:(id)arg1 didReceiveAsrText:(id)arg2;
- (void)specializedAgentChannel:(id)arg1 inputPeakDidChange:(float)arg2;
- (void)specializedAgentChannel:(id)arg1 didRequestFollowupText:(id)arg2 sessionId:(id)arg3 method:(id)arg4 params:(id)arg5 appId:(id)arg6;
- (void)specializedAgentChannelDidBecomeBizUnavailable:(id)arg1;
- (void)specializedAgentChannelDidExpireRealtimeKeepAlive:(id)arg1;
- (void)specializedAgentChannel:(id)arg1 didFailToSendUpstreamEvent:(id)arg2 reason:(id)arg3;
- (void)onLaunchSubagentRuntimeEvent:(id)arg1;
- (void)onNotifyClientEvent:(id)arg1 assistantUsername:(id)arg2;
- (void)onAppTaskRunningStateDidChange:(id)arg1 runningState:(unsigned long long)arg2;
- (void)onAppTaskTerminate:(id)arg1;
- (BOOL)isChannelReady;
- (id)currentContact;
- (unsigned long long)activeRoomId;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)specializedAgentVCNewCache;
- (void)setSpecializedAgentVCNewCache:(id)arg1;
- (id)pendingEventsByAppId;
- (void)setPendingEventsByAppId:(id)arg1;
- (unsigned long long)pendingEventsTotalCount;
- (void)setPendingEventsTotalCount:(unsigned long long)arg1;
- (id)channelsByHostAppId;
- (void)setChannelsByHostAppId:(id)arg1;
- (id)reportDelegatesByHostAppId;
- (void)setReportDelegatesByHostAppId:(id)arg1;
- (void).cxx_destruct;
@end
