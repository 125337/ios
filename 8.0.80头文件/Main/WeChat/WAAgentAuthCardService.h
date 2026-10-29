@interface WAAgentAuthCardService : MMUserService <MMServiceProtocol>
{
    id <WAAgentAuthUpstreamNotifying> _agentRuntimeUpstream; // +0x8
    id <WAAgentAuthCardExpiredNotifying> _expiredNotifying; // +0x10
    id <WAPNAuthFlutterHandovering> _phoneNumberAuthFlutterHandover; // +0x18
    NSMutableDictionary * _sessions; // +0x20
    NSObject<OS_dispatch_queue> * _registryQueue; // +0x28
    NSMutableDictionary * _pendingFaceSessions; // +0x30
    NSMutableDictionary * _externalCardIdMap; // +0x38
    NSMutableDictionary * _authCardQueues; // +0x40
    NSMutableDictionary * _lastSyncedFrontCardId; // +0x48
    NSMapTable * _directPresenters; // +0x50
    NSMutableOrderedSet * _receivedRuntimeAuthCardIds; // +0x58
    NSMutableDictionary * _runtimeAuthCardData; // +0x60
    NSMutableOrderedSet * _pendingRuntimeAuthCardIds; // +0x68
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerDirectPresenter:(id)arg1 forAppId:(id)arg2;
- (void)unregisterDirectPresenter:(id)arg1 forAppId:(id)arg2;
- (BOOL)shouldDirectPresentForAppId:(id)arg1 fromAgentRuntime:(BOOL)arg2;
- (id)directPresenterForAppId:(id)arg1;
- (BOOL)shouldHandoverAuthCardForAppId:(id)arg1 fromAgentRuntime:(BOOL)arg2;
- (BOOL)isAgentRuntimeAuthForAppId:(id)arg1 fromAgentRuntime:(BOOL)arg2;
- (BOOL)handoverAuthorize:(id)arg1 appId:(id)arg2 scope:(id)arg3 fromAgentRuntime:(BOOL)arg4 delegate:(id)arg5 logic:(id)arg6;
- (BOOL)handoverSubscribeMessage:(id)arg1 appId:(id)arg2 fromAgentRuntime:(BOOL)arg3 logic:(id)arg4;
- (void)handoverPreparedSession:(id)arg1 fromAgentRuntime:(BOOL)arg2;
- (id)handoverFaceAuthWithAppId:(id)arg1 jsapiName:(id)arg2 confirmLogic:(id)arg3 fromAgentRuntime:(BOOL)arg4 onAccept:(id /* block */)arg5 onCancel:(id /* block */)arg6;
- (void)confirmFaceAuthSuccessForToken:(id)arg1;
- (void)cancelFaceAuthForToken:(id)arg1;
- (void)abortFaceAuthForToken:(id)arg1 reason:(id)arg2;
- (BOOL)handoverJSAPIAgentAuthorizeWithAppId:(id)arg1 cardId:(id)arg2 title:(id)arg3 content:(id)arg4 confirmText:(id)arg5 cancelText:(id)arg6 agreedText:(id)arg7 disagreedText:(id)arg8 fromAgentRuntime:(BOOL)arg9 resultHandler:(id /* block */)arg10;
- (BOOL)expireJSAPIAgentAuthorizeForAppId:(id)arg1 cardId:(id)arg2;
- (id)externalCardIdMapKeyForAppId:(id)arg1 cardId:(id)arg2;
- (void)notifyRuntimeAuthorizationCardRequestWithCardId:(id)arg1;
- (void)notifyRuntimeAuthorizationCardReceivedWithCardId:(id)arg1;
- (void)notifyRuntimeAuthorizationCardActionWithCardId:(id)arg1 status:(unsigned long long)arg2;
- (void)notifyRuntimeAuthorizationCardWithCardId:(id)arg1 requesting:(BOOL)arg2;
- (void)registerSession:(id)arg1;
- (void)removeSessionForCardId:(id)arg1;
- (id)sessionForCardId:(id)arg1;
- (void)attachFinishHookToSession:(id)arg1 fromAgentRuntime:(BOOL)arg2;
- (void)setAuthCardDataForSession:(id)arg1 appId:(id)arg2 fromAgentRuntime:(BOOL)arg3;
- (void)notifyAutoAuthorizedWithData:(id)arg1 appId:(id)arg2;
- (void)enqueueAuthCardData:(id)arg1 forQueueKey:(id)arg2;
- (void)dequeueAuthCardDataForCardId:(id)arg1 queueKey:(id)arg2;
- (void)syncFrontAuthCardForQueueKey:(id)arg1 appId:(id)arg2 fromAgentRuntime:(BOOL)arg3;
- (id)agentSessionIdForAppId:(id)arg1;
- (id)agentRuntimeUpstream;
- (void)setAgentRuntimeUpstream:(id)arg1;
- (id)expiredNotifying;
- (void)setExpiredNotifying:(id)arg1;
- (id)phoneNumberAuthFlutterHandover;
- (void)setPhoneNumberAuthFlutterHandover:(id)arg1;
- (id)sessions;
- (void)setSessions:(id)arg1;
- (id)registryQueue;
- (void)setRegistryQueue:(id)arg1;
- (id)pendingFaceSessions;
- (void)setPendingFaceSessions:(id)arg1;
- (id)externalCardIdMap;
- (void)setExternalCardIdMap:(id)arg1;
- (id)authCardQueues;
- (void)setAuthCardQueues:(id)arg1;
- (id)lastSyncedFrontCardId;
- (void)setLastSyncedFrontCardId:(id)arg1;
- (id)directPresenters;
- (void)setDirectPresenters:(id)arg1;
- (id)receivedRuntimeAuthCardIds;
- (void)setReceivedRuntimeAuthCardIds:(id)arg1;
- (id)runtimeAuthCardData;
- (void)setRuntimeAuthCardData:(id)arg1;
- (id)pendingRuntimeAuthCardIds;
- (void)setPendingRuntimeAuthCardIds:(id)arg1;
- (void).cxx_destruct;
@end
