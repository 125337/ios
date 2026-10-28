@interface LiteAppDynamicModuleManager : NSObject
{
    NSMutableDictionary * _commonModule; // +0x8
    NSMutableDictionary * _nativeModule; // +0x10
    NSMutableDictionary * _nativeModuleInstances; // +0x18
    NSMutableDictionary * _appModule; // +0x20
    NSMutableDictionary * _executingApi; // +0x28
}
+ (id)sharedInstance;
+ (BOOL)isJsonString:(id)arg1;
+ (id)escapeString:(id)arg1;
- (id)init;
- (void)registerModule:(id)arg1 forClass:(Class)arg2;
- (id)getDynamicModuleConfig:(id)arg1 name:(id)arg2;
- (void)registerModule:(id)arg1 name:(id)arg2 forClass:(Class)arg3;
- (id)getAllDynamicModuleConfig:(id)arg1;
- (unsigned int)genLocalId;
- (void)addExecutingApi:(unsigned int)arg1 callbackId:(long long)arg2 invoker:(id)arg3;
- (void)removeExecutingApi:(unsigned int)arg1 callbackId:(long long)arg2;
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
- (id)executingApi;
- (void)setExecutingApi:(id)arg1;
- (void).cxx_destruct;
@end
