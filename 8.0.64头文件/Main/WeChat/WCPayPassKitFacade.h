@interface WCPayPassKitFacade : NSObject <PKAddPaymentPassViewControllerDelegate>
{
    id <WCPayPassKitFacadeDelegate> _delegate; // +0x8
    NSString * _m_panid; // +0x10
    id /* block */ _completionHandler; // +0x18
}
+ (BOOL)canAddSecureElement:(id)arg1;
+ (id)GenCurrentDeviceInfo;
- (id)getAllLocalSimplePasses:(BOOL)arg1;
- (long long)getNFCCardTransitBalance:(id)arg1;
- (id)getPKPass:(id)arg1;
- (id)allPasses;
- (BOOL)isPassLibraryAvailable;
- (void)checkIssueCardPermissionWithSpecificCardType:(id)arg1 appId:(id)arg2 iOSVersion:(double)arg3;
- (void)presentAddPaymentPassViewController:(unsigned int)arg1 title:(id)arg2 cardHolderName:(id)arg3 primaryAccountSuffix:(id)arg4 encryptScheme:(id)arg5 showContent:(id)arg6 panid:(id)arg7 presentViewController:(id)arg8;
- (void)addPaymentPassViewController:(id)arg1 generateRequestWithCertificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)finishAddPaymentPassViewController:(id)arg1 encryptedPassData:(id)arg2 ephemeralPublicKey:(id)arg3 activationData:(id)arg4;
- (void)addPaymentPassViewController:(id)arg1 didFinishAddingPaymentPass:(id)arg2 error:(id)arg3;
- (void)removeSecureElementPass:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_panid;
- (void)setM_panid:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
