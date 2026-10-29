@interface WCCrashBlockFileHandler : NSObject
+ (id)getPendingCrashReportInfoWithError:(id *)arg1;
+ (id)loadPendingCrashReportID;
+ (id)getAllCrashReportPath;
+ (id)getAllCrashReportID;
+ (BOOL)hasCrashReport;
+ (void)deleteCrashDataWithReportID:(id)arg1;
+ (BOOL)p_isCrashReportID:(id)arg1;
+ (id)diretoryOfUserDump;
+ (id)diretoryOfUserDumpWithType:(unsigned long long)arg1;
+ (id)getLagReportIDWithType:(unsigned long long)arg1 withDate:(id)arg2;
+ (id)getLagReportIDWithType:(unsigned long long)arg1 withDate:(id)arg2 withLimitReportID:(id)arg3;
+ (id)getLagDataWithReportIDArray:(id)arg1 andReportType:(unsigned long long)arg2;
+ (id)getLagDataWithReportID:(id)arg1 andReportType:(unsigned long long)arg2;
+ (void)deleteLagDataWithReportID:(id)arg1 andReportType:(unsigned long long)arg2;
+ (id)p_getFileSuffixWithType:(unsigned long long)arg1 withDate:(id)arg2;
+ (BOOL)haveLagFiles;
+ (BOOL)haveLagFilesOnDate:(id)arg1;
+ (BOOL)haveLagFilesOnType:(unsigned long long)arg1;
+ (BOOL)haveLagFilesOnDate:(id)arg1 onType:(unsigned long long)arg2;
+ (id)getLaunchBlockRecordFilePath;
+ (id)getStackFeatFilePath;
+ (void)handleOOMDumpFile:(id)arg1;
+ (id)getCoreDumpWithReportID:(id)arg1 andReportType:(unsigned long long)arg2;
+ (id)getAllCoreDumpIDs;
@end

