@interface FLTURLLauncherPlugin : NSObject <FlutterPlugin>
{
    FLTURLLaunchSession * _currentSession; // +0x8
}
+ (void)registerWithRegistrar:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (BOOL)canLaunchURL:(id)arg1;
- (void)launchURL:(id)arg1 call:(id)arg2 result:(id /* block */)arg3;
- (void)launchURLInVC:(id)arg1 result:(id /* block */)arg2;
- (void)closeWebViewWithResult:(id /* block */)arg1;
- (id)topViewController;
- (id)topViewControllerFromViewController:(id)arg1;
- (id)currentSession;
- (void)setCurrentSession:(id)arg1;
- (void).cxx_destruct;
@end

