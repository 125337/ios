@interface _TtC6WeChat29MagicAgentRuntimeJsApiContext : _TtC6WeChat20MagicSclJsApiContext <_TtP6WeChat27MagicBrushFrameSetCreatable_, IMBWeAppJSApiBridgeDelegate>
{
    void * biz; // +0x20
     containerId2View; // +0x28
     pluginPoolLock; // +0x30
     appId2WeappPlugins; // +0x38
     appId2WebviewPluginPool; // +0x40
}
- (id)biz;
- (void)setBiz:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1 invokeContextId:(unsigned int)arg2;
- (id)GetWebViewPluginByName:(id)arg1 invokeContextId:(unsigned int)arg2;
- (void)cleanupPluginPoolForAppId:(id)arg1;
- (void)cleanupAllPluginPools;
- (id)weappPluginWhiteList;
- (id)pluginWhiteList;
- (BOOL)getJSApiPermission:(id)arg1 appid:(id)arg2;
- (void)createFrameSetRootWithPath:(id)arg1 query:(id)arg2 useClientClick:(BOOL)arg3;
- (void)createFrameSetWithAppid:(id)arg1 name:(id)arg2 frameId:(unsigned int)arg3 width:(float)arg4 height:(float)arg5 containerId:(unsigned int)arg6;
- (id)provideCurrentViewController;
- (id)getMagicBrushBiz;
- (id)getCoverViewContainerForParentId:(unsigned int)arg1;
- (id)extractContextNameFromInvokeContextId:(unsigned int)arg1;
- (id)appIdForInvokeContextId:(unsigned int)arg1;
- (BOOL)checkJSApiPermission:(id)arg1 appId:(id)arg2;
- (unsigned char)getJSApiPermissionRaw:(id)arg1 appId:(id)arg2;
- (void)checkJSApiUserAuthWithJsapiName:(id)arg1 appId:(id)arg2 handler:(id /* block */)arg3 failHandler:(id /* block */)arg4;
- (id)envVersionForInvokeContextId:(unsigned int)arg1;
- (unsigned long long)appVersionForInvokeContextId:(unsigned int)arg1;
- (unsigned int)getTaskRunningStateForAppId:(id)arg1;
- (BOOL)addDelayToForegroundJSAPI:(id /* block */)arg1 jsapiName:(id)arg2 appId:(id)arg3;
- (void)removeFrameSetWithName:(id)arg1 containerId:(unsigned int)arg2;
- (void)presentCardInHalfScreenWithContainerId:(unsigned int)arg1;
- (void)dismissHalfScreenCardWithContainerId:(unsigned int)arg1;
- (void)notifyCardRenderWithContainerId:(unsigned int)arg1;
- (void)setCurrentInvokeContextId:(unsigned int)arg1;
- (void)clearCurrentInvokeContextId;
- (id)getAppId;
- (id)pluginPermissionInfoForInvokeContextId:(unsigned int)arg1;
- (void)dispatchAgentPluginEvent:(id)arg1 data:(id)arg2 appId:(id)arg3 envVersion:(id)arg4;
- (id)init;
- (void).cxx_destruct;
@end
