@interface WCGetCallStackReportHandler : NSObject
+ (id)getCustomReportInfoWithReportID:(id)arg1;
+ (id)getReportJsonDataWithCallStackString:(id)arg1 withReportID:(id)arg2 withDumpType:(unsigned long long)arg3 withScene:(id)arg4;
+ (id)getReportJsonDataWithPowerConsumeStack:(id)arg1 withReportID:(id)arg2 withDumpType:(unsigned long long)arg3;
+ (id)getReportJsonDataWithDiskIOStack:(id)arg1 withCustomInfo:(id)arg2 withReportID:(id)arg3 withDumpType:(unsigned long long)arg4;
+ (id)getReportJsonDataWithFPSStack:(id)arg1 withCustomInfo:(id)arg2 withReportID:(id)arg3 withDumpType:(unsigned long long)arg4;
+ (id)getReportJsonDataWithCustomInfo:(id)arg1 withCustomKey:(id)arg2 withReportID:(id)arg3 withDumpType:(unsigned long long)arg4;
@end
