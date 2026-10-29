@interface _TtC6WeChat20MagicAgentRuntimeBiz : _TtC6WeChat15MagicSclBaseBiz <WAPermissionUserAuthImplDelegate>
{
     mbCommonAdapter; // +0xa8
     mbVConsoleHelper; // +0xb0
     pkgMgr; // +0xb8
     userAuthImpl; // +0xc0
     networkStatusObserver; // +0xc8
     tcpUdpRegistry; // +0xd0
     pendingAttachState; // +0xd8
     runtimeBindingLock; // +0xe0
     _runtimeBinding; // +0xe8
     contextBindingLock; // +0xf0
     _contextId2AppId; // +0xf8
     frameSetId2View; // +0x100
     frameSetViewMapping; // +0x108
     needPixelBufferMap; // +0x110
     frameSetId2ContainerId; // +0x118
     $__lazy_storage_$_pixelBufferPlugin; // +0x120
    void * frameSetRootId; // +0x128
    void * vConsoleDelegate; // +0x138
    void * upstreamMessageHandler; // +0x140
    void * onBizReadyHandler; // +0x150
    void * onFrameSetViewCreatedHandler; // +0x160
    void * onFrameSetViewDestroyedHandler; // +0x170
    void * onPresentCardInHalfScreenHandler; // +0x180
    void * onDismissHalfScreenCardHandler; // +0x190
    void * onNotifyCardRenderHandler; // +0x1a0
    void * onRuntimeAttachedHandler; // +0x1b0
    void * onRuntimeDetachedHandler; // +0x1c0
     jsapiContextImpl; // +0x1d0
     bizStartTsMs; // +0x1d8
    void * onBizLaunchFailedHandler; // +0x1e0
     _contextId2EnvVersion; // +0x1f0
}
- (void)bindContextIds:(id)arg1 toAppId:(id)arg2;
- (void)unbindContextId:(unsigned int)arg1;
- (void)unbindContextIds:(id)arg1;
- (void)unbindAllContextIdsForAppId:(id)arg1;
- (id)appIdForContextId:(unsigned int)arg1;
- (unsigned long long)getRuntimeBindingCount;
- (id)externalViewDelegate;
- (void)setNeedPixelBuffer:(BOOL)arg1 forContainerId:(unsigned int)arg2;
- (BOOL)needPixelBufferForContainerId:(unsigned int)arg1;
- (BOOL)shouldUsePixelBufferForCanvasId:(unsigned int)arg1;
- (id)frameSetRootId;
- (void)setFrameSetRootId:(id)arg1;
- (id)vConsoleDelegate;
- (void)setVConsoleDelegate:(id)arg1;
- (id /* block */)upstreamMessageHandler;
- (void)setUpstreamMessageHandler:(id /* block */)arg1;
- (id /* block */)onBizReadyHandler;
- (void)setOnBizReadyHandler:(id /* block */)arg1;
- (id /* block */)onFrameSetViewCreatedHandler;
- (void)setOnFrameSetViewCreatedHandler:(id /* block */)arg1;
- (id /* block */)onFrameSetViewDestroyedHandler;
- (void)setOnFrameSetViewDestroyedHandler:(id /* block */)arg1;
- (id /* block */)onPresentCardInHalfScreenHandler;
- (void)setOnPresentCardInHalfScreenHandler:(id /* block */)arg1;
- (id /* block */)onDismissHalfScreenCardHandler;
- (void)setOnDismissHalfScreenCardHandler:(id /* block */)arg1;
- (id /* block */)onNotifyCardRenderHandler;
- (void)setOnNotifyCardRenderHandler:(id /* block */)arg1;
- (id /* block */)onRuntimeAttachedHandler;
- (void)setOnRuntimeAttachedHandler:(id /* block */)arg1;
- (id /* block */)onRuntimeDetachedHandler;
- (void)setOnRuntimeDetachedHandler:(id /* block */)arg1;
- (BOOL)isMainScriptInjected;
- (void)switchVConsole:(BOOL)arg1;
- (void)setVConsoleContainerView:(id)arg1;
- (id)getMagicBrushBiz;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)onMainScriptInjected:(id)arg1;
- (void)destroy;
- (long long)addCustomViewWithView:(id)arg1;
- (void)mappingFrameSetId:(id)arg1 view:(id)arg2;
- (void)mappingFrameSetIdToContainerId:(id)arg1 containerId:(unsigned int)arg2;
- (void)setFrameSetView:(id)arg1 forContainerId:(unsigned int)arg2;
- (id)getFrameSetViewForContainerId:(unsigned int)arg1;
- (void)removeFrameSetViewForContainerId:(unsigned int)arg1;
- (void)dispatchDownstreamMessageWithMethod:(id)arg1 params:(id)arg2 sessionId:(id)arg3 agentSource:(id)arg4 clientSessionId:(id)arg5;
- (void)detachRuntimeWithAppId:(id)arg1 envVersion:(id)arg2 contextIds:(id)arg3;
- (id)getRuntimeForAppId:(id)arg1;
- (BOOL)hasRuntimeForAppId:(id)arg1;
- (id)getAllRuntimes;
- (id)getParentViewController;
- (id)getAppId;
- (void)userAuthOKWithJSAPI:(id)arg1 handler:(id /* block */)arg2 scene:(unsigned long long)arg3;
- (void)userAuthFailWithJSAPI:(id)arg1 failHandler:(id /* block */)arg2 errMsg:(id)arg3 errNo:(unsigned int)arg4 scene:(unsigned long long)arg5;
- (void)onUserTransferAuthDidCompeleteWithJSAPIName:(id)arg1 transferHandler:(id /* block */)arg2 result:(id)arg3 scene:(unsigned long long)arg4;
- (void)removeCustomViewWithViewId:(long long)arg1;
- (id /* block */)onBizLaunchFailedHandler;
- (void)setOnBizLaunchFailedHandler:(id /* block */)arg1;
- (void)bindContextIds:(id)arg1 toAppId:(id)arg2 envVersion:(id)arg3;
- (id)envVersionForContextId:(unsigned int)arg1;
- (unsigned long long)appVersionForContextId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
