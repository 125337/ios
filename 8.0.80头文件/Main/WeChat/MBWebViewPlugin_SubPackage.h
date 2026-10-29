@interface MBWebViewPlugin_SubPackage : WAWebViewPluginBase
- (unsigned long long)genTaskId;
- (void)dispatchSubPackageStateEventToJs:(id)arg1;
- (void)notifyEventParam:(id)arg1;
- (void)asyncNotifyEventParam:(id)arg1;
- (void)asyncDispatchSubPackageStateEventToJs:(id)arg1;
- (void)dispatchSubPackageStateEventToJs:(id)arg1 appId:(id)arg2 envVersion:(id)arg3;
- (void)notifyEventParam:(id)arg1 appId:(id)arg2 envVersion:(id)arg3 eventBlock:(id /* block */)arg4;
- (void)asyncNotifyEventParam:(id)arg1 appId:(id)arg2 envVersion:(id)arg3 eventBlock:(id /* block */)arg4;
- (unsigned long long)startLoadSubPackage:(id)arg1 appId:(id)arg2 envVersion:(id)arg3 eventBlock:(id /* block */)arg4;
- (id)batchLoadSubPackages:(id)arg1 appId:(id)arg2 envVersion:(id)arg3;
- (BOOL)checkLocalCacheForModule:(id)arg1 appId:(id)arg2 packageConfig:(id)arg3;
@end
