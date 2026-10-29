@interface LiteAppJsApiPluginScheduler : NSObject
{
    id <ILiteAppJsApiPluginControllerProtocol> _ownerLiteAppController; // +0x8
    NSMutableDictionary * _pluginName2InstanceDic; // +0x10
}
- (id)initWithOwnerLiteAppController:(id)arg1;
- (void)dealloc;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (void)loadingInitPluginArray;
- (id)ownerLiteAppController;
- (id)pluginName2InstanceDic;
- (void).cxx_destruct;
@end

