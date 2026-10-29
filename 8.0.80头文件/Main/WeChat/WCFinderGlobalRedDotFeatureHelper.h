@interface WCFinderGlobalRedDotFeatureHelper : NSObject
{
    BOOL _clickWithRedDot; // +0x8
    BOOL _hasUpdate; // +0x9
    WCFinderRedDotFeatureMMKV * _mmkvKeyModel; // +0x10
    NSArray * _cachedFeatureIndexArray; // +0x18
    NSArray * _cachedFeatureArray; // +0x20
    double _lastFeatureGenTime; // +0x28
    id /* block */ _clickFeatureStayUpdateBlock; // +0x30
    NSString * _findPageSessionId; // +0x38
    NSMutableArray * _actionSequenceArray; // +0x40
    ContactsDataLogic * _contactLogic; // +0x48
    NSMutableDictionary * _reddotInfoDic; // +0x50
    NSMutableDictionary * _currentReddotInfoDic; // +0x58
    WCFinderRedDotFeatureKeyCache * _keyCache; // +0x60
    long long _findPageQuotaClickCount; // +0x68
    NSMutableDictionary * _cacheFeatureDictionary; // +0x70
    long long _selfWxFriendCount; // +0x78
    NSMutableDictionary * _reddotExposeCountDic; // +0x80
    NSMutableDictionary * _lastPeriodExposeIntervalDic; // +0x88
    NSMutableDictionary * _noneReddotExposeCountDic; // +0x90
    NSMutableDictionary * _noneReddotCtrValueDic; // +0x98
    NSMutableDictionary * _exposeReddotGapDic; // +0xa0
    NSString * _clickFindTabCountCacheContent; // +0xa8
    NSString * _findTabExposeCountCacheContent; // +0xb0
    NSString * _userActionSequenceCacheContent; // +0xb8
    NSString * _backWxCountCacheContent; // +0xc0
    NSString * _foreWxCountCacheContent; // +0xc8
    long long _findPageQuotaClickCacheCount; // +0xd0
}
+ (long long)getWeekdayNumber;
+ (float)currentBatteryLevel;
+ (BOOL)isDeviceCharging;
+ (int)getNetType;
+ (float)currentSystemVolume;
+ (float)currentScreenBrightness;
+ (id)currentAudioOutputPort;
+ (BOOL)isLowPowerModeEnabled;
+ (CGSize)currentScreenSizeInPoints;
+ (id)currentDeviceModelIdentifier;
+ (long long)totalDiskSpaceInBytes;
+ (id)formattedTotalSpace;
+ (long long)freeDiskSpaceInBytes;
+ (id)formattedFreeSpace;
+ (int)convertRedDotPathToBusinessType:(id)arg1;
+ (int)convertFromFindBusinessType:(unsigned long long)arg1;
+ (id)convertFindBusinessArrayToFeatureBusiness:(id)arg1;
+ (id)convertRedDotBusinessTypeToPath:(int)arg1;
+ (unsigned long long)convertRedDotBusinessTypeToRowType:(int)arg1;
+ (int)convertBusinessTypeFromRowType:(unsigned long long)arg1;
+ (double)timeIntervalForType:(int)arg1;
+ (int)convertPageIdromRowType:(unsigned long long)arg1;
+ (BOOL)isTodayWeekend;
+ (BOOL)isTomorrowWeekend;
+ (long long)currentHour;
+ (id)specialDateStrings;
+ (BOOL)isDateASpecialDate:(id)arg1;
+ (BOOL)isTodayASpecialDate;
+ (BOOL)isTomorrowASpecialDate;
+ (id)cityLevelDictionary;
+ (long long)getCityLevel:(id)arg1;
+ (id)sharedFeatureReportQueue;
+ (id)businessTypeMappingBy:(int)arg1;
+ (long long)getIntervalIndex:(id)arg1;
- (id)init;
- (void)restoreFeatureCreateTsByHistoryFeature;
- (id)reddotInfoDic;
- (id)currentReddotInfoDic;
- (id)contactLogic;
- (long long)getFindPageBusinessCount;
- (long long)getFindPageRedDotBusinessCount;
- (long long)getFindPageEntryWithRedDotCount;
- (long long)getFindPageEntryWithRedDotCountWithoutFrequencyLimit;
- (BOOL)isOpenTeenagerMode;
- (long long)getWXFriendCount;
- (BOOL)todayIsHoliday;
- (BOOL)tomorrowIsHoliday;
- (void)markFindPageClickAction;
- (void)updateFindPageSessionId;
- (void)resetUpdateState;
- (void)updateRedDotExposeStateOnly:(id)arg1;
- (void)anchorFeatureState:(id)arg1;
- (void)snapshotAnchoredFeatureStateToModel:(id)arg1;
- (void)markRedDotExposeState;
- (void)updateCurrentRedDotExposeState;
- (BOOL)todayIsWeekend;
- (BOOL)tomorrowIsWeekend;
- (BOOL)todayIsLegalHolidays;
- (BOOL)tomorrowIsLegalHolidays;
- (long long)hourValue;
- (void)markClickSequenceAction:(int)arg1;
- (id)getRecentClickSequenceList;
- (BOOL)targetBusinessIsOpen:(int)arg1;
- (long long)targetBusinessIndex:(int)arg1;
- (void)_mergeFeatureForModel:(id)arg1 predictFeatureModel:(id)arg2;
- (void)_mergeFeatureForModelWithCurrentRedDot:(id)arg1 predictFeatureModel:(id)arg2;
- (void)_mergeCommonFeatureModel:(id)arg1 predictFeatureModel:(id)arg2;
- (BOOL)targetBusinessEntryHasRedDotAsFindPageExpose:(int)arg1 predictFeatureModel:(id)arg2;
- (id)getBusinessRedDotCtrValueArrayListFromClickArray:(id)arg1 exposeArray:(id)arg2;
- (id)getBusinessRedDotExposeArrayListFromType:(int)arg1;
- (id)getBusinessNoneRedDotExposeArrayListFromType:(int)arg1;
- (id)getClickWithRedDotArrayListFromType:(int)arg1;
- (id)getClickWithoutRedDotArrayListFromType:(int)arg1;
- (id)getClickStay3sArrayListFromType:(int)arg1;
- (id)getStayDurationArrayListFromType:(int)arg1;
- (id)getSnsBusinessFeatureInfoWithPredictFeatureModel:(id)arg1;
- (id)getFinderBusinessFeatureInfoWithPredictFeatureModel:(id)arg1;
- (id)getLiveBusinessFeatureInfoWithPredictFeatureModel:(id)arg1;
- (id)getTingBusinessFeatureInfoWithPredictFeatureModel:(id)arg1;
- (id)getSearchBusinessFeatureInfoWithPredictFeatureModel:(id)arg1;
- (id)getGameCenterBusinessFeatureInfoWithPredictFeatureModel:(id)arg1;
- (id)getBrowseBusinessFeatureInfoWithPredictFeatureModel:(id)arg1;
- (id)getNearbyBusinessFeatureInfoWithPredictFeatureModel:(id)arg1;
- (id)getSnsBusinessFeatureInfoWithCurrentRedDotPredictFeatureModel:(id)arg1;
- (id)getFinderBusinessFeatureInfoWithCurrentRedDotPredictFeatureModel:(id)arg1;
- (id)getLiveBusinessFeatureInfoWithCurrentRedDotPredictFeatureModel:(id)arg1;
- (id)getTingBusinessFeatureInfoWithCurrentRedDotPredictFeatureModel:(id)arg1;
- (id)getSearchBusinessFeatureInfoWithCurrentRedDotPredictFeatureModel:(id)arg1;
- (id)getGameCenterBusinessFeatureInfoWithCurrentRedDotPredictFeatureModel:(id)arg1;
- (id)getBrowseBusinessFeatureInfoWithCurrentRedDotPredictFeatureModel:(id)arg1;
- (id)getNearbyBusinessFeatureInfoWithCurrentRedDotPredictFeatureModel:(id)arg1;
- (id)getBusinessFeatureInfoByType:(int)arg1 predictFeatureModel:(id)arg2;
- (id)getBusinessFeatureInfoByTypeWithCurrentRedDot:(int)arg1 predictFeatureModel:(id)arg2;
- (id)genBusinessTotalInfo:(id)arg1;
- (id)genBackgroundWxCountInfo;
- (id)genForegroundWxCountInfo;
- (id)genFindPageClickCountByIntervalTypeInfo;
- (id)genFindPageExposeCountByIntervalTypeInfo;
- (id)genOpenWXCountIntervalTypeInfo;
- (id)genRecentClickSequenceListInfo;
- (id)genReportLabelFromAction:(int)arg1 businessType:(int)arg2;
- (id)filterForReportJson:(id)arg1;
- (id)_dispatchReportAction:(int)arg1 businessType:(int)arg2 report:(BOOL)arg3 predictFeatureModel:(id)arg4;
- (BOOL)shouldTriggerRedDotFeatureReport;
- (void)triggerFeatureReportAction:(int)arg1 businessType:(int)arg2 predictFeatureModel:(id)arg3;
- (id)get35092ReportInfoOnlyByAction:(int)arg1 predictFeatureModel:(id)arg2;
- (id)_dispatchReportActionWithCurrentRedDot:(int)arg1 businessType:(int)arg2 report:(BOOL)arg3 predictFeatureModel:(id)arg4;
- (id)get35092ReportInfoWithCurrentRedDotByAction:(int)arg1 predictFeatureModel:(id)arg2;
- (id)genFeatureDictionary;
- (id)genFeatureDictionaryWithPredictFeatureModel:(id)arg1;
- (void)addBusinessFeatures:(id)arg1 forType:(int)arg2 prefix:(id)arg3 predictFeatureModel:(id)arg4;
- (void)addActionCountFeatures:(id)arg1;
- (void)addBusinessTotalFeatures:(id)arg1 predictFeatureModel:(id)arg2;
- (double)getFreeDiskRate;
- (BOOL)isSequenceKey:(id)arg1;
- (id)genFeatureArray:(id)arg1;
- (id)genFeatureArrayInternal:(id)arg1 keepRedDotPath:(id)arg2 forbidAllRedDot:(BOOL)arg3;
- (id)genFeatureArrayInternal:(id)arg1 keepRedDotPath:(id)arg2 forbidAllRedDot:(BOOL)arg3 predictFeatureModel:(id)arg4;
- (id)genFeatureArrayInternal:(id)arg1 keepRedDotPathArray:(id)arg2 forbidAllRedDot:(BOOL)arg3;
- (id)genFeatureArrayInternal:(id)arg1 keepRedDotPathArray:(id)arg2 forbidAllRedDot:(BOOL)arg3 predictFeatureModel:(id)arg4;
- (id)mmkvKeyModel;
- (void)setMmkvKeyModel:(id)arg1;
- (id)cachedFeatureIndexArray;
- (void)setCachedFeatureIndexArray:(id)arg1;
- (id)cachedFeatureArray;
- (void)setCachedFeatureArray:(id)arg1;
- (double)lastFeatureGenTime;
- (void)setLastFeatureGenTime:(double)arg1;
- (id /* block */)clickFeatureStayUpdateBlock;
- (void)setClickFeatureStayUpdateBlock:(id /* block */)arg1;
- (BOOL)clickWithRedDot;
- (void)setClickWithRedDot:(BOOL)arg1;
- (id)findPageSessionId;
- (void)setFindPageSessionId:(id)arg1;
- (id)actionSequenceArray;
- (void)setActionSequenceArray:(id)arg1;
- (void)setContactLogic:(id)arg1;
- (void)setReddotInfoDic:(id)arg1;
- (void)setCurrentReddotInfoDic:(id)arg1;
- (id)keyCache;
- (void)setKeyCache:(id)arg1;
- (long long)findPageQuotaClickCount;
- (void)setFindPageQuotaClickCount:(long long)arg1;
- (id)cacheFeatureDictionary;
- (void)setCacheFeatureDictionary:(id)arg1;
- (long long)selfWxFriendCount;
- (void)setSelfWxFriendCount:(long long)arg1;
- (BOOL)hasUpdate;
- (void)setHasUpdate:(BOOL)arg1;
- (id)reddotExposeCountDic;
- (void)setReddotExposeCountDic:(id)arg1;
- (id)lastPeriodExposeIntervalDic;
- (void)setLastPeriodExposeIntervalDic:(id)arg1;
- (id)noneReddotExposeCountDic;
- (void)setNoneReddotExposeCountDic:(id)arg1;
- (id)noneReddotCtrValueDic;
- (void)setNoneReddotCtrValueDic:(id)arg1;
- (id)exposeReddotGapDic;
- (void)setExposeReddotGapDic:(id)arg1;
- (id)clickFindTabCountCacheContent;
- (void)setClickFindTabCountCacheContent:(id)arg1;
- (id)findTabExposeCountCacheContent;
- (void)setFindTabExposeCountCacheContent:(id)arg1;
- (id)userActionSequenceCacheContent;
- (void)setUserActionSequenceCacheContent:(id)arg1;
- (id)backWxCountCacheContent;
- (void)setBackWxCountCacheContent:(id)arg1;
- (id)foreWxCountCacheContent;
- (void)setForeWxCountCacheContent:(id)arg1;
- (long long)findPageQuotaClickCacheCount;
- (void)setFindPageQuotaClickCacheCount:(long long)arg1;
- (void).cxx_destruct;
@end
