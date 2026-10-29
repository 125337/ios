@interface WAJSEventHandler_BaseEvent : NSObject
{
    BOOL _useTempPermission; // +0x8
    BOOL _runInMainThread; // +0x9
    BOOL _responseUseBase64; // +0xa
    BOOL _noCallback; // +0xb
    unsigned int _callbackId; // +0xc
    unsigned int _appServiceType; // +0x10
    unsigned int _contextId; // +0x14
    unsigned int _workerId; // +0x18
    id <WAJSEventHandlerContextDelegate> _context; // +0x20
    WAWebViewController * _webviewController; // +0x28
    MMUIViewController * _contextViewController; // +0x30
    NSString * _permissionAppid; // +0x38
    id _userInfo; // +0x40
}
- (void)endWithResult:(id)arg1;
- (void)sendEventToInvokeEnv:(id)arg1 dicParams:(id)arg2;
- (void)setContext:(id)arg1;
- (id)getAppID;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (BOOL)checkIsValidPluginForPermissionAppid:(id)arg1;
- (BOOL)isArrPlugin:(id)arg1 ContainsAppid:(id)arg2;
- (id)getWxaExternalInfo;
- (BOOL)isHolderTaskKilled;
- (void)handleJSEvent:(id)arg1;
- (id)JSAPIName;
- (id)contextViewController;
- (void)listenWebViewDidAppearCallBack:(id /* block */)arg1;
- (id)getValidWebViewController;
- (id)getNavigationController;
- (void)macroEndWithErrno:(id)arg1 msg:(id)arg2 dic:(id)arg3;
- (void)macroEnd:(long long)arg1 optionalArg1:(id)arg2 optionalArg2:(id)arg3;
- (void)internalEndWithState:(long long)arg1 msg:(id)arg2 dic:(id)arg3;
- (unsigned int)callbackId;
- (void)setCallbackId:(unsigned int)arg1;
- (id)context;
- (BOOL)useTempPermission;
- (void)setUseTempPermission:(BOOL)arg1;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (void)setContextViewController:(id)arg1;
- (BOOL)runInMainThread;
- (void)setRunInMainThread:(BOOL)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)contextId;
- (void)setContextId:(unsigned int)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (id)permissionAppid;
- (void)setPermissionAppid:(id)arg1;
- (BOOL)responseUseBase64;
- (void)setResponseUseBase64:(BOOL)arg1;
- (BOOL)noCallback;
- (void)setNoCallback:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

