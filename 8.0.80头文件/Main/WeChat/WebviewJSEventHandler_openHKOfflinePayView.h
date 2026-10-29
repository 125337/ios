@interface WebviewJSEventHandler_openHKOfflinePayView : WebviewJSEventHandlerBase <WCPayJSOpenHKOfflinePayLogicDelegate>
{
    JSEvent * _jsEvent; // +0x8
    WCPayJSOpenHKOfflinePayLogic * _openHKOfflinePayLogic; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onOpenHKOfflinePaySucc;
- (void)onOpenHKOfflinePayFail;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)openHKOfflinePayLogic;
- (void)setOpenHKOfflinePayLogic:(id)arg1;
- (void).cxx_destruct;
@end
