@interface MMWebViewPluginScheduler : NSObject
{
    MMWebViewController * _ownerWebViewController; // +0x8
    NSMutableDictionary * _pluginName2InstanceDic; // +0x10
}
+ (BOOL)isWebScrollEvent:(unsigned long long)arg1;
- (id)initWithOwnerWebViewController:(id)arg1;
- (void)dealloc;
- (void)loadingInitPluginArray;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (id)ownerWebViewController;
- (id)pluginName2InstanceDic;
- (void).cxx_destruct;
@end

