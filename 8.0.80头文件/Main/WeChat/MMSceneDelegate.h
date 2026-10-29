@interface MMSceneDelegate : UIResponder <UIWindowSceneDelegate>
{
    UIWindow * _window; // +0x8
    NSString * _sceneName; // +0x10
    UISceneSession * _sceneSession; // +0x18
    UIWindowScene * _windowScene; // +0x20
    UIScreen * _lastDisplayScreen; // +0x28
}
- (id)initWithSceneName:(id)arg1;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidDisconnect:(id)arg1;
- (void)windowScene:(id)arg1 didUpdateCoordinateSpace:(id)arg2 interfaceOrientation:(long long)arg3 traitCollection:(id)arg4;
- (void)windowScene:(id)arg1 didUpdateEffectiveGeometry:(id)arg2;
- (BOOL)isMainScene;
- (void)updateSceneBizViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)checkAndNotifyScreenChange;
- (id)window;
- (void)setWindow:(id)arg1;
- (id)sceneName;
- (void)setSceneName:(id)arg1;
- (id)sceneSession;
- (void)setSceneSession:(id)arg1;
- (id)windowScene;
- (void)setWindowScene:(id)arg1;
- (id)lastDisplayScreen;
- (void)setLastDisplayScreen:(id)arg1;
- (void).cxx_destruct;
@end
