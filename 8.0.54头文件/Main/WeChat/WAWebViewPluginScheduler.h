@interface WAWebViewPluginScheduler : NSObject
{
    WAWebViewController * _ownerWebViewController; // +0x8
    NSMutableDictionary * _pluginName2InstanceDic; // +0x10
}
- (id)initWithOwnerWebViewController:(id)arg1;
- (void)dealloc;
- (void)loadingInitPluginArray;
- (void)createPluginInstanceIfNotExsist:(id)arg1;
- (id)GetPluginInstanceByName:(id)arg1;
- (id)GetPluginInstanceIfExsist:(id)arg1;
- (void)loadPluginForEvent:(unsigned long long)arg1;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)ownerWebViewController;
- (id)pluginName2InstanceDic;
- (void).cxx_destruct;
@end

