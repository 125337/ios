@interface WebviewJSEventHandler_phoneBindCardVerifySms : WebviewJSEventHandlerBase <WXPLiteAppModuleEventCallback>
{
    JSEvent * _jsEvent; // +0x8
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onEventResponse:(id)arg1 event:(id)arg2 data:(id)arg3 callbackId:(long long)arg4;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end
