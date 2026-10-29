@interface WCPayCreditPayIncreaseLimitLogic : WCPayControlLogic <WCPayCreditPayAnswerQuestionViewControllerDelegate, WCPayCreditPayIncreaseLimitSucViewControllerDelegate, WCPayPayPwdViewControllerDelegate>
{
    BOOL m_bNeedQueryCreditInfo; // +0x38
}
- (id)initWithData:(id)arg1;
- (void)startLogic;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)WCPayCreditPayAnswerQuestionViewControllerBack;
- (void)WCPayCreditPayAnswerQuestionViewControllerNext:(id)arg1;
- (void)WCPayCreditPayIncreaseLimitSucViewControllerBack;
- (void)OnQueryWXCreditQuestion:(id)arg1 Error:(id)arg2;
- (void)OnCommitWXCreditAnswer:(id)arg1 Error:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned int)arg3;
- (void)OnQueryWXCreditCardInfo:(id)arg1 Error:(id)arg2;
- (BOOL)m_bNeedQueryCreditInfo;
- (void)setM_bNeedQueryCreditInfo:(BOOL)arg1;
@end

