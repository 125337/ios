@interface FBSDKLoginManager : NSObject <FBSDKURLOpening>
{
    id /* block */ _handler; // +0x8
    FBSDKLoginManagerLogger * _logger; // +0x10
    long long _state; // +0x18
    FBSDKKeychainStore * _keychainStore; // +0x20
    BOOL _usedSFAuthSession; // +0x28
    NSString * _authType; // +0x30
    unsigned long long _defaultAudience; // +0x38
    unsigned long long _loginBehavior; // +0x40
    UIViewController * _fromViewController; // +0x48
    NSSet * _requestedPermissions; // +0x50
}
+ (void)initialize;
+ (id)stringForChallenge;
- (id)init;
- (void)logInWithPermissions:(id)arg1 fromViewController:(id)arg2 handler:(id /* block */)arg3;
- (void)logInWithReadPermissions:(id)arg1 fromViewController:(id)arg2 handler:(id /* block */)arg3;
- (void)logInWithPublishPermissions:(id)arg1 fromViewController:(id)arg2 handler:(id /* block */)arg3;
- (void)reauthorizeDataAccess:(id)arg1 handler:(id /* block */)arg2;
- (void)logOut;
- (void)raiseLoginException:(id)arg1;
- (void)handleImplicitCancelOfLogIn;
- (BOOL)validateLoginStartState;
- (BOOL)isPerformingLogin;
- (void)assertPermissions:(id)arg1;
- (void)completeAuthentication:(id)arg1 expectChallenge:(BOOL)arg2;
- (void)determineRecentlyGrantedPermissions:(id *)arg1 recentlyDeclinedPermissions:(id *)arg2 forGrantedPermission:(id)arg3 declinedPermissions:(id)arg4;
- (void)invokeHandler:(id)arg1 error:(id)arg2;
- (id)loadExpectedChallenge;
- (id)logInParametersWithPermissions:(id)arg1 serverConfiguration:(id)arg2;
- (void)logInWithPermissions:(id)arg1 handler:(id /* block */)arg2;
- (void)reauthorizeDataAccess:(id /* block */)arg1;
- (void)logInWithBehavior:(unsigned long long)arg1;
- (void)storeExpectedChallenge:(id)arg1;
- (void)validateReauthentication:(id)arg1 withResult:(id)arg2;
- (void)setHandler:(id /* block */)arg1;
- (void)setRequestedPermissions:(id)arg1;
- (void)performBrowserLogInWithParameters:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)canOpenURL:(id)arg1 forApplication:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)isAuthenticationURL:(id)arg1;
- (id)authType;
- (void)setAuthType:(id)arg1;
- (unsigned long long)defaultAudience;
- (void)setDefaultAudience:(unsigned long long)arg1;
- (unsigned long long)loginBehavior;
- (void)setLoginBehavior:(unsigned long long)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)requestedPermissions;
- (void).cxx_destruct;
@end

