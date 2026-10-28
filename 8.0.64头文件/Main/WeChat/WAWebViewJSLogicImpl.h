@interface WAWebViewJSLogicImpl : NSObject <WAJSEventHandlerContextDelegate>
{
    UIView<YYWebViewInterface> * _webView; // +0x8
    id <WAWebViewJSLogicDelegate> _delegate; // +0x10
    NSString * _curRandomUUID; // +0x18
    NSString * _curContextUUID; // +0x20
    BOOL _isUseMd5ForJSAPI; // +0x28
    BOOL _directInvokeJs; // +0x29
    BOOL _directInvokeOc; // +0x2a
    NSMutableSet * _lstBaseEvents; // +0x30
}
- (id)init;
- (void)dealloc;
- (id)getWebViewLaunchConfig;
- (id)getExtJSModels;
- (id)extJSBeforeWebViewPublib;
- (id)extJSOnTarget:(unsigned long long)arg1 atTiming:(unsigned long long)arg2;
- (id)getPubResWebViewSDKContentString;
- (id)getExtJSBeforeWebViewPublib;
- (id)getWebviewPreInjectJSStr:(BOOL)arg1;
- (unsigned int)currentPreloadMoment;
- (void)tryInjectDebugConsole;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)syncSendEventToJSBridge:(id)arg1 params:(id)arg2 eventId:(unsigned int)arg3 completionBlock:(id /* block */)arg4;
- (id)sha1:(id)arg1;
- (void)handleJSApiPostMessage:(id)arg1 forWebView:(id)arg2;
- (id)getPermissionResultWithJSAPI:(id)arg1 withAppId:(id)arg2 byTempPermission:(id)arg3;
- (BOOL)checkRunModeOnWebview:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 permissionAppID:(id)arg2 model:(id)arg3 handler:(id /* block */)arg4 failHandler:(id /* block */)arg5 transferHandler:(id /* block */)arg6;
- (id)fetchPublicResLogic;
- (id)getAppId;
- (id)getWAContact;
- (void)sendResultBeforeEnd:(id)arg1 resultType:(long long)arg2 errorMessage:(id)arg3;
- (id)getParentViewController;
- (id)_getWAWebViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (BOOL)isParentViewControllerDidAppear:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (BOOL)isDebugAndVConsoleOpen;
- (BOOL)isIgnoreRemoteCheckDomain;
- (id)getWxaExternalInfo;
- (BOOL)isService;
- (BOOL)isAgentMode;
- (unsigned int)getCurTaskRunningState;
- (id)getCurPubResLogic;
- (unsigned int)getAppType;
- (id)getInstanceId;
- (BOOL)canInjectFullWxConfig;
- (id)getEventHandler:(id)arg1;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3;
- (void)performResult:(id)arg1 handler:(id)arg2 callid:(unsigned int)arg3;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)printConsoleLog:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (BOOL)directInvokeJs;
- (BOOL)directInvokeOc;
- (id)lstBaseEvents;
- (void)setLstBaseEvents:(id)arg1;
- (void).cxx_destruct;
@end
