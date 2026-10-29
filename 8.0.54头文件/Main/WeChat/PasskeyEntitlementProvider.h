@interface PasskeyEntitlementProvider : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>
{
    id <MMUIViewControllerDelegate> _vcDelegate; // +0x8
    id /* block */ _finalBlock; // +0x10
}
- (void)signUpPasskeyFromUserID:(id)arg1 userName:(id)arg2 completion:(id /* block */)arg3;
- (void)_iOS16_signUpPasskeyFromUserID:(id)arg1 userName:(id)arg2 completion:(id /* block */)arg3;
- (void)signInFromChallenge:(id)arg1 preferImmediatelyAvailableCredentials:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)_iOS16_signInFromChallenge:(id)arg1 preferImmediatelyAvailableCredentials:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (id)presentationAnchorForAuthorizationController:(id)arg1;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (id /* block */)finalBlock;
- (void)setFinalBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

