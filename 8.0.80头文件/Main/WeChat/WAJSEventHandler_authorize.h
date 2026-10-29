@interface WAJSEventHandler_authorize : WAJSEventHandler_BaseEvent <WAAuthorizeDelegate, WAJSContextPlugin_userAccountProtocol>
{
    NSString * _appID; // +0x8
    WAUserAuthorizeLogic * _authLogic; // +0x10
    BOOL _requestInQueue; // +0x18
    BOOL _showedModal; // +0x19
    NSDictionary * _dicInputParam; // +0x20
    WADataPipePerformance * _performance; // +0x28
    WAJSContextPlugin_userAccount * _userAccountInstance; // +0x30
    WAAlertModel * _alertModel; // +0x38
    id <IWATransferProxyImplProtocol> _transferBridge; // +0x40
    NSDictionary * _jsapiParams; // +0x48
}
- (void)mainThread_runUserAccountJSEvent:(id)arg1;
- (id)getCurrentViewController;
- (void)onRequestAuthorizeFail:(id)arg1 errNo:(int)arg2;
- (void)onRequestAuthorizeOK;
- (void)onAuthorizeNeedConfirm:(id)arg1 cgiResponse:(id)arg2;
- (void)onAuthorizeConfirmEnd:(BOOL)arg1 response:(id)arg2;
- (void)onAuthorizeConfirmAccept:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeDirectPass:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmInconsistent:(id)arg1 resultInfo:(id)arg2;
- (void)onAuthorizeConfirmDeny:(id)arg1 resultInfo:(id)arg2;
- (void)onUserAccountJSEventEnd;
- (void)handleJSEvent:(id)arg1;
- (void)endWithResult:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 errNo:(int)arg2;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2 errNo:(int)arg3;
- (void)endWithTimeout;
- (void)endOK;
- (void)endCancel;
- (void)startLoading:(id)arg1;
- (void)stopLoading;
- (void)continueShowConfirmView;
- (void)showConfirmView;
- (id)transferBridge;
- (id)dicInputParam;
- (void)setDicInputParam:(id)arg1;
- (id)performance;
- (void)setPerformance:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userAccountInstance;
- (void)setUserAccountInstance:(id)arg1;
- (id)alertModel;
- (void)setAlertModel:(id)arg1;
- (void)setTransferBridge:(id)arg1;
- (id)jsapiParams;
- (void)setJsapiParams:(id)arg1;
- (BOOL)showedModal;
- (void)setShowedModal:(BOOL)arg1;
- (void).cxx_destruct;
@end
