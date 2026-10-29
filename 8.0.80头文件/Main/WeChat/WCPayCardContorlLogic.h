@interface WCPayCardContorlLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, WCPayCardDetailViewControllerDelegate>
- (void)startLogic;
- (void)CardDetailUnbindCard:(id)arg1;
- (void)CardDetailSetMainBankCard:(id)arg1;
- (void)CardDetailExpiredUnbindCard:(id)arg1;
- (void)CardDetailRepay:(id)arg1;
- (void)CardDetailBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)BackToRootView;
- (void)OnUnBindCard:(id)arg1 Error:(id)arg2;
- (void)OnSetMainCard:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
@end
