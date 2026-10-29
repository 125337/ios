@interface WCPayCreditPayUnbindLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate>
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)confirmToUnbind;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)BackToRootView;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnUnbindCreditPay:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
@end

