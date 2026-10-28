@interface MBEventHandler_weappJSAPIBridgeASync : MBEventHandlerBaseAsync <WAJSEventHandlerContextDelegate>
{
    WAJSEventHandler_BaseEvent * _bridgeWeAppHandler; // +0x8
}
- (id)weappJSApiClassName;
- (void)invoke:(id)arg1;
- (id)jsapiContext;
- (BOOL)fixedPermission;
- (id)getInvokeFromAppid;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)sendEventToInvokeEnv:(id)arg1 dicParams:(id)arg2;
- (id)getAppId;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (id)getWAContact;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (id)getWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (BOOL)isDebugAndVConsoleOpen;
- (BOOL)isIgnoreRemoteCheckDomain;
- (BOOL)isService;
- (id)getEventHandler:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)bridgeWeAppHandler;
- (void)setBridgeWeAppHandler:(id)arg1;
- (void).cxx_destruct;
@end
