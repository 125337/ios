@interface FBSDKBridgeAPI : NSObject <FBSDKApplicationObserving, FBSDKContainerViewControllerDelegate, ASWebAuthenticationPresentationContextProviding>
{
    FBSDKBridgeAPIRequest * _pendingRequest; // +0x8
    id /* block */ _pendingRequestCompletionBlock; // +0x10
    id <FBSDKURLOpening> _pendingURLOpen; // +0x18
    id <FBSDKAuthenticationSession> _authenticationSession; // +0x20
    id /* block */ _authenticationSessionCompletionHandler; // +0x28
    BOOL _expectingBackground; // +0x30
    BOOL _isRequestingSFAuthenticationSession; // +0x31
    UIViewController * _safariViewController; // +0x38
    BOOL _isDismissingSafariViewController; // +0x40
    BOOL _isAppLaunched; // +0x41
    BOOL _active; // +0x42
}
+ (void)load;
+ (id)sharedInstance;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)openURL:(id)arg1 sender:(id)arg2 handler:(id /* block */)arg3;
- (void)openBridgeAPIRequest:(id)arg1 useSafariViewController:(BOOL)arg2 fromViewController:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)openURLWithSafariViewController:(id)arg1 sender:(id)arg2 fromViewController:(id)arg3 handler:(id /* block */)arg4;
- (void)_openURLWithAuthenticationSession:(id)arg1;
- (void)_setSessionCompletionHandlerFromHandler:(id /* block */)arg1;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)viewControllerDidDisappear:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_handleBridgeAPIResponseURL:(id)arg1 sourceApplication:(id)arg2;
- (void)_cancelBridgeRequest;
- (id)presentationAnchorForWebAuthenticationSession:(id)arg1;
- (BOOL)isActive;
- (void).cxx_destruct;
@end
