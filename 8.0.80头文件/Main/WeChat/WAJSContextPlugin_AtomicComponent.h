@interface WAJSContextPlugin_AtomicComponent : WAJSContextPluginBase <WAAgentFrameSetViewObserver, MagicSclFrameSetViewDelegate>
{
    BOOL _activated; // +0x8
    BOOL _handleCreatedByPreload; // +0x9
    NSMutableDictionary * _viewIdToContainerId; // +0x10
    NSMutableDictionary * _containerIdToViewId; // +0x18
    NSMutableDictionary * _pendingFrameSetCallbacks; // +0x20
    NSMutableArray * _pendingInserts; // +0x28
    NSMapTable * _frameSetViewToViewId; // +0x30
    NSMapTable * _containerIdToWebViewController; // +0x38
    WAAgentSceneInstanceHandle * _sceneHandle; // +0x40
    NSMutableDictionary * _containerIdToRuntimeAppId; // +0x48
    NSMutableDictionary * _containerIdsByRuntimeAppId; // +0x50
}
- (id)init;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (BOOL)isBizReady;
- (id)ensureSceneHandleCreatedByPreload:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)preloadWithCompletion:(id /* block */)arg1;
- (void)insertWithViewId:(unsigned int)arg1 parentId:(unsigned int)arg2 position:(id)arg3 zIndex:(long long)arg4 webviewController:(id)arg5 completion:(id /* block */)arg6;
- (void)insertWithViewId:(unsigned int)arg1 parentId:(unsigned int)arg2 position:(id)arg3 zIndex:(long long)arg4 runtimeAppId:(id)arg5 webviewController:(id)arg6 completion:(id /* block */)arg7;
- (void)executeInsert:(id)arg1;
- (void)removeWithViewId:(unsigned int)arg1 webviewController:(id)arg2;
- (unsigned int)viewIdForContainerId:(unsigned int)arg1;
- (BOOL)containsViewId:(unsigned int)arg1;
- (void)onFrameSetViewCreated:(id)arg1 frameId:(unsigned int)arg2 containerId:(unsigned int)arg3;
- (void)onFrameSetViewDestroyedForContainerId:(unsigned int)arg1;
- (void)onMagicSclFrameSetViewSizeChange:(id)arg1;
- (void)invalidateInsertCreatedHandleIfUnused;
- (void)flushPendingInserts;
- (void)cleanup;
- (void)setTaskRunningState:(unsigned long long)arg1;
- (BOOL)activated;
- (void)setActivated:(BOOL)arg1;
- (id)viewIdToContainerId;
- (void)setViewIdToContainerId:(id)arg1;
- (id)containerIdToViewId;
- (void)setContainerIdToViewId:(id)arg1;
- (id)pendingFrameSetCallbacks;
- (void)setPendingFrameSetCallbacks:(id)arg1;
- (id)pendingInserts;
- (void)setPendingInserts:(id)arg1;
- (id)frameSetViewToViewId;
- (void)setFrameSetViewToViewId:(id)arg1;
- (id)containerIdToWebViewController;
- (void)setContainerIdToWebViewController:(id)arg1;
- (id)sceneHandle;
- (void)setSceneHandle:(id)arg1;
- (id)containerIdToRuntimeAppId;
- (void)setContainerIdToRuntimeAppId:(id)arg1;
- (id)containerIdsByRuntimeAppId;
- (void)setContainerIdsByRuntimeAppId:(id)arg1;
- (BOOL)handleCreatedByPreload;
- (void)setHandleCreatedByPreload:(BOOL)arg1;
- (void).cxx_destruct;
@end
