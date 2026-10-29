@interface WXGRoamImportPerfStat : NSObject
+ (void)setupPerfStat;
+ (double)nowMs;
+ (id)sortedIntervals;
+ (void)mark:(id)arg1 taskId:(unsigned long long)arg2;
+ (void)mark:(id)arg1 taskId:(unsigned long long)arg2 convId:(id)arg3;
+ (void)markFinishBegin;
+ (void)markFinishEndAndDump;
@end
