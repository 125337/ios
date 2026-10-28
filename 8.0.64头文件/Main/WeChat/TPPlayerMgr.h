@interface TPPlayerMgr : NSObject <TPThumbPlayerLogDelegate>
{
    BOOL _initialized; // +0x8
}
+ (id)sharedManager;
- (void)initSDKWithGuid:(id)arg1 platform:(long long)arg2;
- (void)setLogDelegate:(id)arg1;
- (void)setProxyServiceType:(long long)arg1;
- (void)setProxyEnable:(BOOL)arg1;
- (void)setProxyMaxStorageSizeMB:(long long)arg1;
- (void)setProxyConfigWithPlatform:(long long)arg1 cacheDir:(id)arg2 dataDir:(id)arg3 configStr:(id)arg4;
- (void)setProxyConfigWithEnableCheckLocalServer:(BOOL)arg1 enableCheckLocalServerOnCreate:(BOOL)arg2 timeoutMs:(int)arg3 serverCheckTimeInterval:(int)arg4;
- (void)setUserInfoWithUin:(id)arg1 isVip:(BOOL)arg2;
- (void)setUpcInfoWithUpc:(id)arg1 upcState:(long long)arg2;
- (void)setAppInfoWithAppVersion:(id)arg1 buildVerson:(id)arg2;
- (void)setOutNetIP:(id)arg1;
- (id)downloadProxyVersion;
- (id)thumbPlayerVersion;
- (id)playerCoreVersion;
- (id)getOfflineRecordVinfo:(id)arg1 format:(id)arg2;
- (long long)getOfflineRecordDurationMs:(id)arg1 format:(id)arg2;
- (long long)getSuggestedBitrate;
- (long long)getCellularDataCost;
- (void)setPropertyBool:(unsigned long long)arg1 propertyValue:(BOOL)arg2;
- (BOOL)getPropertyBool:(unsigned long long)arg1;
- (void)setPropertyString:(unsigned long long)arg1 propertyValue:(id)arg2;
- (id)getPropertyString:(unsigned long long)arg1;
- (void)setProxyConfigWithServiceType:(int)arg1 cacheDir:(id)arg2 dataDir:(id)arg3;
- (void)setProxyMaxStorageSizeMBWithServiceType:(int)arg1 maxStorageSizeMB:(long long)arg2;
- (void)setProxyVodCachedEnableWithServiceType:(int)arg1 vodCachedEnable:(BOOL)arg2;
- (void)makeSureLocalServiceActiveWithCompletion:(id /* block */)arg1;
- (void)logWithLevel:(long long)arg1 tag:(id)arg2 content:(id)arg3;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
@end
