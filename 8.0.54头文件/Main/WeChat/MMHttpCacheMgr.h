@interface MMHttpCacheMgr : MMUserService <MMServiceProtocol, MMHttpConnectionDelegate>
+ (unsigned int)GetCacheType:(id)arg1;
+ (id)GetCacheDir:(unsigned int)arg1;
+ (id)GetFilePath:(id)arg1 Type:(unsigned int)arg2;
+ (void)ClearCacheDir:(unsigned int)arg1;
+ (void)ClearCacheDirByUsrName:(id)arg1;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (BOOL)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4;
- (BOOL)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4 RefererHeader:(id)arg5;
- (void)LoadCache:(id *)arg1 CacheKey:(id)arg2 Type:(unsigned int)arg3;
- (void)HttpConnectionFinished:(id)arg1 cachekey:(id)arg2 response:(id)arg3 ErrNo:(int)arg4;
- (void)HttpConnectionFail:(id)arg1;
@end

