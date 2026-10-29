@interface MMMetricsDB : NSObject
{
    NSString * m_rootPath; // +0x8
    MMMetricsRootDB * m_rootDB; // +0x10
    MMMetricsRecordDB * m_recordDB; // +0x18
    MMMetricsNetworkDB * m_networkDB; // +0x20
}
- (id)initWithRootPath:(id)arg1 launchTime:(unsigned long long)arg2;
- (id)rootDBPath;
- (id)recordDBPath:(unsigned long long)arg1;
- (id)networkDBPath:(unsigned long long)arg1;
- (id)currentRecordDB;
- (id)currentNetworkDB;
- (id)openRecordDB:(unsigned long long)arg1;
- (id)openNetworkDB:(unsigned long long)arg1;
- (void)deleteRecordDB:(unsigned long long)arg1;
- (void)deleteAllDB:(unsigned long long)arg1;
- (void)vacuumCleaner;
- (void)prepareUpload;
- (id)getAllAppRunningInfos;
- (BOOL)insertOrUpdateAppRunningInfo:(id)arg1;
- (BOOL)deleteAppRunningInfo:(id)arg1;
- (void).cxx_destruct;
@end

