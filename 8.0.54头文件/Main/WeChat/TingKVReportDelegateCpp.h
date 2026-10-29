@interface TingKVReportDelegateCpp : UnitRCObjcBaseProxyClass <TingKVReportDelegate>
- (void)kvStatData:(id)arg1;
- (void)kvStat:(int)arg1 value:(id)arg2 isReportNow:(BOOL)arg3 isImportant:(BOOL)arg4 ignoreFreqLimit:(BOOL)arg5;
- (void)idKeyStat:(int)arg1 key:(int)arg2 value:(int)arg3 isImportant:(int)arg4;
@end

