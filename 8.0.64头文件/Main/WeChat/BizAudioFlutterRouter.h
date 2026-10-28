@interface BizAudioFlutterRouter : NSObject
{
    MMFlutterViewController * _controller; // +0x8
    BrandAudioNavigationController * _container; // +0x10
    MMFlutterInstance * _instance; // +0x18
}
+ (id)plugins;
- (id)init;
- (id)playerRouteName;
- (void)setupEngineGroup;
- (id)createNewApp;
- (void)onLaunch:(id)arg1;
- (id)appController;
- (id)appContainer;
- (BOOL)isAppActive;
- (BOOL)isAppInViewHierarchy;
- (BOOL)isAppShowing;
- (int)transferTingSceneToBizAudioScene:(int)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)instance;
- (void)setInstance:(id)arg1;
- (void).cxx_destruct;
@end
