@interface WAPermissionUserAuthTask : NSObject <WAAuthorizeDelegate>
{
    unsigned int _debugModeType; // +0x8
    WxaExternalInfo * _externalInfo; // +0x10
    NSString * _appID; // +0x18
    NSString * _permissionAppId; // +0x20
    NSString * _jsapi; // +0x28
    id /* block */ _handler; // +0x30
    id /* block */ _failHandler; // +0x38
    unsigned long long _scene; // +0x40
    WAUserAuthorizeLogic * _authorizeLogic; // +0x48
    NSString * _scope; // +0x50
    NSString * _scopeDescription; // +0x58
    BOOL _isAllowAuth; // +0x60
    id <WAPermissionUserAuthTaskDelegate> _delegate; // +0x68
    WATransferJSAPIRuntimeModel * _jsapiModel; // +0x70
    id /* block */ _transferHandler; // +0x78
    id <IWATransferProxyImplProtocol> _transferBridge; // +0x80
}
- (id)initWithDebugModeType:(unsigned int)arg1 externalInfo:(id)arg2;
- (id)getAppID;
- (id)getJsapi;
- (void)setUserAuthDataWithAPPID:(id)arg1 permissionAppID:(id)arg2 jsapi:(id)arg3 model:(id)arg4 handler:(id /* block */)arg5 failHandler:(id /* block */)arg6 transferHandler:(id /* block */)arg7 scene:(unsigned long long)arg8;
- (void)runUserAuth;
- (void)onRequestAuthorizeFail:(id)arg1 errNo:(unsigned int)arg2;
- (void)onRequestAuthorizeOK;
- (void)onAuthorizeNeedConfirm:(id)arg1 cgiResponse:(id)arg2;
- (void)onAuthorizeConfirmEnd:(BOOL)arg1 response:(id)arg2;
- (void)onAuthorizeConfirmAccept:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmInconsistent:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmDeny:(id)arg1 resultInfo:(id)arg2;
- (id)getCurrentViewController;
- (id)getAuthInfo;
- (void)saveAuthInfo:(id)arg1;
- (void)saveAuthInfoWithStatus:(unsigned long long)arg1;
- (void)authOK;
- (void)authFailWithMessage:(id)arg1 errNo:(unsigned int)arg2;
- (void)taskComplete;
- (void)authFailAndCompleteTaskWithMessage:(id)arg1 errNo:(unsigned int)arg2;
- (void)transferAuthCompelteWithResult:(id)arg1;
- (void)continueShowSheet;
- (void)showAuthorize;
- (void)showAuthSheet;
- (id)transferBridge;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jsapiModel;
- (void)setJsapiModel:(id)arg1;
- (id /* block */)transferHandler;
- (void)setTransferHandler:(id /* block */)arg1;
- (void)setTransferBridge:(id)arg1;
- (void).cxx_destruct;
@end

