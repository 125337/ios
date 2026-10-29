@interface WebviewJSEventHandler_login : WebviewJSEventHandlerBase <PBMessageObserverDelegate, JSApiScopeConfirmWindowDelegate>
{
    BOOL _isRunning; // +0x8
    NSString * _appID; // +0x10
    NSString * _state; // +0x18
    JSApiScopeConfirmWindow * _confirmWindow; // +0x20
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)endErrorWithMessage:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endOKWithData:(id)arg1;
- (void)endCancel;
- (void)loginRequestWithAppID:(id)arg1 scope:(id)arg2 state:(id)arg3 url:(id)arg4;
- (void)onLoginResponse:(id)arg1;
- (void)confirmRequestWithAppID:(id)arg1 scope:(id)arg2 state:(id)arg3;
- (void)onConfirmResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startLoading:(id)arg1;
- (void)stopLoading;
- (void)continueShowConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)closeConfirmWindow;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)onConfirmViewCancel;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onScopeWindowCancel:(id)arg1;
- (void).cxx_destruct;
@end

