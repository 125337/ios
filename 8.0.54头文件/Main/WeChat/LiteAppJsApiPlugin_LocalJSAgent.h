@interface LiteAppJsApiPlugin_LocalJSAgent : LiteAppJsApiPluginBase <WSWebCommunicator, WSWebViewPluginableProtocol>
{
    WSWebViewPluginScheduler * _pluginScheduler; // +0x8
    long long _k1kCategoryId; // +0x10
}
+ (id)preloadPlugins;
- (id)init;
- (id)getLocalJSLogic;
- (id)getCurViewController;
- (unsigned long long)localJSBizType;
- (id)communicator;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)sendEvent:(id)arg1 withParams:(id)arg2 sendAfterReady:(BOOL)arg3;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (long long)k1kCategoryId;
- (void)setK1kCategoryId:(long long)arg1;
- (void).cxx_destruct;
@end

