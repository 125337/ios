@interface MBEventHandler_weappJSAPIBridgeASync : MBEventHandlerBaseAsync <WAJSEventHandlerContextDelegate>
{
    WAJSEventHandler_BaseEvent * _bridgeWeAppHandler; // +0x8
}
+ (id)handlerWithApiName:(id)arg1 options:(unsigned long long)arg2;
- (id)registeredApiName;
- (unsigned long long)registeredOptions;
- (id)apiName;
- (BOOL)invokeInMainThread;
- (BOOL)fixedPermission;
- (void)invoke:(id)arg1;
- (id)bridgeDelegate;
- (id)jsapiContext;
- (id)getInvokeFromAppid;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)sendEventToInvokeEnv:(id)arg1 dicParams:(id)arg2;
- (id)getAppId;
- (unsigned int)getAppType;
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
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (BOOL)isDebugAndVConsoleOpen;
- (BOOL)isIgnoreRemoteCheckDomain;
- (BOOL)isService;
- (id)getEventHandler:(id)arg1;
- (id)sourceOpenSDKAppID;
- (unsigned int)getCurTaskRunningState;
- (BOOL)isHeadless;
- (BOOL)isAgentMode;
- (BOOL)isAgentRuntime;
- (id)agentLocationMock;
- (id)getWxaExternalInfo;
- (void)setCurrentInvokeContextId:(unsigned int)arg1;
- (void)clearCurrentInvokeContextId;
- (id)bridgeWeAppHandler;
- (void)setBridgeWeAppHandler:(id)arg1;
- (void).cxx_destruct;
@end
