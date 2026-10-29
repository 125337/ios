@interface WSWebViewPluginScheduler : NSObject
{
    id <WSWebViewPluginableProtocol> _webViewOwner; // +0x8
    NSMutableDictionary * _pluginInstanceDict; // +0x10
}
- (void)observeNotifications;
- (void)onApplicationEnterBackground:(id)arg1;
- (void)onApplicationEnterForeground:(id)arg1;
- (void)onApplicationDidRotate:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (id)initWithWebViewOwner:(id)arg1;
- (id)initWithWebViewOwner:(id)arg1 preloadPlugins:(id)arg2;
- (void)registerPlugins:(id)arg1;
- (void)registerPlugin:(id)arg1;
- (BOOL)containPlugin:(id)arg1;
- (id)getPluginInstanceByName:(id)arg1;
- (id)getExistPluginInstanceByName:(id)arg1;
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2;
- (void)loadingPlugins:(id)arg1;
- (id)loadPluginWith:(id)arg1;
- (id)loadPlugin:(id)arg1;
- (void)observeLifeCircleFor:(id)arg1;
- (id)webViewOwner;
- (void)setWebViewOwner:(id)arg1;
- (id)pluginInstanceDict;
- (void)setPluginInstanceDict:(id)arg1;
- (void).cxx_destruct;
@end

