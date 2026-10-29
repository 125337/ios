@interface MpWebViewPreloadPool : NSObject
{
    NSDictionary * _configs; // +0x8
    NSMutableDictionary * _entries; // +0x10
    NSMutableSet * _enabledKeys; // +0x18
    double _lastMemoryWarningTime; // +0x20
}
+ (id)sharedPool;
- (id)init;
- (id)_buildConfigs;
- (void)preloadWithCacheKey:(id)arg1;
- (void)_doPreloadForCacheKey:(id)arg1 checkMemory:(BOOL)arg2;
- (void)enableAutoPreload:(id)arg1;
- (void)disableAutoPreload:(id)arg1;
- (id)consumeForCacheKey:(id)arg1;
- (void)invalidateForCacheKey:(id)arg1;
- (void)invalidateAll;
- (id)_spawnEntryForCacheKey:(id)arg1 config:(id)arg2;
- (void)_loadEditorIntoEntry:(id)arg1;
- (void)_ensureResourceForEntry:(id)arg1;
- (void)_loadDataIntoEntry:(id)arg1 path:(id)arg2 resourceSource:(long long)arg3;
- (void)_onMemoryWarning;
- (BOOL)_isInMemoryWarningCooldown;
- (void)_onDidBecomeActive;
- (void)_healthCheckEntry:(id)arg1;
- (void)dealloc;
- (id)configs;
- (void)setConfigs:(id)arg1;
- (id)entries;
- (void)setEntries:(id)arg1;
- (id)enabledKeys;
- (void)setEnabledKeys:(id)arg1;
- (double)lastMemoryWarningTime;
- (void)setLastMemoryWarningTime:(double)arg1;
- (void).cxx_destruct;
@end
