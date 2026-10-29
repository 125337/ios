@interface TPPluginManager : NSObject <ITPPluginManager>
{
    NSMutableArray * _pluginList; // +0x8
    TPWorkerQueue * _pluginEventQueue; // +0x10
    TPRecursiveLock * _pluginListLock; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)pushEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (void)addPlugin:(id)arg1;
- (void)removePlugin:(id)arg1;
- (void)releasePlugins;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)printEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (id)pluginList;
- (void)setPluginList:(id)arg1;
- (id)pluginEventQueue;
- (void)setPluginEventQueue:(id)arg1;
- (id)pluginListLock;
- (void)setPluginListLock:(id)arg1;
- (void).cxx_destruct;
@end
