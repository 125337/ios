@interface WebviewJSEventHandler_editAddress : WebviewJSEventHandlerBase <IWebviewAskAuthorizationLogicExt>
{
    JSEvent * _jsEvent; // +0x8
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)startEditAddress;
- (void).cxx_destruct;
@end
