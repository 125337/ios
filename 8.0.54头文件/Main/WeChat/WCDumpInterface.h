@interface WCDumpInterface : NSObject
+ (id)dumpReportWithReportType:(unsigned long long)arg1 suspendAllThreads:(BOOL)arg2 enableSnapshot:(BOOL)arg3 writeCpuUsage:(BOOL)arg4;
+ (id)dumpReportWithReportType:(unsigned long long)arg1 withExceptionReason:(id)arg2 suspendAllThreads:(BOOL)arg3 enableSnapshot:(BOOL)arg4 writeCpuUsage:(BOOL)arg5 selfDefinedPath:(BOOL)arg6;
+ (id)saveDump:(id)arg1 withReportType:(unsigned long long)arg2 withReportID:(id)arg3;
+ (id)genFilePathWithReportType:(unsigned long long)arg1;
+ (id)genFilePathWithReportType:(unsigned long long)arg1 withReportID:(id)arg2;
@end

