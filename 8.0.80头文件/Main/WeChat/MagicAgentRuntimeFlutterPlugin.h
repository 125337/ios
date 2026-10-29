@interface MagicAgentRuntimeFlutterPlugin : NSObject <WAAgentSceneInstanceDelegate, WAAgentFrameSetViewObserver, MagicSclFrameSetViewDelegate, WACanvasCoverViewContainerDelegate, MMFlutterPlugin, AgentMagicBrushHostApi>
{
    FlutterEngine * _weakEngine; // +0x8
    NSObject<FlutterTextureRegistry> * _registry; // +0x10
    AgentMagicBrushFlutterApi * _flutterApi; // +0x18
    NSMutableDictionary * _cardMap; // +0x20
    NSMutableDictionary * _pendingSnapshotInfos; // +0x28
    NSString * _lastSessionId; // +0x30
    NSString * _lastAgentSource; // +0x38
    NSMutableDictionary * _lastToolCallSessionIdByAppId; // +0x40
    NSMutableDictionary * _appIdToSessionIdMap; // +0x48
    NSMutableDictionary * _appIdToToolCallIdMap; // +0x50
    NSString * _boundVoipSessionID; // +0x58
    WAAgentSceneInstanceHandle * _sceneHandle; // +0x60
    NSNumber * _agentRuntimeVisibleState; // +0x68
}
+ (id)appVersionFromContactForAppId:(id)arg1;
+ (void)reportSnapshotInfoSecWithMetadata:(id)arg1 containerId:(unsigned int)arg2 traceMsgId:(id)arg3 result:(id)arg4;
- (id)init;
- (void)updateLastDownstreamEvent:(id)arg1 appId:(id)arg2 trackForInterrupt:(BOOL)arg3;
- (id)makeInfoSecMetadataWithContext:(id)arg1 cardContext:(id)arg2;
- (void)stashPendingSnapshotInfo:(id)arg1 forContainerId:(unsigned int)arg2;
- (id)takePendingSnapshotInfoForContainerId:(unsigned int)arg1 hadExpiredStash:(BOOL *)arg2;
- (void)purgeExpiredPendingSnapshotInfos;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)activateSceneWithCompletion:(id /* block */)arg1;
- (void)setAgentRuntimeVisible:(BOOL)arg1;
- (void)activateWAAgentRuntimeWithCompletion:(id /* block */)arg1;
- (void)deactivateSceneWithError:(id *)arg1;
- (void)bindVoipSessionVoipSessionID:(id)arg1 error:(id *)arg2;
- (void)unbindVoipSessionVoipSessionID:(id)arg1 error:(id *)arg2;
- (void)interruptWithCompletion:(id /* block */)arg1;
- (void)createCardSpec:(id)arg1 error:(id *)arg2;
- (void)disposeCardContainerId:(long long)arg1 error:(id *)arg2;
- (void)notifyVisibilityChangedContainerId:(long long)arg1 isVisible:(BOOL)arg2 error:(id *)arg3;
- (void)recycleCardContainerId:(long long)arg1 error:(id *)arg2;
- (void)restoreCardContainerId:(long long)arg1 error:(id *)arg2;
- (void)dispatchTouchContainerId:(long long)arg1 action:(long long)arg2 touchId:(long long)arg3 x:(double)arg4 y:(double)arg5 timestampMs:(long long)arg6 error:(id *)arg7;
- (id)allocContainerIdsCount:(long long)arg1 error:(id *)arg2;
- (id)getBizTimestampWithError:(id *)arg1;
- (id)getServerNowMsWithError:(id *)arg1;
- (id)resolveRealAppIdAppId:(id)arg1 error:(id *)arg2;
- (void)openRelatedPageAppId:(id)arg1 path:(id)arg2 envVersion:(id)arg3 completion:(id /* block */)arg4;
- (id)reportCardSnapshotReport:(id)arg1 error:(id *)arg2;
- (BOOL)validateSnapshotReportMetadata:(id)arg1 snapshotPath:(id)arg2 containerId:(unsigned int)arg3;
- (void)startSnapshotUploadWithMetadata:(id)arg1 containerId:(unsigned int)arg2 snapshotPath:(id)arg3 traceMsgId:(id)arg4 msgId:(id)arg5 imageWidth:(long long)arg6 imageHeight:(long long)arg7;
- (void)resolveMbCachePathWithCompletion:(id /* block */)arg1;
- (void)handleFrameSetViewReadyWithContainerId:(unsigned int)arg1 frameSetView:(id)arg2 frameId:(unsigned int)arg3;
- (void)onMagicSclFrameSetViewSizeChange:(id)arg1;
- (void)dispatchToolCallXmlBase64:(id)arg1 error:(id *)arg2;
- (void)onNotifyCardRender:(unsigned int)arg1;
- (void)onCardExpired:(id)arg1 containerId:(unsigned int)arg2;
- (void)onFrameSetViewCreated:(id)arg1 frameId:(unsigned int)arg2 containerId:(unsigned int)arg3;
- (void)sendToolCallData:(id)arg1 method:(id)arg2 params:(id)arg3 sessionId:(id)arg4 appId:(id)arg5 toolCallClientProfile:(id)arg6 completion:(id /* block */)arg7;
- (void)onUpstreamMessage:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appId:(id)arg4 toolCallClientProfile:(id)arg5 completion:(id /* block */)arg6;
- (void)onUpstreamAuthorizingWithCardId:(id)arg1 scope:(id)arg2 title:(id)arg3 appId:(id)arg4;
- (void)onFollowupMessage:(id)arg1 sessionId:(id)arg2 method:(id)arg3 params:(id)arg4 appId:(id)arg5;
- (void)onUpdateCardRelatedPage:(unsigned int)arg1 appId:(id)arg2 path:(id)arg3 envVersion:(id)arg4;
- (void)onCardRenderError:(id)arg1;
- (void)onCoverView:(id)arg1 componentStateChanged:(BOOL)arg2;
- (id)weakEngine;
- (void)setWeakEngine:(id)arg1;
- (id)registry;
- (void)setRegistry:(id)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (id)cardMap;
- (void)setCardMap:(id)arg1;
- (id)pendingSnapshotInfos;
- (void)setPendingSnapshotInfos:(id)arg1;
- (id)lastSessionId;
- (void)setLastSessionId:(id)arg1;
- (id)lastAgentSource;
- (void)setLastAgentSource:(id)arg1;
- (id)lastToolCallSessionIdByAppId;
- (void)setLastToolCallSessionIdByAppId:(id)arg1;
- (id)appIdToSessionIdMap;
- (void)setAppIdToSessionIdMap:(id)arg1;
- (id)appIdToToolCallIdMap;
- (void)setAppIdToToolCallIdMap:(id)arg1;
- (id)boundVoipSessionID;
- (void)setBoundVoipSessionID:(id)arg1;
- (id)sceneHandle;
- (void)setSceneHandle:(id)arg1;
- (id)agentRuntimeVisibleState;
- (void)setAgentRuntimeVisibleState:(id)arg1;
- (void).cxx_destruct;
@end
