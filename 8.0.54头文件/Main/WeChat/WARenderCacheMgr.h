@interface WARenderCacheMgr : MMUserService <MMServiceProtocol>
+ (id)cachePathForRenderCacheInfo:(id)arg1;
+ (id)cachePathForPubVersion:(id)arg1 username:(id)arg2 debugType:(unsigned int)arg3 version:(unsigned int)arg4 pagePath:(id)arg5;
- (void)saveInitialRenderCache:(id)arg1 webviewData:(id)arg2 appserviceData:(id)arg3 forUsername:(id)arg4 path:(id)arg5 debugType:(unsigned int)arg6 appVersion:(unsigned int)arg7 pubVersion:(id)arg8;
- (id)getInitialRenderCacheForUsername:(id)arg1 path:(id)arg2 debugType:(unsigned int)arg3 appVersion:(unsigned int)arg4 pubVersion:(id)arg5;
- (id)mmkvKeyForRecord;
- (BOOL)useMMKVForStorage;
- (void)deleteRenderCacheForUsername:(id)arg1 debugType:(unsigned int)arg2 underAppVersion:(unsigned int)arg3;
- (void)deleteAllRenderCacheForUsername:(id)arg1 debugType:(unsigned int)arg2;
- (void)deleteAllRenderCacheIfPubVersionNot:(id)arg1;
- (void)deleteRenderCache:(id)arg1;
@end

