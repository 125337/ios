@interface WebviewJSEventHandler_openOfflinePayView : WebviewJSEventHandlerBase <WCPayJSOpenOfflinePayControlLogicDelegate>
{
    JSEvent * _jsEvent; // +0x8
    WCPayJSOpenOfflinePayControlLogic * _openOfflinePayLogic; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)succToOpenOfflinePayLogic;
- (void)failToStartOpenOfflinePayLogic;
- (void)returnToOfflinePayView;
- (id)jsEvent;
- (void)setJsEvent:(id)arg1;
- (id)openOfflinePayLogic;
- (void)setOpenOfflinePayLogic:(id)arg1;
- (void).cxx_destruct;
@end
