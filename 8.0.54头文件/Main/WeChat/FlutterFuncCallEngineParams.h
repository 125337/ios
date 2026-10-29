@interface FlutterFuncCallEngineParams : MMRootService <MMServiceProtocol, FlutterCommonFunc>
{
    NSMutableDictionary * _paramsMap; // +0x8
}
+ (void)engineParams:(id)arg1 fromMap:(id)arg2;
+ (void)enginePramsItem:(id)arg1 fromValue:(id)arg2;
+ (void)engineParamsMap:(id)arg1 fromMap:(id)arg2;
+ (void)engineParamsArray:(id)arg1 fromArray:(id)arg2;
- (void)onServiceInit;
- (id)funcName;
- (id)callHost:(id)arg1 engineId:(id)arg2;
- (id)nextParamsKey;
- (void)setEngineParams:(id)arg1 params:(id)arg2;
- (void)setEngineParams:(id)arg1 fromMap:(id)arg2;
- (id)getEngineParams:(id)arg1;
- (id)paramsMap;
- (void)setParamsMap:(id)arg1;
- (void).cxx_destruct;
@end

