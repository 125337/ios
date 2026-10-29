@interface WCAdvertiseRecStatLogic : NSObject
+ (unsigned int)getExposureCgiFuncBySrc:(long long)arg1;
+ (unsigned int)getClickCgiFuncBySrc:(long long)arg1;
+ (void)reportADLog:(unsigned int)arg1 logExt:(id)arg2 source:(long long)arg3;
+ (BOOL)shouldForbidReportLogId:(unsigned int)arg1 bySrc:(long long)arg2;
+ (unsigned int)getRealLogId:(unsigned int)arg1 bySrc:(long long)arg2;
+ (BOOL)shouldReportByAdlogCgi:(unsigned int)arg1;
@end
