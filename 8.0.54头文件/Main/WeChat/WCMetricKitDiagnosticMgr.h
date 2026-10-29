@interface WCMetricKitDiagnosticMgr : MMRootService <IMatrixCustomIssueExt, MMServiceProtocol>
{
    BOOL _crashShouldReport; // +0x8
    BOOL _hangShouldReport; // +0x9
    BOOL _cpuExceptionShouldReport; // +0xa
    BOOL _diskWriteExceptionShouldReport; // +0xb
    BOOL _appLaunchShouldReport; // +0xc
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    NSMutableSet * _uploadingFiles; // +0x18
    NSDateFormatter * _dateFormatter; // +0x20
    NSDateFormatter * _timeFormatter; // +0x28
}
+ (void)enableForceReportForLastTermination;
+ (void)updateVoipInfo:(int)arg1 lastVoipTimestamp:(double)arg2;
- (void)onServiceInit;
- (void)didReceiveDiagnosticPayload:(id)arg1;
- (void)p_didReceiveDiagnosticPayload:(id)arg1;
- (void)didReceiveDiagnostic:(id)arg1 dumpType:(unsigned long long)arg2 extraInfo:(id)arg3;
- (void)saveDiagnostic:(id)arg1 dumpType:(unsigned long long)arg2 extraInfo:(id)arg3;
- (void)addExtraInfo:(id)arg1 timeStampEnd:(id)arg2;
- (void)addUserInfo:(id)arg1;
- (id)deviceInfo;
- (id)processInfo;
- (id)memoryInfo;
- (id)timeInfo;
- (id)heavyUserInfo;
- (id)voipInfo:(double)arg1;
- (unsigned int)reviseClientVersion:(double)arg1;
- (BOOL)isUnawareCrash:(id)arg1;
- (id)byteToMegabyte:(unsigned long long)arg1;
- (id)getStringOfExceptionType:(id)arg1;
- (id)getStringOfSignal:(id)arg1;
- (void)uploadWithDate:(id)arg1;
- (void)uploadWithDate:(id)arg1 forceAll:(BOOL)arg2;
- (void)upload:(id)arg1;
- (void)onCustomIssue:(id)arg1 uploadComplete:(BOOL)arg2;
- (void)autoClean;
- (BOOL)shouldReport:(unsigned long long)arg1;
- (void)logSavedDiagnostic:(unsigned long long)arg1;
- (void)logUploadingDiagnostic:(unsigned long long)arg1;
- (void)logUploadedDiagnostic:(unsigned long long)arg1;
- (id)getDiagnosticDirectory;
- (id)generateFilePathWithType:(unsigned long long)arg1 ReportID:(id)arg2;
- (unsigned long long)getDumpType:(id)arg1;
- (id)getFileName:(id)arg1;
- (int)enumerate:(id)arg1;
- (int)recursivelyEnumerateStackFrame:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)uploadingFiles;
- (void)setUploadingFiles:(id)arg1;
- (id)dateFormatter;
- (void)setDateFormatter:(id)arg1;
- (id)timeFormatter;
- (void)setTimeFormatter:(id)arg1;
- (BOOL)crashShouldReport;
- (void)setCrashShouldReport:(BOOL)arg1;
- (BOOL)hangShouldReport;
- (void)setHangShouldReport:(BOOL)arg1;
- (BOOL)cpuExceptionShouldReport;
- (void)setCpuExceptionShouldReport:(BOOL)arg1;
- (BOOL)diskWriteExceptionShouldReport;
- (void)setDiskWriteExceptionShouldReport:(BOOL)arg1;
- (BOOL)appLaunchShouldReport;
- (void)setAppLaunchShouldReport:(BOOL)arg1;
- (void).cxx_destruct;
@end

