@interface WCPayOfflinePayUnfreezeLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate>
- (void)startLogic;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)OnUnfreezeOfflinePay:(id)arg1;
@end

