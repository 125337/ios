@interface _TtC6WeChat26MagicWeAppCardJsApiContext : _TtC6WeChat20MagicSclJsApiContext <_TtP6WeChat27MagicBrushFrameSetCreatable_>
{
     permissionDelegate; // +0x20
    void * biz; // +0x30
}
- (id)biz;
- (void)setBiz:(id)arg1;
- (id)weappPluginWhiteList;
- (BOOL)getJSApiPermission:(id)arg1 appid:(id)arg2;
- (void)createFrameSetRootWithPath:(id)arg1 query:(id)arg2 useClientClick:(BOOL)arg3;
- (void)createFrameSetWithAppid:(id)arg1 name:(id)arg2 frameId:(unsigned int)arg3 width:(float)arg4 height:(float)arg5 containerId:(unsigned int)arg6;
- (void)removeFrameSetWithName:(id)arg1 containerId:(unsigned int)arg2;
- (void)presentCardInHalfScreenWithContainerId:(unsigned int)arg1;
- (void)dismissHalfScreenCardWithContainerId:(unsigned int)arg1;
- (void)notifyCardRenderWithContainerId:(unsigned int)arg1;
- (id)extractContextNameFromInvokeContextId:(unsigned int)arg1;
- (id)appIdForInvokeContextId:(unsigned int)arg1;
- (BOOL)checkJSApiPermission:(id)arg1 appId:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end
