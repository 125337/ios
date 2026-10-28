@interface WAJSEventHandler_getSecureElementPasses : WAJSEventHandler_BaseEvent
{
    WCPayPassKitFacade * _passKitFacade; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)passKitFacade;
- (void)setPassKitFacade:(id)arg1;
- (void).cxx_destruct;
@end
