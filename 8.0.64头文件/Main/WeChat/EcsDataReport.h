@interface EcsDataReport : NSObject
+ (void)reportEcsDataWithEventId:(id)arg1 eventName:(id)arg2 params:(id)arg3 target:(id)arg4;
+ (void)reportEcsShareDataWithCardId:(id)arg1 bizReportData:(id)arg2 scene:(unsigned long long)arg3 event:(unsigned long long)arg4 target:(id)arg5;
+ (void)reportEcsCardDataWithEventId:(id)arg1 eventName:(id)arg2 cardId:(id)arg3 shareUsrName:(id)arg4 bizReportData:(id)arg5 scene:(unsigned long long)arg6 target:(id)arg7;
+ (id)eventIdForEvent:(unsigned long long)arg1;
@end
