@interface FTSTopHitDynamicUtil : NSObject
+ (unsigned int)GetTopHitItemSurvivalDays;
+ (unsigned int)GetLeastDisplayScore;
+ (unsigned int)GetMaxDivScore;
+ (unsigned int)CalRaiseScore:(unsigned int)arg1;
+ (unsigned int)CalDeclineScore:(unsigned int)arg1;
+ (unsigned int)CalDeclineScoreForMMGroup:(unsigned int)arg1;
+ (BOOL)isSupportTopHitRemoval;
+ (void)PrintLogs;
+ (int)ParseScoreInterval:(unsigned int)arg1;
@end
