@interface DataReportPerformanceReport : NSObject
+ (void)reportPageStorage:(id)arg1;
+ (void)reportStackSize:(unsigned long long)arg1;
+ (void)reportSessionStayInfoSize:(unsigned long long)arg1;
+ (void)reportPageStayInfoSize:(unsigned long long)arg1;
+ (void)reportHookFail:(unsigned long long)arg1;
+ (void)reportLengthLimit:(unsigned int)arg1;
+ (void)reportPageRecycle:(id)arg1;
+ (BOOL)isOpenPerformanceReport;
@end
