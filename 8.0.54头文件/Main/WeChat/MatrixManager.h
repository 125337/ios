@interface MatrixManager : NSObject <MatrixPluginListenerDelegate, WCReportStrategyDelegate>
{
    id <MatrixManagerDelegate> _delegate; // +0x8
    id <MatrixManagerReportDelegate> _matrixReportDelegate; // +0x10
    unsigned long long _strategyUin; // +0x18
    NSObject<OS_dispatch_queue> * _reporterQueue; // +0x20
    NSMutableDictionary * _reportIssueDict; // +0x28
    Matrix * _matrix; // +0x30
    MatrixStrategyIDCache * _strategyIDCache; // +0x38
}
+ (void)setUinForStrategy:(unsigned long long)arg1;
+ (void)updateStrategy:(id)arg1 forTag:(id)arg2;
+ (BOOL)strategyIsAutoReportForTag:(id)arg1;
+ (BOOL)startegyIsMaxUploadCntForTag:(id)arg1;
+ (void)strategyUpdateUploadCnt:(int)arg1 forTag:(id)arg2;
+ (unsigned long long)strategyReportEnvForTag:(id)arg1;
+ (id)getCrashReportStrategyTag;
+ (id)sharedInstance;
+ (void)setMatrixCacheRootPath:(id)arg1;
+ (void)enableLocalSymbolicate;
+ (id)formatReportIDFromDumpFilePath:(id)arg1;
- (unsigned int)getReportProductID;
- (id)getReportCryptKeyWithVersion:(unsigned int)arg1 withDataSize:(unsigned int)arg2;
- (unsigned int)getReportUin;
- (unsigned int)getReportAppVersion;
- (id)getReportUserName;
- (id)getReportHost;
- (id)getReportURL;
- (id)getReportCachePath;
- (void)updateCrashReportStrategyWithReportLimitCount:(unsigned long long)arg1;
- (void)incrementCrashReportUploadCount:(int)arg1;
- (BOOL)isCrashReportUploadCountLimit;
- (void)updateLagReportStartegyWithPluginTag:(id)arg1 withSampleRatio:(float)arg2 withReportLimitCount:(unsigned long long)arg3 withNetworkEnv:(unsigned long long)arg4;
- (void)updateVipLagReportStartegyWithPluginTag:(id)arg1 withSampleRatio:(float)arg2 withReportLimitCount:(unsigned long long)arg3 withNetworkEnv:(unsigned long long)arg4 withTimeout:(unsigned long long)arg5;
- (BOOL)canAutoLagReport:(id)arg1;
- (BOOL)isCurrentNetworkAllowLagReport:(id)arg1;
- (void)incrementLagReportUploadCount:(int)arg1 pluginTag:(id)arg2;
- (BOOL)isLagReportUploadCountLimit:(id)arg1;
- (id)init;
- (void)installWithBuilder:(id)arg1;
- (id)getCrashBlockPlugin;
- (id)getFPSMonitorPlugin;
- (void)setStrategyUin:(unsigned long long)arg1;
- (unsigned long long)lastRebootType;
- (BOOL)isAfterLastLaunchUserRebootDevice;
- (BOOL)checkXPCReboot;
- (void)setUserScene:(id)arg1;
- (void)onInit:(id)arg1;
- (void)onStart:(id)arg1;
- (void)onStop:(id)arg1;
- (void)onDestroy:(id)arg1;
- (void)onError:(id)arg1 error:(id)arg2;
- (void)onReportIssue:(id)arg1;
- (void)uploadMatrixIssueCompleted:(BOOL)arg1 withIssueID:(id)arg2;
- (BOOL)uploadMatrixIssue:(id)arg1;
- (int)getIssueTypeOfMatrixIssue:(id)arg1;
- (void)uploadCustomIssue:(id)arg1;
- (void)notifyAppBackgroundFetch;
- (void)notifyAppWillSuspend;
- (BOOL)isReportCrashLimit:(id)arg1;
- (BOOL)isReportLagLimit:(id)arg1;
- (BOOL)isCanAutoReportLag:(id)arg1;
- (BOOL)isNetworkAllowAutoReportLag:(id)arg1;
- (BOOL)isReportSupportCustomLagStrategy;
- (BOOL)isReportCustomLagLimit:(id)arg1 customStrategy:(id)arg2;
- (BOOL)isCanCustomAutoReportLag:(id)arg1 customStrategy:(id)arg2;
- (id)tryGetMatrixReportCustomLagLimitReportIDs:(id)arg1;
- (void)p_callUploadCrashIssueDelegate:(id)arg1;
- (void)p_callCrashIssueDelegate:(id)arg1 success:(BOOL)arg2;
- (void)p_callCrashIssueErrorDelegate:(id)arg1;
- (void)p_callUploadLagIssueDelegate:(id)arg1;
- (void)p_callLagIssueDelegate:(id)arg1 success:(BOOL)arg2;
- (void)p_callUploadMemStatIssueDelegate:(id)arg1;
- (void)p_callMemoryStatIssueDelegate:(id)arg1 success:(BOOL)arg2;
- (void)p_callUploadSqliteLintIssueDelegate:(id)arg1;
- (void)p_callSqliteLintDelegate:(id)arg1 success:(BOOL)arg2;
- (void)p_callUploadCustomIssueDelegate:(id)arg1;
- (void)p_callCustomIssueDelegate:(id)arg1 success:(BOOL)arg2;
- (void)p_callUploadCoreDumpIssueDelegate:(id)arg1;
- (void)p_callCoreDumpIssueDelegate:(id)arg1 success:(BOOL)arg2;
- (BOOL)p_isReportSupportCustomLagStrategy;
- (void)addReportID:(id)arg1 forStrategy:(id)arg2;
- (id)getReportIDForStrategy:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)matrixReportDelegate;
- (void)setMatrixReportDelegate:(id)arg1;
- (unsigned long long)strategyUin;
- (id)reporterQueue;
- (void)setReporterQueue:(id)arg1;
- (id)reportIssueDict;
- (void)setReportIssueDict:(id)arg1;
- (id)matrix;
- (void)setMatrix:(id)arg1;
- (id)strategyIDCache;
- (void)setStrategyIDCache:(id)arg1;
- (void).cxx_destruct;
@end

