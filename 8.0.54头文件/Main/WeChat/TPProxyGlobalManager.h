@interface TPProxyGlobalManager : NSObject <TPDLProxyLogDelegate, TPNetworkReachabilityDelegate>
{
    NSMutableDictionary * _proxyMaps; // +0x8
    NSMutableDictionary * _proxyInitErrorCodeMap; // +0x10
    TPLock * _lock; // +0x18
}
+ (id)sharedManager;
- (id)init;
- (void)dealloc;
- (id)getPlayerProxyWithServiceType:(long long)arg1;
- (void)updateUserUpc:(id)arg1 userUpcState:(long long)arg2;
- (void)updateUserUin:(id)arg1 isVip:(BOOL)arg2;
- (void)updateAppVersion:(id)arg1 buildVerson:(id)arg2;
- (int)getProxyInitErrorCodeWithServiceType:(long long)arg1;
- (void)updateMaxStorageSizeMB:(long long)arg1;
- (void)updateMaxStorageSizeMBWithServiceType:(int)arg1 maxStorageSizeMB:(long long)arg2;
- (void)updateMaxUseMemoryMB:(long long)arg1;
- (void)updateMaxUseMemoryMBWithServiceType:(int)arg1 maxUseMemoryMB:(long long)arg2;
- (void)updateVodCachedEnable:(BOOL)arg1;
- (void)updateVodCachedEnableWithServiceType:(int)arg1 vodCacheEnable:(BOOL)arg2;
- (void)updateDataReportEnable:(BOOL)arg1;
- (void)updateDataReportEnableWithServiceType:(int)arg1 dataReportEnable:(BOOL)arg2;
- (void)setNetworkReachState:(long long)arg1 toProxy:(id)arg2;
- (void)onNetworkReachStateChanged:(long long)arg1;
- (void)logInfo:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logWarn:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logError:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logDebug:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (id)proxyMaps;
- (void)setProxyMaps:(id)arg1;
- (id)proxyInitErrorCodeMap;
- (void)setProxyInitErrorCodeMap:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end

