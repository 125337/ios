@interface MMFinderLiveGestureLogic : NSObject <MMFinderLiveGestureCacheExt, MMLiveTaskMgrExt, MMFinderLiveGestureAnimationExternalRenderingDelegate, MMFinderLiveGestureAnimationContainerViewDelegate>
{
    BOOL _masterSwitchEnabled; // +0x8
    BOOL _enabled; // +0x9
    BOOL _currentAnchorAnimationPlaying; // +0xa
    MMFinderLiveTaskId * _taskId; // +0x10
    NSMutableDictionary * _luaObjectIdToGestureIdMap; // +0x18
    NSMutableDictionary * _gestureIdToLuaObjectIdMap; // +0x20
    NSMutableArray * _registrationTasks; // +0x28
    double _temporarilyEnabledUntil; // +0x30
    NSMutableDictionary * _stableReferenceLuaMessageItems; // +0x38
    double _anchorAspectRatio; // +0x40
    MMFinderLiveGestureGiftSenderCacheItem * _lastIncomingGiftSender; // +0x48
    NSMutableDictionary * _recentIncomingGiftSenders; // +0x50
    MMFinderLiveGestureAnimationWeVisionRenderer * _weVisionLuaRenderer; // +0x58
}
+ (BOOL)defaultGestureEnablementForLiveTag:(id)arg1;
+ (BOOL)isNewGestureLuaMessageModel:(id)arg1 stableRelativeWith:(id)arg2;
- (id)initWithTaskId:(id)arg1 enabled:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setTemporarilyEnabledUntil:(double)arg1;
- (void)updateBackendMasterSwitchEnablement;
- (void)setEnabled:(BOOL)arg1 completionBlock:(id /* block */)arg2;
- (void)temporarilyEnableForTime:(double)arg1;
- (void)invalidateTemporaryEnablement;
- (void)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (void)processReceivedGestureSeiMessageFragment:(id)arg1;
- (void)processGestureEligibleGiftingMessage:(id)arg1;
- (void)onCachedGestureWillUpdate:(id)arg1;
- (void)onCachedGestureDidUpdate:(id)arg1 result:(unsigned long long)arg2;
- (void)onCachedGestureWillDelete:(id)arg1;
- (void)onGestureAnimationViewDidEndPlaying:(id)arg1;
- (void)onLiveTask:(id)arg1 trtcLocalVideoSizeChanged:(CGSize)arg2;
- (void)onExternallyRenderedGestureAnimationInvokedForGestureId:(id)arg1;
- (id)liveTask;
- (BOOL)finalEnabled;
- (void)updateLuaScriptRegistrationBasedOnEnablement;
- (void)enqueueRegistrationTaskWithType:(unsigned long long)arg1 gestureIdsSource:(id /* block */)arg2;
- (void)dequeueRegistrationTask;
- (void)registerLuaScriptForGestureWithId:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)unregisterLuaScriptForGestureWithId:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)startGestureAnimationWithLuaJsonMessageItem:(id)arg1;
- (void)startGestureAnimationWithSeiModel:(id)arg1 itemModel:(id)arg2;
- (void)sendGestureSeiWithModel:(id)arg1;
- (void)updateAnchorAspectRatioWithLocalVideoSize:(CGSize)arg1;
- (id)animationPlayer;
- (void)playSoundEffectForGestureWithId:(id)arg1;
- (BOOL)masterSwitchEnabled;
- (void)setMasterSwitchEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)luaObjectIdToGestureIdMap;
- (void)setLuaObjectIdToGestureIdMap:(id)arg1;
- (id)gestureIdToLuaObjectIdMap;
- (void)setGestureIdToLuaObjectIdMap:(id)arg1;
- (id)registrationTasks;
- (void)setRegistrationTasks:(id)arg1;
- (double)temporarilyEnabledUntil;
- (BOOL)currentAnchorAnimationPlaying;
- (void)setCurrentAnchorAnimationPlaying:(BOOL)arg1;
- (id)stableReferenceLuaMessageItems;
- (void)setStableReferenceLuaMessageItems:(id)arg1;
- (double)anchorAspectRatio;
- (void)setAnchorAspectRatio:(double)arg1;
- (id)lastIncomingGiftSender;
- (void)setLastIncomingGiftSender:(id)arg1;
- (id)recentIncomingGiftSenders;
- (void)setRecentIncomingGiftSenders:(id)arg1;
- (id)weVisionLuaRenderer;
- (void)setWeVisionLuaRenderer:(id)arg1;
- (void).cxx_destruct;
@end
