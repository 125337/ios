@interface FlutterSceneDelegate : NSObject <UIWindowSceneDelegate>
{
    UIWindow * _window; // +0x8
}
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (id)window;
- (void)setWindow:(id)arg1;
- (void).cxx_destruct;
@end
