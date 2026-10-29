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
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)getDynamicModuleType:(id)arg1 module:(id)arg2 method:(id)arg3;
- (vector<luggage::LiteAppModuleInfo, std::allocator<luggage::LiteAppModuleInfo>>)getDynamicModuleInfo:(id)arg1;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)callDynamicModule:(unsigned int)arg1 appId:(id)arg2 pageId:(unsigned long long)arg3 module:(id)arg4 method:(id)arg5 param:(id)arg6 callbackId:(long long)arg7 sourceType:(int)arg8 viewController:(id)arg9;
- (void)paramCallback:(unsigned int)arg1 appId:(id)arg2 pageId:(unsigned long long)arg3 callbackId:(int)arg4 data:(id)arg5 keepAlive:(BOOL)arg6 sourceType:(int)arg7;
- (map<std::string, luggage::LiteAppModuleMethod::ParamType, std::less<std::string>, std::allocator<std::pair<const std::string, luggage::LiteAppModuleMethod::ParamType>>>)parseDynamicModuleReturnTypes:(id)arg1;
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
