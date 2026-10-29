@interface LiteAppJsApiPluginScheduler : NSObject
{
    unsigned int _appUuid; // +0x8
    NSString * _appId; // +0x10
    id <ILiteAppJsApiPluginControllerProtocol> _ownerLiteAppController; // +0x18
    NSMutableDictionary * _pluginName2InstanceDic; // +0x20
}
- (id)initWithOwnerLiteAppController:(id)arg1 appUuid:(unsigned int)arg2 controller:(id)arg3;
- (void)dealloc;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (void)loadingInitPluginArray;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)ownerLiteAppController;
- (id)pluginName2InstanceDic;
- (void).cxx_destruct;
@end
