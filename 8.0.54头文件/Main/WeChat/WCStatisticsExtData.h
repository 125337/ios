@interface WCStatisticsExtData : MMObject
+ (id)convertExtStr2Info:(id)arg1;
+ (id)convertExtInfo2Str:(id)arg1;
+ (BOOL)isVaildAdWithStatExtStr:(id)arg1;
+ (id)mergeStatStrWithOldStatStr:(id)arg1 appId:(id)arg2;
@end

