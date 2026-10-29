@interface _TtC6WeChat12CarPlayScene : MMSceneDelegate <CPTemplateApplicationSceneDelegate>
{
     interfaceController; // +0x8
}
+ (id)shared;
- (BOOL)isCarPlayConnected;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)templateApplicationScene:(id)arg1 didConnectInterfaceController:(id)arg2;
- (void)templateApplicationScene:(id)arg1 didDisconnectInterfaceController:(id)arg2;
- (void)templateApplicationScene:(id)arg1 didSelectNavigationAlert:(id)arg2;
- (void)templateApplicationScene:(id)arg1 didSelectManeuver:(id)arg2;
- (void)contentStyleDidChange:(long long)arg1;
- (id)initWithSceneName:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

