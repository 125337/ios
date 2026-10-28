@interface MMMainSceneDelegate : MMSceneDelegate
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)handleOpenEvent:(id)arg1;
- (id)window;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)scene:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)windowScene:(id)arg1 didUpdateCoordinateSpace:(id)arg2 interfaceOrientation:(long long)arg3 traitCollection:(id)arg4;
@end
