@interface WAJSEventHandler_addPaymentPassFinish : WAJSEventHandler_BaseEvent <WCPayPassKitFacadeDelegate>
{
    WCPayPassKitFacade * _passKitFacade; // +0x8
}
- (BOOL)isCalledByLiteApp;
- (void)endWithFailOrOkForLiteApp:(id)arg1;
- (id)passKitFacade;
- (void)handleJSEvent:(id)arg1;
- (void)onPaymentPassViewControllerFinishPayment:(id)arg1;
- (void)setPassKitFacade:(id)arg1;
- (void).cxx_destruct;
@end
