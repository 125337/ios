@interface WCFinderGlobalRedDotFeatureHelper : NSObject
{
    BOOL _clickWithRedDot; // +0x8
    WCFinderRedDotFeatureMMKV * _mmkvKeyModel; // +0x10
    NSArray * _cachedFeatureIndexArray; // +0x18
    NSArray * _cachedFeatureArray; // +0x20
    double _lastFeatureGenTime; // +0x28
    id /* block */ _clickFeatureStayUpdateBlock; // +0x30
    NSString * _findPageSessionId; // +0x38
    NSMutableArray * _actionSequenceArray; // +0x40
    ContactsDataLogic * _contactLogic; // +0x48
    NSMutableDictionary * _reddotInfoDic; // +0x50
    long long _findPageQuotaClickCount; // +0x58
    NSMutableDictionary * _cacheFeatureDictionary; // +0x60
    long long _selfWxFriendCount; // +0x68
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
+ (id)sharedFeatureReportQueue;
+ (id)businessTypeMappingBy:(int)arg1;
- (id)init;
- (void)restoreFeatureCreateTsByHistoryFeature;
- (id)reddotInfoDic;
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
- (void)markRedDotExposeState;
- (BOOL)todayIsWeekend;
- (BOOL)tomorrowIsWeekend;
- (BOOL)todayIsLegalHolidays;
- (BOOL)tomorrowIsLegalHolidays;
- (long long)hourValue;
- (void)markClickSequenceAction:(int)arg1;
- (id)getRecentClickSequenceList;
- (BOOL)targetBusinessIsOpen:(int)arg1;
- (long long)targetBusinessIndex:(int)arg1;
- (void)_mergeFeatureForModel:(id)arg1;
- (BOOL)targetBusinessEntryHasRedDotAsFindPageExpose:(int)arg1;
- (id)getBusinessRedDotCtrValueArrayListFromClickArray:(id)arg1 exposeArray:(id)arg2;
- (id)getBusinessRedDotExposeArrayListFromType:(int)arg1;
- (id)getClickWithRedDotArrayListFromType:(int)arg1;
- (id)getClickWithoutRedDotArrayListFromType:(int)arg1;
- (id)getSnsBusinessFeatureInfo;
- (id)getFinderBusinessFeatureInfo;
- (id)getLiveBusinessFeatureInfo;
- (id)getTingBusinessFeatureInfo;
- (id)getSearchBusinessFeatureInfo;
- (id)getGameCenterBusinessFeatureInfo;
- (id)getBrowseBusinessFeatureInfo;
- (id)getNearbyBusinessFeatureInfo;
- (id)genBackgroundWxCountInfo;
- (id)genForegroundWxCountInfo;
- (id)genFindPageClickCountByIntervalTypeInfo;
- (id)genFindPageExposeCountByIntervalTypeInfo;
- (id)genOpenWXCountIntervalTypeInfo;
- (id)genRecentClickSequenceListInfo;
- (id)genReportLabelFromAction:(int)arg1 businessType:(int)arg2;
- (id)filterForReportJson:(id)arg1;
- (void)_dispatchReportAction:(int)arg1 businessType:(int)arg2;
- (BOOL)shouldTriggerRedDotFeatureReport;
- (void)triggerFeatureReportAction:(int)arg1 businessType:(int)arg2;
- (id)genFeatureDictionary;
- (void)addBusinessFeatures:(id)arg1 forType:(int)arg2 prefix:(id)arg3;
- (void)addActionCountFeatures:(id)arg1;
- (long long)getIntervalIndex:(id)arg1;
- (double)getFreeDiskRate;
- (BOOL)isSequenceKey:(id)arg1;
- (id)genFeatureArray:(id)arg1;
- (id)genFeatureArrayInternal:(id)arg1 keepRedDotPath:(id)arg2 forbidAllRedDot:(BOOL)arg3;
- (id)genFeatureArrayInternal:(id)arg1 keepRedDotPathArray:(id)arg2 forbidAllRedDot:(BOOL)arg3;
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
- (long long)findPageQuotaClickCount;
- (void)setFindPageQuotaClickCount:(long long)arg1;
- (id)cacheFeatureDictionary;
- (void)setCacheFeatureDictionary:(id)arg1;
- (long long)selfWxFriendCount;
- (void)setSelfWxFriendCount:(long long)arg1;
- (void).cxx_destruct;
@end
