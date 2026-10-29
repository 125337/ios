@interface SWMidasAPI : NSObject
{
    long long currentProcess; // +0x8
    long long currentEnvrionment; // +0x10
    long long currentLocale; // +0x18
    SWMidasUser * currentUser; // +0x20
     $__lazy_storage_$_restoreHelper; // +0x28
}
+ (void)setRuntimeDelegateWithDelegate:(id)arg1;
+ (void)getSubscriptionInfoWithOnlyACAItems:(BOOL)arg1 skuFilterInfo:(id)arg2 completion:(id /* block */)arg3;
+ (void)getSubscriptionProductStatusWithSubscriptionProductIDs:(id)arg1 usingStoreKit2:(BOOL)arg2 shouldUpdateReceipt:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)getPromotionalOfferEligibleInfoUsingStoreKit2:(BOOL)arg1 shouldUpdateReceipt:(BOOL)arg2 completion:(id /* block */)arg3;
+ (id)availableWindowScene;
+ (void)setAvailableWindowScene:(id)arg1;
+ (void)showDowngradeManageSubscriptionPageWithCompletion:(id /* block */)arg1;
+ (void)showManageSubscriptionPageWithShouldDowngrade:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)showRefundPageWithTransactionID:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)bindingPaymentMethodWithPinningID:(id)arg1 completion:(id /* block */)arg2;
+ (void)queryAppleProductInfosInObjCWithAppleProductIDs:(id)arg1 useMemoryCached:(BOOL)arg2 usingStoreKit2Above15:(BOOL)arg3 shouldQueryIntroOfferQualification:(BOOL)arg4 completion:(id /* block */)arg5;
+ (id)queryAppleProductInfosInMemoryWithProductIDs:(id)arg1;
+ (BOOL)canMakePayments;
+ (id)sdkVersion;
+ (id)currentTopViewController;
+ (void)setCurrentTopViewController:(id)arg1;
+ (void)clearMemory;
+ (void)setCustomLoadingWithLoading:(id)arg1;
+ (void)setIndependentDeploymentInfoWithInfo:(id)arg1;
+ (void)setKVStorageContainerWithContainer:(id)arg1;
+ (void)setDisplayMode:(long long)arg1;
- (void)restoreWithCompletion:(id /* block */)arg1;
- (BOOL)reprovideManuallyWithShouldFinishTransactionWhenReprovideFail:(BOOL)arg1;
- (void)purchaseInObjCWithContent:(id)arg1 forUser:(id)arg2 with:(id)arg3 completion:(id /* block */)arg4;
- (long long)currentProcess;
- (void)setCurrentProcess:(long long)arg1;
- (long long)currentEnvrionment;
- (void)setCurrentEnvrionment:(long long)arg1;
- (long long)currentLocale;
- (void)setCurrentLocale:(long long)arg1;
- (id)currentUser;
- (void)setCurrentUser:(id)arg1;
- (id)initWithUser:(id)arg1 process:(long long)arg2 environment:(long long)arg3 locale:(long long)arg4 reprovideDelegate:(id)arg5 usingStoreKit2Above15:(BOOL)arg6;
- (id)getStorefrontCountryCodeWithTimeout:(long long)arg1;
- (void)setPromotedIAPCallbackWithCallback:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
@end
