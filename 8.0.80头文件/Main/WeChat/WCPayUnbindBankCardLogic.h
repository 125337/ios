@interface WCPayUnbindBankCardLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate>
{
    JSEvent * m_jsEvent; // +0x38
    NSString * _unbindCardBindSerial; // +0x40
    NSString * _unbindCardQuickSupport; // +0x48
}
- (id)initWithJSEvent:(id)arg1;
- (void)startLogic;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)OnUnBindCard:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)BackToRootView;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)stopLogic;
- (id)unbindCardBindSerial;
- (void)setUnbindCardBindSerial:(id)arg1;
- (id)unbindCardQuickSupport;
- (void)setUnbindCardQuickSupport:(id)arg1;
- (void).cxx_destruct;
@end
