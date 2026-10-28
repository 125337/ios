@interface _TtC6WeChat12WCCoinIAPMgr : MMUserService <MMServiceProtocol>
{
     api; // +0x8
     midasDelegateInstance; // +0x10
     prefetchProductIds; // +0x18
}
+ (void)bindingPaymentMethodWithPinningID:(NSString *)arg1 completionHandler:(id /* block */)arg2;
- (id)getSDKVersion;
- (void)preloadWithCompletionHandler:(id /* block */)arg1;
- (void)getProductInfoWithProductIds:(NSSet *)arg1 completionHandler:(id /* block */)arg2;
- (void)prefetchProductWithCompletionHandler:(id /* block */)arg1;
- (id)currencyCode;
- (id)getProductInfo:(id)arg1;
- (void)getSubscriptionProductStatusWithProductId:(NSString *)arg1 completionHandler:(id /* block */)arg2;
- (void)purchaseWithInfo:(PrepareWecoinRechargeResponse *)arg1 completionHandler:(id /* block */)arg2;
- (void)purchaseWithSubscriptionResp:(PrepareWecoinSubscriptionResponse *)arg1 completionHandler:(id /* block */)arg2;
- (void)purchaseWithUrlParams:(NSString *)arg1 sdkInfo:(MidasSdkInfo *)arg2 completionHandler:(id /* block */)arg3;
- (void)onServiceInit;
- (id)init;
- (void).cxx_destruct;
@end
