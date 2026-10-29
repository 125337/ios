@interface MBEventHandler_weappJSAPIBridgeSync : MBEventHandlerBaseSync <WAJSEventHandlerContextDelegate>
{
    NSString * _registeredApiName; // +0x8
    unsigned long long _registeredOptions; // +0x10
    NSDictionary * _syncResult; // +0x18
}
- (id)initWithApiName:(id)arg1 options:(unsigned long long)arg2;
- (id)apiName;
- (BOOL)isSync;
- (id)invoke:(id)arg1;
- (id)invokeBridgeJSApi:(id)arg1;
- (id)doInvoke:(id)arg1;
- (id)bridgeDelegate;
- (id)jsapiContext;
- (id)getInvokeFromAppid;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)setCurrentInvokeContextId:(unsigned int)arg1;
- (void)clearCurrentInvokeContextId;
- (void)sendEventToInvokeEnv:(id)arg1 dicParams:(id)arg2;
- (id)getAppId;
- (id)getWAContact;
- (id)getParentViewController;
- (unsigned long long)getEnvironmentType;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (id)sourceOpenSDKAppID;
- (id)getEventHandler:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (unsigned int)getAppType;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (BOOL)isDebugAndVConsoleOpen;
- (BOOL)isIgnoreRemoteCheckDomain;
- (BOOL)isService;
- (BOOL)isHeadless;
- (BOOL)isAgentMode;
- (BOOL)isAgentRuntime;
- (id)agentLocationMock;
- (id)getWxaExternalInfo;
- (id)registeredApiName;
- (void)setRegisteredApiName:(id)arg1;
- (unsigned long long)registeredOptions;
- (void)setRegisteredOptions:(unsigned long long)arg1;
- (id)syncResult;
- (void)setSyncResult:(id)arg1;
- (void).cxx_destruct;
@end
