@interface FlutterFuncCallEngineKV : MMRootService <MMServiceProtocol, FlutterCommonFunc>
{
    MMLRUCache * _kvMap; // +0x8
}
- (void)put:(id)arg1 value:(id)arg2;
- (void)remove:(id)arg1;
- (id)funcName;
- (id)callHost:(id)arg1 engineId:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)kvMap;
- (void)setKvMap:(id)arg1;
- (void).cxx_destruct;
@end
