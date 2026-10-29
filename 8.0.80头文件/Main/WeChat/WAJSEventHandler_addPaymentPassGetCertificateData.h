@interface WAJSEventHandler_addPaymentPassGetCertificateData : WAJSEventHandler_BaseEvent <WCPayPassKitFacadeDelegate>
{
    WCPayPassKitFacade * _passKitFacade; // +0x8
}
- (BOOL)isCalledByLiteApp;
- (void)endWithFailOrOkForLiteApp:(id)arg1;
- (id)passKitFacade;
- (void)handleJSEvent:(id)arg1;
- (void)onPaymentPassViewControllerGenerateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3;
- (void)onPaymentPassViewControllerFinishPayment:(id)arg1;
- (void)setPassKitFacade:(id)arg1;
- (void).cxx_destruct;
@end
