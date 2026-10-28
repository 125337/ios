@interface WAJSContextPlugin_SyncWaiter : WAJSContextPluginBase
{
    NSMutableDictionary * _syncMap; // +0x8
}
- (id)init;
- (void)markSyncTag:(id)arg1;
- (void)releaseSyncTag:(id)arg1 extData:(id)arg2;
- (void)waitFromAsync:(id)arg1 timeout:(long long)arg2 returnBlock:(id /* block */)arg3;
- (id)syncMap;
- (void)setSyncMap:(id)arg1;
- (void).cxx_destruct;
@end
