@interface WCMatrixManager : MMRootService <MatrixManagerReportDelegate, MatrixManagerDelegate, MatrixAdapterDelegate, MXMetricManagerSubscriber, MMServiceProtocol>
{
    WCCrashBlockMonitorPlugin * _crashBlockPlugin; // +0x8
    WCCrashBlockHandler * _crashBlockHandler; // +0x10
    WCMemoryStatPlugin * _memStatPlugin; // +0x18
    WCSQLiteLintPlugin * _sqliteLintPlugin; // +0x20
    WCFPSMonitorPlugin * _fpsMonitorPlugin; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)installMatrix;
- (void)uploadCustomIssue:(id)arg1;
- (id)getCrashBlockMonitorPlugin;
- (id)getMemoryStatPlugin;
- (id)getSQLiteLintPlugin;
- (id)getFPSMonitorPlugin;
- (void)setCurrentUin:(unsigned long long)arg1 andUsrName:(id)arg2;
- (unsigned long long)lastRebootType;
- (BOOL)isLastRebootNormal;
- (void)checkXPCReboot;
- (BOOL)isLastTimeFOOM;
- (BOOL)isLastTimeBOOM;
- (BOOL)isLastForegroundDeadLoop;
- (BOOL)isAfterLastLaunchUserRebootDevice;
- (void)setScene:(id)arg1;
- (void)setWeAppScene:(id)arg1;
- (void)setLiteAppScene:(id)arg1;
- (void)setLiteAppExtraInfo:(id)arg1;
- (void)setExistWeAppCount:(int)arg1;
- (void)decreaseExistWeAppCount;
- (BOOL)setRunloopThreshold:(unsigned int)arg1;
- (BOOL)lowerRunloopThreshold;
- (BOOL)recoverRunloopThreshold;
- (void)setShouldSuspendAllThreads:(BOOL)arg1;
- (BOOL)lowerCPUUsage;
- (BOOL)recoverCPUUsage;
- (unsigned int)lastJSCType;
- (BOOL)matrixShouldLog:(int)arg1;
- (void)matrixLog:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (unsigned int)onGetMatrixReportProductID;
- (unsigned int)onGetMatrixReportVersion;
- (unsigned int)onGetMatrixReportUin;
- (id)onGetMatrixReportUserName;
- (id)onGetMatrixReportHost;
- (id)onGetMatrixReportURL;
- (id)onGetReportCryptKeyWithVersion:(unsigned int)arg1 withDataSize:(unsigned int)arg2;
- (void)onMatrixManager:(id)arg1 beginUploadLagIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleLagIssue:(id)arg2 success:(BOOL)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadCrashIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleCrashIssue:(id)arg2 success:(BOOL)arg3;
- (void)onMatrixManager:(id)arg1 handleCrashIssueError:(id)arg2;
- (void)onMatrixManager:(id)arg1 beginUploadMemoryStatIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleMemoryStatIssue:(id)arg2 success:(BOOL)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadSqliteLintIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleSqliteLintIssue:(id)arg2 success:(BOOL)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadCustomIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleCustomIssue:(id)arg2 success:(BOOL)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadCoreDumpIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleCoreDumpIssue:(id)arg2 success:(BOOL)arg3;
- (BOOL)onMatrixManagerCurrentNetworkOnWifi:(id)arg1;
- (BOOL)onMatrixManagerSupportCustomLagStrategy;
- (void)handleBackgroundLaunch;
- (void)handleSuspend;
- (void)handleFirstBecomeActive;
- (void)registerMetricKit;
- (void)unregisterMetricKit;
- (void)didReceiveMetricPayloads:(id)arg1;
- (id)p_getReportLogOfHistogram:(id)arg1;
- (void)p_reportKVDataOfMetricPayLoad:(id)arg1;
- (void)didReceiveDiagnosticPayloads:(id)arg1;
- (id)crashBlockPlugin;
- (void)setCrashBlockPlugin:(id)arg1;
- (id)crashBlockHandler;
- (void)setCrashBlockHandler:(id)arg1;
- (id)memStatPlugin;
- (void)setMemStatPlugin:(id)arg1;
- (id)sqliteLintPlugin;
- (void)setSqliteLintPlugin:(id)arg1;
- (id)fpsMonitorPlugin;
- (void)setFpsMonitorPlugin:(id)arg1;
- (void).cxx_destruct;
@end

