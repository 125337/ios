@interface WACanvasPluginScheduler : NSObject <WAWebViewPluginContextProtocol, WAJSServicePluginContextProtocol>
{
    NSDictionary * _webviewPluginPool; // +0x8
    NSDictionary * _servicePluginPool; // +0x10
}
+ (id)scheduler;
- (void)setup;
- (void)setupWebViewPlugin;
- (void)setupServicePlugin;
- (void)setupEvent;
- (void)sendWebViewEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)sendServiceEvent:(long long)arg1 userInfo:(id)arg2;
- (id)GetWebViewPluginWithName:(id)arg1;
- (id)GetServicePluginWithName:(id)arg1;
- (unsigned long long)webviewPlugin_getEnvironmentType;
- (id)getAppId;
- (id)getWAContact;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (id)getParentViewController;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (id)getFileData:(id)arg1;
- (unsigned long long)servicePlugin_getEnvironmentType;
- (void)_handleWebViewEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)_handleServiceEvent:(long long)arg1 userInfo:(id)arg2;
- (id)webviewPluginPool;
- (void)setWebviewPluginPool:(id)arg1;
- (id)servicePluginPool;
- (void)setServicePluginPool:(id)arg1;
- (void).cxx_destruct;
@end
