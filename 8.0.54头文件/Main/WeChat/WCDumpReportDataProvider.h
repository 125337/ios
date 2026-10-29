@interface WCDumpReportDataProvider : NSObject
+ (id)getTodayOneReportDataWithLimitType:(id)arg1 withLimitReportID:(id)arg2;
+ (id)getAllTypeReportDataWithDate:(id)arg1;
+ (id)getReportDataWithType:(unsigned long long)arg1 onDate:(id)arg2;
+ (id)getDumpReportDataWithDumpType:(unsigned long long)arg1;
+ (id)getDumpReportDataWithDumpType:(unsigned long long)arg1 withDate:(id)arg2;
+ (id)getDumpReportDataWithDumpType:(unsigned long long)arg1 withDate:(id)arg2 withLimitReportIDs:(id)arg3;
@end

