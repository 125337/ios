@interface QMapServices : NSObject
{
    BOOL _enableDebugLog; // +0x8
    NSString * _APIKey; // +0x10
    NSMutableDictionary * _internalCacheOptions; // +0x18
    QMapLoggerConfig * _loggerConfig; // +0x20
}
+ (id)sharedServices;
- (void)notifyAppKeyCheckResult:(int)arg1;
- (id)sdkVersion;
- (void)setAPIKey:(id)arg1;
- (id)APIKey;
- (void)setUserId:(id)arg1;
- (id)userId;
- (void)setPrivacyAgreement:(BOOL)arg1;
- (void)setQMapLoggerCofig:(id)arg1;
- (id)init;
- (void)setEnableDebugLog:(BOOL)arg1;
- (void)ConfigMapCacheClearOption:(id)arg1;
- (int)getMapCacheClearSizeLimitByType:(long long)arg1;
- (BOOL)enableDebugLog;
- (id)internalCacheOptions;
- (void)setInternalCacheOptions:(id)arg1;
- (id)loggerConfig;
- (void)setLoggerConfig:(id)arg1;
- (void).cxx_destruct;
@end

