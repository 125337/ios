@interface WebviewJSEventHandler_SimAuth : WebviewJSEventHandlerBase
{
    WCAccountGatewayMobileHandler * _mobileHandler; // +0x8
    NSString * _business; // +0x10
    JSEvent * _jsEvent; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)getMaskNumber:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)getPureNumber:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)mobileHandler;
- (void)setMobileHandler:(id)arg1;
- (id)business;
- (void)setBusiness:(id)arg1;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (void).cxx_destruct;
@end
