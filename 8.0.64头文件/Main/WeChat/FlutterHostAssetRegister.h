@interface FlutterHostAssetRegister : MMRootService <MMServiceProtocol>
{
    NSMutableDictionary * _handlerMap; // +0x8
    FlutterHostAssetDefault * _defaultHandler; // +0x10
}
- (void)onServiceInit;
- (void)registerAssetHandlerWithKey:(id)arg1 Handler:(id)arg2;
- (void)unregisterAssetHandlerWithKey:(id)arg1;
- (id)findHandlerWithKey:(id)arg1;
- (id)handlerMap;
- (void)setHandlerMap:(id)arg1;
- (id)defaultHandler;
- (void)setDefaultHandler:(id)arg1;
- (void).cxx_destruct;
@end
