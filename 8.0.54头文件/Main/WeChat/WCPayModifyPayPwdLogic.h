@interface WCPayModifyPayPwdLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, WCPayPayPwdViewControllerDelegate>
- (void)startLogic;
- (void)showGiveUpLogicAlert;
- (void)OnAlertGiveUpLogic;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)SetPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)BackToRootView;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnModifyWCPayPassword:(id)arg1 NewWCPayPassword:(id)arg2 Error:(id)arg3;
@end

