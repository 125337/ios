@interface WebviewJSEventHandler_requestHKCashier : WebviewJSEventHandlerBase <WCPayJSRequestHKCashierLogicDelegate>
{
    JSEvent * _jsEvent; // +0x8
    WCPayJSRequestHKCashierLogic * _requestHKCashierLogic; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onRequestHKCashierSucc;
- (void)onRequestHKCashierFail;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)requestHKCashierLogic;
- (void)setRequestHKCashierLogic:(id)arg1;
- (void).cxx_destruct;
@end

