@interface MMFlutterEngineCache : MMRootService <MMServiceProtocol>
{
    NSMapTable * _cachedEngines; // +0x8
}
- (void)onServiceInit;
- (id)createEngineWithEntryPoint:(id)arg1 initialRoute:(id)arg2;
- (BOOL)contains:(id)arg1;
- (id)get:(id)arg1;
- (void)put:(id)arg1 engine:(id)arg2;
- (void)remove:(id)arg1;
- (void)dealloc;
- (id)cachedEngines;
- (void)setCachedEngines:(id)arg1;
- (void).cxx_destruct;
@end
