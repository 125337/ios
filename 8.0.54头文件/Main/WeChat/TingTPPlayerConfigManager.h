@interface TingTPPlayerConfigManager : MMUserService <TPLogDelegate, MMServiceProtocol>
+ (BOOL)isEnableIndependentQueue;
+ (BOOL)isEnableForceOpenWhenResume;
+ (long long)getConfigValueWithDict:(id)arg1 key:(id)arg2 defaultValue:(long long)arg3 error:(id *)arg4;
- (void)onServiceInit;
- (id)createTPPlayerEnaleCache:(BOOL)arg1;
- (void)logWithLevel:(int)arg1 tag:(id)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(unsigned long long)arg5 content:(id)arg6;
- (id)cacheConfigPath;
- (id)cacheDataPath;
- (id)cacheFilePathWithCacheId:(id)arg1;
- (id)fileTargetPathWithCacheId:(id)arg1 pathSuffix:(id)arg2;
- (id)fileDownloadingPathWithCacheId:(id)arg1;
- (id)fileCacheIdForUrl:(id)arg1 listenType:(unsigned int)arg2 cacheKey:(id)arg3;
- (void)tryCreateCacheFileDir;
@end

