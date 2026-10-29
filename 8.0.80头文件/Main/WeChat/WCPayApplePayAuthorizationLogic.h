@interface WCPayApplePayAuthorizationLogic : NSObject <PKPaymentAuthorizationViewControllerDelegate>
{
    id <WCPayApplePayAuthorizationLogicDelegate> _m_delegate; // +0x8
    NSString * _transactionId; // +0x10
    LiteAppDynamicModuleCallback * _callBack; // +0x18
    UIViewController * _vc; // +0x20
    NSDictionary * _option; // +0x28
    UIViewController * _paymentViewController; // +0x30
    id /* block */ _paymentCompletionHandler; // +0x38
}
- (void)startRequestApplePay:(id)arg1 currentVC:(id)arg2 resultCallback:(id)arg3;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;
- (id)paymentTokenDictFromPKPayment:(id)arg1;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)finishRequestApplePay:(id)arg1 resultCallback:(id)arg2;
- (id)getPaymentRequestFromMerchantInfo:(id)arg1;
- (id)getPaymentRequestFromParameters:(id)arg1;
- (id)paymentSummaryItemsFromArray:(id)arg1;
- (id)paymentSummaryItemsFromPaymentSummaryItemArray:(id)arg1;
- (unsigned long long)merchantCapabilityFromArray:(id)arg1;
- (id)paymentNetworksFromArray:(id)arg1;
- (void)startRequestApplePay:(id)arg1 currentVC:(id)arg2;
- (void)finishRequestApplePay:(id)arg1 ret:(unsigned int)arg2;
- (void)notifyOfflineOpenForApplePay:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)transactionId;
- (void)setTransactionId:(id)arg1;
- (id)callBack;
- (void)setCallBack:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)option;
- (void)setOption:(id)arg1;
- (id)paymentViewController;
- (void)setPaymentViewController:(id)arg1;
- (id /* block */)paymentCompletionHandler;
- (void)setPaymentCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
