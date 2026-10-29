@interface WCFinderRedDotFeatureMMKV : NSObject
{
    NSMutableArray * _openWXActionArray; // +0x8
    NSMutableArray * _backgroundTsArray; // +0x10
    NSMutableArray * _foregroundTsArray; // +0x18
    NSMutableDictionary * _businessClickWithoutRedDotDic; // +0x20
    NSMutableDictionary * _businessClickWithRedDotDic; // +0x28
    NSMutableDictionary * _businessClickStay3sDic; // +0x30
    NSMutableDictionary * _businessStayDurationDic; // +0x38
    NSMutableDictionary * _businessRedDotExposeTsDic; // +0x40
    NSMutableDictionary * _businessNoneRedDotExposeTsDic; // +0x48
    NSMutableDictionary * _wcvm_businessReceiveRedDotDic; // +0x50
    NSMutableArray * _findPageClickArray; // +0x58
    NSMutableArray * _findPageExposeArray; // +0x60
    NSMutableDictionary * _simpleArrayAllIntervalCacheDic; // +0x68
    NSMutableDictionary * _simpleArrayCacheTimestampDic; // +0x70
    NSMutableDictionary * _simpleDicAllIntervalCacheDic; // +0x78
    NSMutableDictionary * _simpleDicCacheTimestampDic; // +0x80
    NSMutableDictionary * _businessStayDurationAllIntervalCacheDic; // +0x88
    NSMutableDictionary * _businessStayDurationCacheTimestampDic; // +0x90
    WCFinderRedDotServerFeatureMMKV * _serverFeatureMMKV; // +0x98
}
+ (long long)calcSameHourArrayContainer:(id)arg1 daysOffset:(long long)arg2;
+ (unsigned long long)lowerBoundInArray:(id)arg1 value:(double)arg2;
+ (id)calcAllIntervalsForContainer:(id)arg1;
- (id)init;
- (id)defaultMMKVMapID;
- (id)getFeatureMMKV;
- (id)findPageExposeArray;
- (id)findPageClickArray;
- (id)businessRedDotExposeTsDic;
- (id)businessNoneRedDotExposeTsDic;
- (id)businessClickWithoutRedDotDic;
- (id)businessClickWithRedDotDic;
- (id)businessClickStay3sDic;
- (id)businessStayDurationDic;
- (id)openWXActionArray;
- (id)backgroundTsArray;
- (BOOL)isCacheExpired:(id)arg1;
- (id)getCachedAllIntervalsWithDicCacheType:(id)arg1 sourceDic:(id)arg2 key:(id)arg3;
- (id)getCachedAllIntervalsWithSimpleArrayKey:(id)arg1 sourceArray:(id)arg2;
- (id)foregroundTsArray;
- (id)businessReceiveRedDotDic;
- (void)markOpenWXAction;
- (long long)getOpenWXActionBy:(int)arg1;
- (void)markBackgroundAction;
- (long long)getBackgroundActionBy:(int)arg1;
- (id)getBackgroundActionAllIntervals;
- (void)markForegroundAction;
- (long long)getForegroundActionBy:(int)arg1;
- (void)markExitBusinessType:(int)arg1;
- (double)getExitIntervalBusinessType:(int)arg1;
- (void)markClickFindPageRedDotEnvironmentBusinessType:(int)arg1 hasRedDot:(BOOL)arg2;
- (void)markClickStay3sBusinessType:(int)arg1;
- (void)markClickBusinessTypeWithoutRedDotType:(int)arg1;
- (long long)getClickWithoutRedDotBusinessTypeFromType:(int)arg1 intervalType:(int)arg2;
- (id)getClickArrayWithoutRedDotBusinessTypeFromType:(int)arg1;
- (void)markClickBusinessTypeWithRedDotType:(int)arg1;
- (long long)getClickWithRedDotBusinessTypeFromType:(int)arg1 intervalType:(int)arg2;
- (long long)getClickStay3sBusinessTypeFromType:(int)arg1 intervalType:(int)arg2;
- (id)getClickArrayWithRedDotBusinessTypeFromType:(int)arg1;
- (void)markBusinessStayDuration:(int)arg1 stayDuration:(long long)arg2;
- (long long)getBusinessStayDurationFromType:(int)arg1 intervalType:(int)arg2;
- (void)markClickBusinessRedDotConsumeType:(int)arg1;
- (long long)getLastBusinessRedDotConsumeFromType:(int)arg1;
- (void)markBusinessRedDotExposeType:(int)arg1;
- (void)markBusinessNoneRedDotExposeType:(int)arg1;
- (long long)getLastBusinessRedDotExposeFromType:(int)arg1;
- (long long)getBusinessRedDotExposeCountFromType:(int)arg1 intervalType:(int)arg2;
- (long long)getEarliestBusinessRedDotExposeTimeStamp;
- (void)markFindPageClickAction;
- (long long)getFindPageClickCountByIntervalType:(int)arg1;
- (void)markFindPageExposeAction;
- (long long)getFindPageExposeCountByIntervalType:(int)arg1;
- (void)markBusinessReceiveRedDot:(int)arg1;
- (long long)getBusinessReceiveRedDotCountByType:(int)arg1 intervalType:(int)arg2;
- (id)getBusinessRedDotExposeInSameHourFromType:(int)arg1;
- (id)getBusinessRedDotClickInSameHourFromType:(int)arg1;
- (id)getSameHourCountsFromArray:(id)arg1;
- (unsigned long long)getBusinessRedDotClickBitmapFromType:(int)arg1;
- (long long)getBusinessNoneRedDotExposeCountFromType:(int)arg1 intervalType:(int)arg2;
- (id)getBusinessNoneRedDotCtrArrayFromType:(int)arg1;
- (double)getBusinessNoneRedDotCtrFromType:(int)arg1 intervalType:(int)arg2;
- (double)getBusinessWithRedDotCtrFromType:(int)arg1 intervalType:(int)arg2;
- (double)getBusinessCtrFromType:(int)arg1 intervalType:(int)arg2;
- (double)calcCTRWithClickCount:(long long)arg1 exposeCount:(long long)arg2;
- (void)constraintContainerCount;
- (id)getOpenWXActionAllIntervals;
- (id)getForegroundActionAllIntervals;
- (id)getFindPageClickCountAllIntervals;
- (id)getFindPageExposeCountAllIntervals;
- (id)getBusinessRedDotExposeCountAllIntervalsFromType:(int)arg1;
- (id)getBusinessNoneRedDotExposeCountAllIntervalsFromType:(int)arg1;
- (id)getClickWithoutRedDotCountAllIntervalsFromType:(int)arg1;
- (id)getClickWithRedDotCountAllIntervalsFromType:(int)arg1;
- (id)getClickStay3sCountAllIntervalsFromType:(int)arg1;
- (id)getBusinessReceiveRedDotCountAllIntervalsFromType:(int)arg1;
- (id)getStayDurationAllIntervalsFromType:(int)arg1;
- (void)constraintArray:(id)arg1 maxCount:(long long)arg2 key:(id)arg3;
- (void)constraintDictionary:(id)arg1 maxCount:(long long)arg2 key:(id)arg3;
- (void)mergeServerFeatureFromSvrHistoryRecords:(id)arg1 updateTime:(long long)arg2;
- (BOOL)needsServerFeatureBootstrap;
- (id)_allIntervalsFromServerDayDict:(id)arg1;
- (id)_mergedAllIntervalsWithLocal:(id)arg1 serverDayDict:(id)arg2;
- (void)setOpenWXActionArray:(id)arg1;
- (void)setBackgroundTsArray:(id)arg1;
- (void)setForegroundTsArray:(id)arg1;
- (void)setBusinessClickWithoutRedDotDic:(id)arg1;
- (void)setBusinessClickWithRedDotDic:(id)arg1;
- (void)setBusinessClickStay3sDic:(id)arg1;
- (void)setBusinessStayDurationDic:(id)arg1;
- (void)setBusinessRedDotExposeTsDic:(id)arg1;
- (void)setBusinessNoneRedDotExposeTsDic:(id)arg1;
- (id)wcvm_businessReceiveRedDotDic;
- (void)setWcvm_businessReceiveRedDotDic:(id)arg1;
- (void)setFindPageClickArray:(id)arg1;
- (void)setFindPageExposeArray:(id)arg1;
- (id)simpleArrayAllIntervalCacheDic;
- (void)setSimpleArrayAllIntervalCacheDic:(id)arg1;
- (id)simpleArrayCacheTimestampDic;
- (void)setSimpleArrayCacheTimestampDic:(id)arg1;
- (id)simpleDicAllIntervalCacheDic;
- (void)setSimpleDicAllIntervalCacheDic:(id)arg1;
- (id)simpleDicCacheTimestampDic;
- (void)setSimpleDicCacheTimestampDic:(id)arg1;
- (id)businessStayDurationAllIntervalCacheDic;
- (void)setBusinessStayDurationAllIntervalCacheDic:(id)arg1;
- (id)businessStayDurationCacheTimestampDic;
- (void)setBusinessStayDurationCacheTimestampDic:(id)arg1;
- (id)serverFeatureMMKV;
- (void)setServerFeatureMMKV:(id)arg1;
- (void).cxx_destruct;
@end
