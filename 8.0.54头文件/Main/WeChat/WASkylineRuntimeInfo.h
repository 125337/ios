@interface WASkylineRuntimeInfo : NSObject
{
    BOOL _cronetEnable; // +0x8
    BOOL _cronetSimpleDiskCache; // +0x9
    BOOL _enableResizeImage; // +0xa
    BOOL _enableNewSvgImage; // +0xb
    NSString * _appId; // +0x10
    NSString * _clientVersion; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _instanceId; // +0x28
    unsigned long long _appVersion; // +0x30
    unsigned long long _debugModeType; // +0x38
    unsigned long long _appServiceType; // +0x40
    NSString * _cronetCachePath; // +0x48
    NSString * _httpUserAgent; // +0x50
    NSString * _httpReferer; // +0x58
    NSDictionary * _performanceConfig; // +0x60
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)clientVersion;
- (void)setClientVersion:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (unsigned long long)appVersion;
- (void)setAppVersion:(unsigned long long)arg1;
- (unsigned long long)debugModeType;
- (void)setDebugModeType:(unsigned long long)arg1;
- (unsigned long long)appServiceType;
- (void)setAppServiceType:(unsigned long long)arg1;
- (BOOL)cronetEnable;
- (void)setCronetEnable:(BOOL)arg1;
- (BOOL)cronetSimpleDiskCache;
- (void)setCronetSimpleDiskCache:(BOOL)arg1;
- (id)cronetCachePath;
- (void)setCronetCachePath:(id)arg1;
- (BOOL)enableResizeImage;
- (void)setEnableResizeImage:(BOOL)arg1;
- (BOOL)enableNewSvgImage;
- (void)setEnableNewSvgImage:(BOOL)arg1;
- (id)httpUserAgent;
- (void)setHttpUserAgent:(id)arg1;
- (id)httpReferer;
- (void)setHttpReferer:(id)arg1;
- (id)performanceConfig;
- (void)setPerformanceConfig:(id)arg1;
- (void).cxx_destruct;
@end

