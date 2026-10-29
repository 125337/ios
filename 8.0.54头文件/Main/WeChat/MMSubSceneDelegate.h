@interface MMSubSceneDelegate : MMSceneDelegate
{
    MMMainSceneDelegate * _mainSceneDelegate; // +0x8
}
- (void)updateSceneBizViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)windowScene:(id)arg1 didUpdateCoordinateSpace:(id)arg2 interfaceOrientation:(long long)arg3 traitCollection:(id)arg4;
- (id)mainSceneDelegate;
- (void)setMainSceneDelegate:(id)arg1;
- (void).cxx_destruct;
@end

