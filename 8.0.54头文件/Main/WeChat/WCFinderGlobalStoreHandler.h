@interface WCFinderGlobalStoreHandler : LiteAppStore
{
    MMLiteAppViewController * _liteAppVC; // +0x8
    id <WCFinderGlobalStore> _currentStore; // +0x10
}
+ (id)handlerMap;
+ (void)registerHandler:(Class)arg1;
- (id)init;
- (BOOL)onDispatch:(id)arg1 insId:(unsigned long long)arg2 actionName:(id)arg3 data:(id)arg4 callbackId:(int)arg5;
- (id)handleForActionName:(id)arg1;
- (id)liteAppVC;
- (void)setLiteAppVC:(id)arg1;
- (id)currentStore;
- (void)setCurrentStore:(id)arg1;
- (void).cxx_destruct;
@end

