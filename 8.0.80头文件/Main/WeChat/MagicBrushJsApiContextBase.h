@interface MagicBrushJsApiContextBase : NSObject <WAJSServicePluginContextProtocol, WAWebViewPluginContextProtocol, IMBBizContextDelegate>
{
    NSMutableDictionary * _webviewPluginPool; // +0x8
    NSMutableDictionary * _weappPluginPool; // +0x10
}
- (id)init;
- (id)GetWebViewPluginByName:(id)arg1;
- (void)setupWebViewPlugin;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)setupWeAppPlugin;
- (id)pluginWhiteList;
- (id)weappPluginWhiteList;
- (id)getAppId;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (id)getCurrentPagePath;
- (id)getCurrentPageQuery;
- (id)getCurrentPageRelativePath;
- (id)getFileData:(id)arg1;
- (id)getParentViewController;
- (id)getWAContact;
- (void)alterWillStop;
- (id)context;
- (id)currentWebView;
- (unsigned int)getAppVersion;
- (id)getAudioNative;
- (id)getCurPubResLogic;
- (unsigned int)getDebugModeType;
- (id)getWeMediaApi;
- (void)initGameEngine;
- (void)initWASM:(id)arg1;
- (id)instanceId;
- (BOOL)performOnService:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (void)invokeOnServiceThread:(id /* block */)arg1;
- (id)pluginScheduler;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 webViewId:(unsigned int)arg3;
- (unsigned int)getAppType;
- (id)provideCurrentViewController;
- (id)webviewPluginPool;
- (void)setWebviewPluginPool:(id)arg1;
- (id)weappPluginPool;
- (void)setWeappPluginPool:(id)arg1;
- (void).cxx_destruct;
@end
