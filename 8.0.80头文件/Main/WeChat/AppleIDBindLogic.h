@interface AppleIDBindLogic : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding>
{
    id <AppleIDBindLogicDelegate> _delegate; // +0x8
    ASAuthorizationAppleIDCredential * _appleIDCredential; // +0x10
}
+ (BOOL)isAppleIDBound;
- (void)requestAuthorizeFromApple;
- (BOOL)authorizedFromAppleSucceed;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (id)presentationAnchorForAuthorizationController:(id)arg1;
- (void)bindAppleID;
- (void)unbindAppleID;
- (void)updateAppleIDBindStatusInSetting:(BOOL)arg1;
- (void)appleIDAuthorize;
- (void)appleIDAuthorizeWithIDCRedirectCount:(unsigned long long)arg1;
- (void)callAppleIDAuthorizeFailDelegateWithError:(id)arg1 andResponse:(id)arg2;
- (id)generateAppleIDErrorFromError:(id)arg1 andResponse:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appleIDCredential;
- (void)setAppleIDCredential:(id)arg1;
- (void).cxx_destruct;
@end
