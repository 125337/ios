@interface WAAgentRuntimeCoreService : MMUserService <_TtP6WeChat36MagicAgentRuntimeBizVConsoleDelegate_, WAAgentRuntimeSnapshotReportProvider, WAAgentRuntimeSnapshotManagerDelegate, WAAppTaskMgrExt, MMServiceProtocol, WAAgentAuthUpstreamNotifying>
{
    unsigned long long _bizTimestamp; // +0x8
    _TtC6WeChat20MagicAgentRuntimeBiz * _agentBiz; // +0x10
    NSMutableDictionary * _toolCallTimings; // +0x18
    NSObject<OS_dispatch_source> * _watchdogTimer; // +0x20
    unsigned long long _watchdogPingSeq; // +0x28
    unsigned long long _watchdogLastPongSeq; // +0x30
    unsigned long long _watchdogMissCount; // +0x38
    unsigned long long _watchdogRestartCount; // +0x40
    NSMapTable * _frameSetViewObservers; // +0x48
    NSMutableDictionary * _visibilityDelayTimers; // +0x50
    UIView * _consoleContainerView; // +0x58
    NSMutableArray * _pendingRuntimeReadyCompletions; // +0x60
    NSMutableSet * _attachedAppIds; // +0x68
    NSMutableDictionary * _delayToForegroundQueue; // +0x70
    NSMutableDictionary * _pendingCardRelatedPages; // +0x78
    NSMutableDictionary * _cardMetadatas; // +0x80
    NSMutableSet * _flutterContainerIds; // +0x88
    NSMutableSet * _removedFrameSetContainerIds; // +0x90
    WAAgentRuntimeSnapshotManager * _snapshotManager; // +0x98
    NSMutableDictionary * _toolHandoffCache; // +0xa0
    NSMutableDictionary * _latestToolHandoffByAppId; // +0xa8
    NSMutableDictionary * _toolHandoffWaiters; // +0xb0
    unsigned long long _delayToForegroundGeneration; // +0xb8
    unsigned long long _applicationRunningState; // +0xc0
    NSMutableDictionary * _sceneInstanceHandlesByClientSessionId; // +0xc8
    NSMutableDictionary * _runtimeAppIdsByClientSessionId; // +0xd0
    NSMutableDictionary * _clientSessionIdsByRuntimeAppId; // +0xd8
    NSMutableDictionary * _clientSessionIdsByLegacySessionId; // +0xe0
    NSMutableDictionary * _latestToolCallClientSessionIdByAppId; // +0xe8
    NSString * _clientSessionProcessBootUUID; // +0xf0
    unsigned long long _clientSessionSequence; // +0xf8
    NSMutableDictionary * _delayToForegroundEpochsByAppId; // +0x100
    NSMutableDictionary * _dispatchedSceneVisibilityByClientSessionId; // +0x108
}
+ (unsigned int)allocContainerId;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)dealloc;
- (id)nextClientSessionIdForScene:(unsigned long long)arg1;
- (unsigned long long)validSceneInstanceHandleCount;
- (BOOL)hasAnyValidHandle;
- (id)registerSceneInstanceWithScene:(unsigned long long)arg1 delegate:(id)arg2 visibilitySource:(id)arg3 debugName:(id)arg4 completion:(id /* block */)arg5;
- (void)ensureRuntimeReadyForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)sceneInstanceHandleDidRequestInvalidation:(id)arg1;
- (void)invalidateSceneInstanceHandle:(id)arg1;
- (void)bindRuntimeAppId:(id)arg1 toHandle:(id)arg2;
- (void)unbindRuntimeAppId:(id)arg1 fromHandle:(id)arg2;
- (BOOL)updateVisibilitySourceForHandle:(id)arg1 runningState:(unsigned long long)arg2 expectedKind:(unsigned long long)arg3;
- (void)setVisible:(BOOL)arg1 forSceneInstanceHandle:(id)arg2;
- (void)setTaskRunningState:(unsigned long long)arg1 forSceneInstanceHandle:(id)arg2;
- (BOOL)isBizAlive;
- (void)startBizInternalWithCompletion:(id /* block */)arg1;
- (void)handleRuntimeAttached:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3 success:(BOOL)arg4 errMsg:(id)arg5 isReuse:(BOOL)arg6;
- (void)handleRuntimeDetached:(id)arg1 envVersion:(id)arg2;
- (void)stopBizInternal;
- (unsigned long long)getRuntimeBindingCount;
- (BOOL)hasRuntimeBindingForAppId:(id)arg1;
- (void)updateAgentBiz:(id)arg1;
- (void)preloadMagicWeAppWithAppId:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3 subpackage:(id)arg4 appServiceType:(unsigned int)arg5 scene:(unsigned long long)arg6;
- (void)recordLegacySessionId:(id)arg1 forHandle:(id)arg2;
- (void)dispatchDownstreamMessage:(id)arg1 params:(id)arg2 context:(id)arg3 handle:(id)arg4;
- (unsigned long long)foregroundSceneForAppId:(id)arg1;
- (unsigned long long)sceneForAppId:(id)arg1;
- (BOOL)shouldHandoverAuthCardInSceneForAppId:(id)arg1;
- (id)legacyHandleForSessionId:(id)arg1 appId:(id)arg2 hadHandleAlias:(BOOL *)arg3;
- (id)sceneInstanceHandleForSessionId:(id)arg1;
- (unsigned long long)toolCallContinuousMilliseconds;
- (void)pruneToolCallTimingsAt:(unsigned long long)arg1;
- (void)recordToolCallTimingWithParams:(id)arg1 handle:(id)arg2;
- (id)finishToolCallTimingWithParams:(id)arg1 handle:(id)arg2;
- (id /* block */)prepareToolResultUpstreamReportWithParams:(id)arg1 appId:(id)arg2 sessionId:(id)arg3 handle:(id)arg4;
- (void)routeUpstreamMessage:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appId:(id)arg4 toHandle:(id)arg5;
- (void)handleUpstreamMessage:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appId:(id)arg4;
- (void)handleUpstreamMessage:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appId:(id)arg4 clientSessionId:(id)arg5;
- (BOOL)notifyAuthorizingWithCardId:(id)arg1 scope:(id)arg2 title:(id)arg3 appId:(id)arg4;
- (void)postMessageFromMiniProgram:(id)arg1 fromAppid:(id)arg2;
- (void)sendTurnNewWithSessionId:(id)arg1 handle:(id)arg2;
- (void)onApplicationDidEnterBackground;
- (void)onApplicationWillEnterForeground;
- (void)onApplicationWillSuspend;
- (unsigned long long)getRunningStateForAppId:(id)arg1;
- (BOOL)hasForegroundSessionHandleForRuntimeAppId:(id)arg1;
- (void)invalidateDelayToForegroundQueue;
- (void)invalidateDelayToForegroundQueueForAppId:(id)arg1;
- (BOOL)addDelayToForegroundJSAPI:(id /* block */)arg1 jsapiName:(id)arg2 appId:(id)arg3;
- (void)executeDelayToForegroundQueueIfNeeded:(id)arg1;
- (void)notifyCardVisibilityChanged:(unsigned int)arg1 isVisible:(BOOL)arg2;
- (void)cancelVisibilityDelayTimer:(id)arg1;
- (void)cancelAllVisibilityDelayTimers;
- (void)sendCardVisibilityEventWithContainerId:(unsigned int)arg1 isVisible:(BOOL)arg2;
- (void)startWatchdog;
- (void)stopWatchdog;
- (void)cancelPendingWatchdogRestart;
- (void)scheduleWatchdogRestartAfterDelay:(double)arg1;
- (void)restartBizAfterWatchdogTimeout;
- (void)sendWatchdogPing;
- (void)handleHeartbeatPong:(id)arg1;
- (void)handleWatchdogTimeout;
- (void)sendToolsCardWithCardContext:(id)arg1 containerId:(unsigned int)arg2 containerSize:(CGSize)arg3 autoHeight:(BOOL)arg4 handle:(id)arg5 context:(id)arg6 isLocalReplay:(BOOL)arg7 needPixelBuffer:(BOOL)arg8;
- (void)sendToolsCardWithCardContext:(id)arg1 containerId:(unsigned int)arg2 containerSize:(CGSize)arg3 autoHeight:(BOOL)arg4 clientSessionId:(id)arg5 context:(id)arg6 isLocalReplay:(BOOL)arg7 needPixelBuffer:(BOOL)arg8;
- (void)removeFrameSetForContainerId:(unsigned int)arg1 reason:(id)arg2;
- (void)registerFrameSetViewObserverForContainerId:(unsigned int)arg1 observer:(id)arg2;
- (void)unregisterFrameSetViewObserverForContainerId:(unsigned int)arg1;
- (id)runningFrameSetViewForContainerId:(unsigned int)arg1;
- (void)bindCardMetadataForContainerId:(unsigned int)arg1 metadata:(id)arg2;
- (void)unbindCardMetadataForContainerId:(unsigned int)arg1;
- (id)cardMetadataForContainerId:(unsigned int)arg1;
- (void)registerFlutterContainerId:(unsigned int)arg1;
- (void)unregisterFlutterContainerId:(unsigned int)arg1;
- (void)markCardsExpired:(id)arg1;
- (void)updateCardRelatedPage:(unsigned int)arg1 appId:(id)arg2 path:(id)arg3 envVersion:(id)arg4;
- (id)consumeCardRelatedPageForAppId:(id)arg1;
- (void)saveToolHandoffInfo:(id)arg1;
- (id)toolHandoffInfoForHandoffId:(id)arg1 appId:(id)arg2;
- (void)waitToolHandoffInfoForHandoffId:(id)arg1 appId:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (id)latestToolHandoffInfoForAppId:(id)arg1;
- (id)toolHandoffPersistKV;
- (id)toolHandoffPersistKeyWithHandoffId:(id)arg1 appId:(id)arg2;
- (id)latestToolHandoffPersistKeyWithAppId:(id)arg1;
- (void)persistToolHandoffInfo:(id)arg1;
- (id)persistedToolHandoffInfoForHandoffId:(id)arg1 appId:(id)arg2;
- (id)persistedLatestToolHandoffInfoForAppId:(id)arg1;
- (id)currentConsoleContainerView;
- (void)setConsoleContainerView:(id)arg1;
- (void)switchVConsole:(BOOL)arg1;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (id)getVConsoleContainerView:(id)arg1;
- (void)handleNotifyCardRender:(unsigned int)arg1;
- (void)retrySnapshotIfNeededForContainerId:(unsigned int)arg1;
- (id)makeAgentReportContextForSessionId:(id)arg1 scene:(unsigned long long)arg2;
- (id)makeAgentReportContextForSessionId:(id)arg1 handle:(id)arg2;
- (id)snapshotManagerFrameSetViewForContainerId:(unsigned int)arg1;
- (void)snapshotManagerDidFinishSnapshotForContainerId:(unsigned int)arg1 image:(id)arg2;
- (void)sendHalfScreenCardStatusChange:(id)arg1 containerId:(unsigned int)arg2 containerSize:(CGSize)arg3;
- (BOOL)isAppIdAttached:(id)arg1;
- (id)realAppIdForDemoAppId:(id)arg1;
- (void)onAppTaskDidFinishVersionUpdateWithAppId:(id)arg1 debugMode:(unsigned long long)arg2;
- (void)onAppPackageDidBeSweep:(id)arg1 debugMode:(unsigned long long)arg2;
- (void)dispatchOnMiniprogramUpdateForAppId:(id)arg1 envVersion:(id)arg2;
- (void)dispatchOnMiniprogramRemovedForAppId:(id)arg1 envVersion:(id)arg2;
- (void)killMismatchedMiniProgramIfNeededWithAppId:(id)arg1 envVersion:(id)arg2 appVersion:(unsigned int)arg3;
- (id /* block */)prepareAuthorizationInterruptWithParams:(id)arg1 sessionId:(id)arg2 appId:(id)arg3 handle:(id)arg4;
- (void)notifyAuthorizeCardEvictedWithCardId:(id)arg1;
- (void)notifyAuthorizationCardFinishedWithCardId:(id)arg1;
- (void)notifyAuthorizationCardRequestWithData:(id)arg1;
- (void)notifyAuthorizationCardReceivedWithData:(id)arg1;
- (void)notifyAuthorizationCardActionWithData:(id)arg1;
- (void)dispatchClientLifecycleEvent:(id)arg1 data:(id)arg2;
- (void)reportSceneVisibility:(BOOL)arg1 forHandle:(id)arg2;
- (id)dispatchSceneVisibility:(BOOL)arg1 forHandle:(id)arg2;
- (void)reportApplicationDidBecomeActive;
- (unsigned long long)bizTimestamp;
- (void)setBizTimestamp:(unsigned long long)arg1;
- (id)agentBiz;
- (void)setAgentBiz:(id)arg1;
- (id)toolCallTimings;
- (void)setToolCallTimings:(id)arg1;
- (id)watchdogTimer;
- (void)setWatchdogTimer:(id)arg1;
- (unsigned long long)watchdogPingSeq;
- (void)setWatchdogPingSeq:(unsigned long long)arg1;
- (unsigned long long)watchdogLastPongSeq;
- (void)setWatchdogLastPongSeq:(unsigned long long)arg1;
- (unsigned long long)watchdogMissCount;
- (void)setWatchdogMissCount:(unsigned long long)arg1;
- (unsigned long long)watchdogRestartCount;
- (void)setWatchdogRestartCount:(unsigned long long)arg1;
- (id)frameSetViewObservers;
- (void)setFrameSetViewObservers:(id)arg1;
- (id)visibilityDelayTimers;
- (void)setVisibilityDelayTimers:(id)arg1;
- (id)consoleContainerView;
- (id)pendingRuntimeReadyCompletions;
- (void)setPendingRuntimeReadyCompletions:(id)arg1;
- (id)attachedAppIds;
- (void)setAttachedAppIds:(id)arg1;
- (id)delayToForegroundQueue;
- (void)setDelayToForegroundQueue:(id)arg1;
- (id)pendingCardRelatedPages;
- (void)setPendingCardRelatedPages:(id)arg1;
- (id)cardMetadatas;
- (void)setCardMetadatas:(id)arg1;
- (id)flutterContainerIds;
- (void)setFlutterContainerIds:(id)arg1;
- (id)removedFrameSetContainerIds;
- (void)setRemovedFrameSetContainerIds:(id)arg1;
- (id)snapshotManager;
- (void)setSnapshotManager:(id)arg1;
- (id)toolHandoffCache;
- (void)setToolHandoffCache:(id)arg1;
- (id)latestToolHandoffByAppId;
- (void)setLatestToolHandoffByAppId:(id)arg1;
- (id)toolHandoffWaiters;
- (void)setToolHandoffWaiters:(id)arg1;
- (unsigned long long)delayToForegroundGeneration;
- (void)setDelayToForegroundGeneration:(unsigned long long)arg1;
- (unsigned long long)applicationRunningState;
- (void)setApplicationRunningState:(unsigned long long)arg1;
- (id)sceneInstanceHandlesByClientSessionId;
- (void)setSceneInstanceHandlesByClientSessionId:(id)arg1;
- (id)runtimeAppIdsByClientSessionId;
- (void)setRuntimeAppIdsByClientSessionId:(id)arg1;
- (id)clientSessionIdsByRuntimeAppId;
- (void)setClientSessionIdsByRuntimeAppId:(id)arg1;
- (id)clientSessionIdsByLegacySessionId;
- (void)setClientSessionIdsByLegacySessionId:(id)arg1;
- (id)latestToolCallClientSessionIdByAppId;
- (void)setLatestToolCallClientSessionIdByAppId:(id)arg1;
- (id)clientSessionProcessBootUUID;
- (void)setClientSessionProcessBootUUID:(id)arg1;
- (unsigned long long)clientSessionSequence;
- (void)setClientSessionSequence:(unsigned long long)arg1;
- (id)delayToForegroundEpochsByAppId;
- (void)setDelayToForegroundEpochsByAppId:(id)arg1;
- (id)dispatchedSceneVisibilityByClientSessionId;
- (void)setDispatchedSceneVisibilityByClientSessionId:(id)arg1;
- (void).cxx_destruct;
@end
