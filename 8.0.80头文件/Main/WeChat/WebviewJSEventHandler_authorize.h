@interface WebviewJSEventHandler_authorize : WebviewJSEventHandlerBase <PBMessageObserverDelegate, JSApiScopeConfirmWindowDelegate>
{
    BOOL _isRunning; // +0x8
    NSString * _appID; // +0x10
    JSApiScopeConfirmWindow * _confirmWindow; // +0x18
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)endErrorWithMessage:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endOK;
- (void)endCancel;
- (void)authorizeRequestWithAppID:(id)arg1 scope:(id)arg2;
- (void)onAuthorizeResponse:(id)arg1;
- (void)confirmRequestWithAppID:(id)arg1 scope:(id)arg2;
- (void)onConfirmResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startLoading:(id)arg1;
- (void)stopLoading;
- (void)continueShowConfirmViewWithAppName:(id)arg1 appIconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)closeConfirmWindow;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)onConfirmViewCancel;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onScopeWindowCancel:(id)arg1;
- (void).cxx_destruct;
@end
