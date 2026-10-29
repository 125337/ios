@interface TPProxyServiceConfig : NSObject <NSCopying>
{
    BOOL _vodCachedEnable; // +0x8
    BOOL _reportEnable; // +0x9
    int _serviceType; // +0xc
    NSString * _cacheDir; // +0x10
    NSString * _dataDir; // +0x18
    long long _maxUseMemoryMB; // +0x20
    long long _maxUseStorageMB; // +0x28
    NSString * _initConfig; // +0x30
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (int)serviceType;
- (void)setServiceType:(int)arg1;
- (id)cacheDir;
- (void)setCacheDir:(id)arg1;
- (id)dataDir;
- (void)setDataDir:(id)arg1;
- (long long)maxUseMemoryMB;
- (void)setMaxUseMemoryMB:(long long)arg1;
- (long long)maxUseStorageMB;
- (void)setMaxUseStorageMB:(long long)arg1;
- (BOOL)vodCachedEnable;
- (void)setVodCachedEnable:(BOOL)arg1;
- (BOOL)reportEnable;
- (void)setReportEnable:(BOOL)arg1;
- (id)initConfig;
- (void)setInitConfig:(id)arg1;
- (void).cxx_destruct;
@end

