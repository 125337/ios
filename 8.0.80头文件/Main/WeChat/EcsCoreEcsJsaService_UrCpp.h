@interface EcsCoreEcsJsaService_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsJsaService_Ur>
+ (id)sharedInstance;
- (void)registerAsyncActions:(id)arg1;
- (BOOL)canHandleAsyncAction:(int)arg1 actionName:(id)arg2;
- (void)handleAsyncAction:(id)arg1 actionName:(id)arg2 params:(id)arg3 callback:(id /* block */)arg4;
- (id)getSupportedAsyncActionInfoList:(int)arg1;
- (void)registerSyncActions:(id)arg1;
- (BOOL)canHandleSyncAction:(int)arg1 actionName:(id)arg2;
- (id)handleSyncAction:(id)arg1 actionName:(id)arg2 params:(id)arg3;
- (id)getSupportedSyncActionInfoList:(int)arg1;
@end
