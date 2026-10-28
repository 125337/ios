@interface WAJSEventHandler_removeSecureElementPass : WAJSEventHandler_BaseEvent <WCPayPassKitFacadeDelegate>
{
    WCPayPassKitFacade * _passKitFacade; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onRemoveSecureElementPass:(id)arg1 error:(id)arg2;
- (id)passKitFacade;
- (void)setPassKitFacade:(id)arg1;
- (void).cxx_destruct;
@end
