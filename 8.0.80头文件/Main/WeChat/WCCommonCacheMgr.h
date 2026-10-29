@interface WCCommonCacheMgr : MMUserService <WCPlayerEventExt, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _processQueue; // +0x8
    WCCommonCacheDB * _cacheDB; // +0x10
}
- (void)onServiceInit;
- (id)getCommonProcessQueue;
- (BOOL)isCloseCommonCache;
- (id)getCommonCacheWithMD5:(id)arg1;
- (BOOL)linkHitCacheFileWithFileMD5:(id)arg1 targetPath:(id)arg2 mediaType:(unsigned int)arg3;
- (BOOL)linkHitCacheFileWithFileMD5:(id)arg1 targetPath:(id)arg2 mediaType:(unsigned int)arg3 consistentSize:(long long)arg4;
- (BOOL)addCacheWithFileMD5:(id)arg1 filePath:(id)arg2 aggregateName:(id)arg3 mediaType:(unsigned int)arg4;
- (void)removeCachesWithAggregateName:(id)arg1;
- (void)removeCachesWithAggregateNames:(id)arg1;
- (void)removeCachesWithFilePath:(id)arg1;
- (void)loadAndDeleteVideoCacheData;
- (BOOL)changeToHardLink:(id)arg1 filePath:(id)arg2 aggregateName:(id)arg3 mediaType:(unsigned int)arg4;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (id)processQueue;
- (void)setProcessQueue:(id)arg1;
- (id)cacheDB;
- (void)setCacheDB:(id)arg1;
- (void).cxx_destruct;
@end
