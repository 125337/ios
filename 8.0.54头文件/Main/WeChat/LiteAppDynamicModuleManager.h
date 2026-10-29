@interface LiteAppDynamicModuleManager : NSObject
{
    NSMutableDictionary * _commonModule; // +0x8
    NSMutableDictionary * _nativeModule; // +0x10
    NSMutableDictionary * _nativeModuleInstances; // +0x18
    NSMutableDictionary * _appModule; // +0x20
    NSMutableDictionary * _excutingApi; // +0x28
}
+ (id)sharedInstance;
- (id)init;
- (void)registerModule:(id)arg1 forClass:(Class)arg2;
- (id)getDynamicModuleConfig:(id)arg1 name:(id)arg2;
- (void)registerModule:(id)arg1 name:(id)arg2 forClass:(Class)arg3;
- (id)getAllDynamicModuleConfig:(id)arg1;
- (unsigned int)genLocalId;
- (void)addExcutingApi:(unsigned int)arg1 callbackId:(long long)arg2 invoker:(id)arg3;
- (void)removeExcutingApi:(unsigned int)arg1 callbackId:(long long)arg2;
- (void)registerNativeModule:(id)arg1 forClass:(Class)arg2;
- (id)getNativeModuleConfig:(id)arg1;
- (id)createNativeModuleInstance:(id)arg1 moduleId:(unsigned long long)arg2;
- (void)releaseNativeModuleInstance:(unsigned long long)arg1;
- (id)getNativeModuleInstance:(unsigned long long)arg1;
- (BOOL)findDynamicModule:(id)arg1 name:(id)arg2;
- (id)commonModule;
- (void)setCommonModule:(id)arg1;
- (id)nativeModule;
- (void)setNativeModule:(id)arg1;
- (id)nativeModuleInstances;
- (void)setNativeModuleInstances:(id)arg1;
- (id)appModule;
- (void)setAppModule:(id)arg1;
- (id)excutingApi;
- (void)setExcutingApi:(id)arg1;
- (void).cxx_destruct;
@end

