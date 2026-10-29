@interface WAJSContextPluginScheduler : NSObject
{
    WAJSCoreService * _ownerContext; // +0x8
    NSMutableDictionary * _pluginName2InstanceDic; // +0x10
    NSRecursiveLock * _pluginDictLock; // +0x18
    NSString * _lastOperateMusicPluginName; // +0x20
}
- (id)operateMusicInstance;
- (void)updateLastOperateMusicPluginName:(id)arg1;
- (id)initWithOwnerJSContext:(id)arg1;
- (void)dealloc;
- (void)loadingInitPluginArray;
- (void)loadPluginWhenInit;
- (void)commonCreatePluginWithPluginConfigArray:(id)arg1;
- (void)createPluginInstanceIfNotExsist:(id)arg1;
- (id)GetPluginInstanceByName:(id)arg1;
- (id)GetPluginInstanceIfExsist:(id)arg1;
- (void)loadPluginForEvent:(long long)arg1;
- (void)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)setWAAppTaskState:(unsigned long long)arg1;
- (void)setWAAppTaskRunningState:(unsigned long long)arg1;
- (id)ownerContext;
- (id)pluginName2InstanceDic;
- (id)pluginDictLock;
- (void)setPluginDictLock:(id)arg1;
- (id)lastOperateMusicPluginName;
- (void)setLastOperateMusicPluginName:(id)arg1;
- (void).cxx_destruct;
@end
