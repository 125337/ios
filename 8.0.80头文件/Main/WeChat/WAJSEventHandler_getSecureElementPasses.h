@interface WAJSEventHandler_getSecureElementPasses : WAJSEventHandler_BaseEvent <WCPayNFCCardFilterCardListCgiDelegate>
{
    WCPayPassKitFacade * _passKitFacade; // +0x8
}
- (BOOL)isCalledByLiteApp;
- (void)endWithFailOrOkForLiteApp:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)onWCPayNFCCardFilterCardListCgiResponseOK:(id)arg1 result:(id)arg2;
- (void)onWCPayNFCCardFilterCardListCgiResponseError:(id)arg1 errorMsg:(id)arg2 errorCode:(unsigned int)arg3;
- (id)passKitFacade;
- (void)setPassKitFacade:(id)arg1;
- (void).cxx_destruct;
@end
