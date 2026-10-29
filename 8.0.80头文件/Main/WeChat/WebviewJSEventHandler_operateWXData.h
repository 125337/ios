@interface WebviewJSEventHandler_operateWXData : WebviewJSEventHandlerBase <PBMessageObserverDelegate, JSApiScopeConfirmWindowDelegate>
{
    BOOL _isRunning; // +0x8
    NSString * _appID; // +0x10
    NSData * _data; // +0x18
    JSApiScopeConfirmWindow * _confirmWindow; // +0x20
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)endErrorWithMessage:(id)arg1;
- (void)endErrorWithMessage:(id)arg1 code:(int)arg2;
- (void)endOKWithData:(id)arg1;
- (void)endCancel;
- (void)requestDataWithAppID:(id)arg1 data:(id)arg2;
- (void)onResponseData:(id)arg1;
- (void)requestConfirmWithAppID:(id)arg1 data:(id)arg2 scope:(id)arg3;
- (void)onResponseConfirm:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)continueShowConfirmViewWithAppName:(id)arg1 iconURL:(id)arg2 scopeInfoList:(id)arg3;
- (void)closeConfirmWindow;
- (void)onConfirmViewOKWithScope:(id)arg1;
- (void)onConfirmViewCancel;
- (void)onScopeWindowConfirm:(id)arg1 withScope:(id)arg2;
- (void)onScopeWindowCancel:(id)arg1;
- (void).cxx_destruct;
@end
