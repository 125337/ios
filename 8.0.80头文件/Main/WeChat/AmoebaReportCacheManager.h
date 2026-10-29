@interface AmoebaReportCacheManager : NSObject
{
    NSSet * m_cacheLogIdSet; // +0x8
    unsigned long long m_cacheExpireMs; // +0x10
    long long m_cacheFileLimit; // +0x18
    unsigned long long m_lastFlushPauseTimeMsKV; // +0x20
    unsigned long long m_lastFlushPauseTimeMsSDK; // +0x28
    NSNumber * m_lastIsNetworkReachable; // +0x30
}
+ (id)shareInstance;
- (id)init;
- (void)kvReport:(id)arg1 withLogId:(unsigned long long)arg2;
- (void)sdkReport:(id)arg1 withLogId:(unsigned long long)arg2;
- (void)cgiReport:(id)arg1 withLogId:(unsigned long long)arg2;
- (void)loadConfig;
- (BOOL)shouldCacheForLogId:(unsigned long long)arg1;
- (BOOL)isNetworkReachable;
- (BOOL)checkNetworkAndLogIfChangedWithTag:(id)arg1;
- (void)directReport:(id)arg1 logId:(unsigned long long)arg2;
- (id)currentUserDir;
- (id)relativePathForLogId:(unsigned long long)arg1 userDir:(id)arg2 dir:(id)arg3;
- (id)relativeDirForUserDir:(id)arg1 dir:(id)arg2;
- (id)scanLogIdsForUserDir:(id)arg1 dir:(id)arg2;
- (id)readFile:(id)arg1;
- (BOOL)writeFile:(id)arg1 toPath:(id)arg2;
- (BOOL)removeFileAtPath:(id)arg1;
- (id)decodeItem:(id)arg1;
- (id)encodeItem:(id)arg1;
- (id)readQueueForLogId:(unsigned long long)arg1 userDir:(id)arg2 dir:(id)arg3;
- (void)writeQueue:(id)arg1 forLogId:(unsigned long long)arg2 userDir:(id)arg3 dir:(id)arg4;
- (id)purgeExpired:(id)arg1;
- (BOOL)enqueuePendingLocked:(id)arg1 logId:(unsigned long long)arg2 dir:(id)arg3;
- (void)tryFlushLockedWithDir:(id)arg1;
- (unsigned long long)flushUserDir:(id)arg1 dir:(id)arg2 reportedCount:(unsigned long long)arg3;
- (void)cleanLegacyDirsIfNeeded;
- (void).cxx_destruct;
@end
