@interface WAJSEventHandler_requestMallPayment : WAJSEventHandler_BaseEvent <WCPayMallRequestPaymentControlLogicDelegate>
{
    WCPayMallRequestPaymentControlLogic * _mallRequestPaymentControlLogic; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)mallPaymentLogicDidPaySucc;
- (void)mallPaymentLogicDidFailWithResult:(id)arg1;
- (id)mallRequestPaymentControlLogic;
- (void)setMallRequestPaymentControlLogic:(id)arg1;
- (void).cxx_destruct;
@end

