@interface WCPayChangeOfflinePayFeeLimitLogic : WCPayControlLogic <WCPayChangeOfflinePayLimitFeeViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate>
{
    int m_enWCPayChangeOfflinePayFeeLimitLogicScene; // +0x38
}
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)EndChangeOfflinePayFeeLimit;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerBack;
- (void)OnWCPayChangeOfflinePayLimitFeeViewControllerChangeToLimit:(long long)arg1;
- (void)OnChangeOfflinePayLimit:(id)arg1 Error:(id)arg2;
- (int)m_enWCPayChangeOfflinePayFeeLimitLogicScene;
- (void)setM_enWCPayChangeOfflinePayFeeLimitLogicScene:(int)arg1;
@end
