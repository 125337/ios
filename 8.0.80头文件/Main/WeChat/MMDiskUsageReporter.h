@interface MMDiskUsageReporter : NSObject <IDiskUsageMgr>
{
    BOOL _isRunning; // +0x8
    NSObject<OS_dispatch_queue> * _workQueue; // +0x10
    id <MMDiskUsageRepoterDelegate> _delegate; // +0x18
    NSDictionary * _sizeReportIdKeyInfoDic; // +0x20
    NSDictionary * _fileNumReportIdKeyInfoDic; // +0x28
}
+ (id)regularExpressionsThatLogFilesToKV;
- (void)reportAggregationsByDayInterval:(id)arg1;
- (void)reportFolders;
- (void)report;
- (void)onDiskUsageMgrFinishOneScan:(id)arg1;
- (void)handleScanStat:(id)arg1;
- (void)reportChatLog:(id)arg1;
- (void)asyncReportAccountInfo;
- (void)reportOnThread:(id)arg1;
- (void)removeReportDataFile;
- (void)callReportFinishedOnMainThread;
- (void)reportFileSize:(unsigned int)arg1 andFileNum:(unsigned int)arg2 toBizType:(long long)arg3 vecIDKey:(void *)arg4;
- (void)reportDelFileToIDKey:(id)arg1 vecIDKey:(void *)arg2;
- (void)setupReportInfo;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sizeReportIdKeyInfoDic;
- (void)setSizeReportIdKeyInfoDic:(id)arg1;
- (id)fileNumReportIdKeyInfoDic;
- (void)setFileNumReportIdKeyInfoDic:(id)arg1;
- (void).cxx_destruct;
@end
