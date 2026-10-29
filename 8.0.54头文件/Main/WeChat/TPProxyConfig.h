@interface TPProxyConfig : NSObject
{
    BOOL _proxyEnable; // +0x8
    long long _defaultServiceType; // +0x10
    NSMutableDictionary * _configs; // +0x18
    TPLock * _lock; // +0x20
}
+ (id)sharedInstance;
- (id)init;
- (id)proxyConfigWithServiceType:(int)arg1;
- (void)addProxyConfigWithServiceType:(int)arg1 cacheDir:(id)arg2 dataDir:(id)arg3;
- (void)addProxyConfig:(id)arg1;
- (void)setMaxUseMemoryMB:(long long)arg1;
- (void)setMaxUseMemoryMBWithServiceType:(int)arg1 maxUseMemoryMB:(long long)arg2;
- (void)setMaxUseStorageMB:(long long)arg1;
- (void)setMaxUseStorageMBWithServiceType:(int)arg1 maxUseStorageMB:(long long)arg2;
- (void)setVodCachedEnable:(BOOL)arg1;
- (void)setVodCacheEnableWithServiceType:(int)arg1 vodCachedEnable:(BOOL)arg2;
- (void)setReportEnable:(BOOL)arg1;
- (void)setReportEnableWithServiceType:(int)arg1 reportEnable:(BOOL)arg2;
- (void)setIniConfigWithServiceType:(int)arg1 iniConfig:(id)arg2;
- (id)dlInitParamWithServiceType:(int)arg1;
- (void)setDefaultServiceType:(long long)arg1;
- (id)serviceConfigWithServiceType:(int)arg1;
- (void)addServiceConfig:(id)arg1;
- (BOOL)proxyEnable;
- (void)setProxyEnable:(BOOL)arg1;
- (long long)defaultServiceType;
- (id)configs;
- (void)setConfigs:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

