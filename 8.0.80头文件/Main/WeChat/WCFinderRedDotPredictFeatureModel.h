@interface WCFinderRedDotPredictFeatureModel : NSObject
{
    BOOL _todayIsHoliday; // +0x8
    BOOL _tomorrowIsHoliday; // +0x9
    BOOL _todayIsWeekend; // +0xa
    BOOL _tomorrowIsWeekend; // +0xb
    BOOL _todayIsLegalHolidays; // +0xc
    BOOL _tomorrowIsLegalHolidays; // +0xd
    BOOL _isOpenTeenagerMode; // +0xe
    BOOL _isDeviceCharging; // +0xf
    BOOL _isLowPowerMode; // +0x10
    BOOL _anchorSnapshotReady; // +0x11
    BOOL _todayIsHolidayInitialized; // +0x12
    BOOL _tomorrowIsHolidayInitialized; // +0x13
    BOOL _todayIsWeekendInitialized; // +0x14
    BOOL _tomorrowIsWeekendInitialized; // +0x15
    BOOL _todayIsLegalHolidaysInitialized; // +0x16
    BOOL _tomorrowIsLegalHolidaysInitialized; // +0x17
    BOOL _isOpenTeenagerModeInitialized; // +0x18
    BOOL _wxFriendCountInitialized; // +0x19
    BOOL _genderTypeInitialized; // +0x1a
    BOOL _cityLevelInitialized; // +0x1b
    BOOL _findPageBusinessCountInitialized; // +0x1c
    BOOL _findPageRedDotBusinessCountInitialized; // +0x1d
    BOOL _findPageEntryWithRedDotCountInitialized; // +0x1e
    BOOL _findPageEntryWithRedDotCountWithoutFrequencyLimitInitialized; // +0x1f
    BOOL _currentHourInitialized; // +0x20
    BOOL _weekdayNumberInitialized; // +0x21
    BOOL _batteryLevelInitialized; // +0x22
    BOOL _systemVolumeInitialized; // +0x23
    BOOL _screenBrightnessInitialized; // +0x24
    BOOL _isDeviceChargingInitialized; // +0x25
    BOOL _isLowPowerModeInitialized; // +0x26
    BOOL _netTypeInitialized; // +0x27
    BOOL _downloadSpeedInitialized; // +0x28
    BOOL _screenSizeInitialized; // +0x29
    float _batteryLevel; // +0x2c
    float _systemVolume; // +0x30
    float _screenBrightness; // +0x34
    int _netType; // +0x38
    long long _wxFriendCount; // +0x40
    long long _genderType; // +0x48
    long long _cityLevel; // +0x50
    long long _findPageBusinessCount; // +0x58
    long long _findPageRedDotBusinessCount; // +0x60
    long long _findPageEntryWithRedDotCount; // +0x68
    long long _findPageEntryWithRedDotCountWithoutFrequencyLimit; // +0x70
    NSString * _findPageSessionId; // +0x78
    long long _currentHour; // +0x80
    long long _weekdayNumber; // +0x88
    NSString * _findPageClickCountByIntervalType; // +0x90
    NSString * _findPageExposeCountByIntervalType; // +0x98
    NSString * _recentClickSequenceList; // +0xa0
    NSString * _backgroundWxCount; // +0xa8
    NSString * _foregroundWxCount; // +0xb0
    double _downloadSpeed; // +0xb8
    NSString * _deviceModel; // +0xc0
    NSString * _formattedTotalSpace; // +0xc8
    NSString * _formattedFreeSpace; // +0xd0
    NSString * _audioOutputPort; // +0xd8
    WCFinderRedDotCost * _costInfo; // +0xe0
    NSDictionary * _sharedFeatureDict; // +0xe8
    NSDictionary * _modelProbabilityDict; // +0xf0
    NSDictionary * _randomProbabilityDict; // +0xf8
    NSDictionary * _reddotInfoDicSnapshot; // +0x100
    NSDictionary * _currentReddotInfoDicSnapshot; // +0x108
    NSDictionary * _reddotExposeCountDicSnapshot; // +0x110
    NSDictionary * _lastPeriodExposeIntervalDicSnapshot; // +0x118
    NSDictionary * _noneReddotExposeCountDicSnapshot; // +0x120
    NSDictionary * _noneReddotCtrValueDicSnapshot; // +0x128
    NSDictionary * _exposeReddotGapDicSnapshot; // +0x130
    NSMutableDictionary * _businessFeatureInfoCache; // +0x138
    NSMutableDictionary * _currentRedDotBusinessFeatureInfoCache; // +0x140
    CGSize _screenSize; // +0x148
}
- (id)init;
- (id)sharedFeatureDict;
- (id)getBusinessFeatureInfo:(int)arg1;
- (id)getBusinessFeatureInfoWithCurrentRedDot:(int)arg1;
- (id)findPageClickCountByIntervalType;
- (id)findPageExposeCountByIntervalType;
- (id)recentClickSequenceList;
- (id)backgroundWxCount;
- (id)foregroundWxCount;
- (BOOL)todayIsHoliday;
- (BOOL)tomorrowIsHoliday;
- (BOOL)todayIsWeekend;
- (BOOL)tomorrowIsWeekend;
- (BOOL)todayIsLegalHolidays;
- (BOOL)tomorrowIsLegalHolidays;
- (BOOL)isOpenTeenagerMode;
- (long long)wxFriendCount;
- (long long)genderType;
- (long long)cityLevel;
- (long long)findPageBusinessCount;
- (long long)findPageRedDotBusinessCount;
- (long long)findPageEntryWithRedDotCount;
- (long long)findPageEntryWithRedDotCountWithoutFrequencyLimit;
- (id)findPageSessionId;
- (long long)currentHour;
- (long long)weekdayNumber;
- (float)batteryLevel;
- (float)systemVolume;
- (float)screenBrightness;
- (BOOL)isDeviceCharging;
- (BOOL)isLowPowerMode;
- (int)netType;
- (double)downloadSpeed;
- (id)deviceModel;
- (CGSize)screenSize;
- (id)formattedTotalSpace;
- (id)formattedFreeSpace;
- (id)audioOutputPort;
- (void)preloadDeviceFeatureAsync;
- (void)preloadUserFeatureAsync;
- (void)preloadDateFeatureAsync;
- (void)preloadFindPageFeatureAsync;
- (void)preloadFeatureAsync;
- (void)setTodayIsHoliday:(BOOL)arg1;
- (void)setTomorrowIsHoliday:(BOOL)arg1;
- (void)setTodayIsWeekend:(BOOL)arg1;
- (void)setTomorrowIsWeekend:(BOOL)arg1;
- (void)setTodayIsLegalHolidays:(BOOL)arg1;
- (void)setTomorrowIsLegalHolidays:(BOOL)arg1;
- (void)setIsOpenTeenagerMode:(BOOL)arg1;
- (void)setWxFriendCount:(long long)arg1;
- (void)setGenderType:(long long)arg1;
- (void)setCityLevel:(long long)arg1;
- (void)setFindPageBusinessCount:(long long)arg1;
- (void)setFindPageRedDotBusinessCount:(long long)arg1;
- (void)setFindPageEntryWithRedDotCount:(long long)arg1;
- (void)setFindPageEntryWithRedDotCountWithoutFrequencyLimit:(long long)arg1;
- (void)setFindPageSessionId:(id)arg1;
- (void)setCurrentHour:(long long)arg1;
- (void)setWeekdayNumber:(long long)arg1;
- (void)setFindPageClickCountByIntervalType:(id)arg1;
- (void)setFindPageExposeCountByIntervalType:(id)arg1;
- (void)setRecentClickSequenceList:(id)arg1;
- (void)setBackgroundWxCount:(id)arg1;
- (void)setForegroundWxCount:(id)arg1;
- (void)setBatteryLevel:(float)arg1;
- (void)setSystemVolume:(float)arg1;
- (void)setScreenBrightness:(float)arg1;
- (void)setIsDeviceCharging:(BOOL)arg1;
- (void)setIsLowPowerMode:(BOOL)arg1;
- (void)setNetType:(int)arg1;
- (void)setDownloadSpeed:(double)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setScreenSize:(CGSize)arg1;
- (void)setFormattedTotalSpace:(id)arg1;
- (void)setFormattedFreeSpace:(id)arg1;
- (void)setAudioOutputPort:(id)arg1;
- (id)costInfo;
- (void)setCostInfo:(id)arg1;
- (void)setSharedFeatureDict:(id)arg1;
- (id)modelProbabilityDict;
- (void)setModelProbabilityDict:(id)arg1;
- (id)randomProbabilityDict;
- (void)setRandomProbabilityDict:(id)arg1;
- (id)reddotInfoDicSnapshot;
- (void)setReddotInfoDicSnapshot:(id)arg1;
- (id)currentReddotInfoDicSnapshot;
- (void)setCurrentReddotInfoDicSnapshot:(id)arg1;
- (id)reddotExposeCountDicSnapshot;
- (void)setReddotExposeCountDicSnapshot:(id)arg1;
- (id)lastPeriodExposeIntervalDicSnapshot;
- (void)setLastPeriodExposeIntervalDicSnapshot:(id)arg1;
- (id)noneReddotExposeCountDicSnapshot;
- (void)setNoneReddotExposeCountDicSnapshot:(id)arg1;
- (id)noneReddotCtrValueDicSnapshot;
- (void)setNoneReddotCtrValueDicSnapshot:(id)arg1;
- (id)exposeReddotGapDicSnapshot;
- (void)setExposeReddotGapDicSnapshot:(id)arg1;
- (BOOL)anchorSnapshotReady;
- (void)setAnchorSnapshotReady:(BOOL)arg1;
- (id)businessFeatureInfoCache;
- (void)setBusinessFeatureInfoCache:(id)arg1;
- (id)currentRedDotBusinessFeatureInfoCache;
- (void)setCurrentRedDotBusinessFeatureInfoCache:(id)arg1;
- (BOOL)todayIsHolidayInitialized;
- (void)setTodayIsHolidayInitialized:(BOOL)arg1;
- (BOOL)tomorrowIsHolidayInitialized;
- (void)setTomorrowIsHolidayInitialized:(BOOL)arg1;
- (BOOL)todayIsWeekendInitialized;
- (void)setTodayIsWeekendInitialized:(BOOL)arg1;
- (BOOL)tomorrowIsWeekendInitialized;
- (void)setTomorrowIsWeekendInitialized:(BOOL)arg1;
- (BOOL)todayIsLegalHolidaysInitialized;
- (void)setTodayIsLegalHolidaysInitialized:(BOOL)arg1;
- (BOOL)tomorrowIsLegalHolidaysInitialized;
- (void)setTomorrowIsLegalHolidaysInitialized:(BOOL)arg1;
- (BOOL)isOpenTeenagerModeInitialized;
- (void)setIsOpenTeenagerModeInitialized:(BOOL)arg1;
- (BOOL)wxFriendCountInitialized;
- (void)setWxFriendCountInitialized:(BOOL)arg1;
- (BOOL)genderTypeInitialized;
- (void)setGenderTypeInitialized:(BOOL)arg1;
- (BOOL)cityLevelInitialized;
- (void)setCityLevelInitialized:(BOOL)arg1;
- (BOOL)findPageBusinessCountInitialized;
- (void)setFindPageBusinessCountInitialized:(BOOL)arg1;
- (BOOL)findPageRedDotBusinessCountInitialized;
- (void)setFindPageRedDotBusinessCountInitialized:(BOOL)arg1;
- (BOOL)findPageEntryWithRedDotCountInitialized;
- (void)setFindPageEntryWithRedDotCountInitialized:(BOOL)arg1;
- (BOOL)findPageEntryWithRedDotCountWithoutFrequencyLimitInitialized;
- (void)setFindPageEntryWithRedDotCountWithoutFrequencyLimitInitialized:(BOOL)arg1;
- (BOOL)currentHourInitialized;
- (void)setCurrentHourInitialized:(BOOL)arg1;
- (BOOL)weekdayNumberInitialized;
- (void)setWeekdayNumberInitialized:(BOOL)arg1;
- (BOOL)batteryLevelInitialized;
- (void)setBatteryLevelInitialized:(BOOL)arg1;
- (BOOL)systemVolumeInitialized;
- (void)setSystemVolumeInitialized:(BOOL)arg1;
- (BOOL)screenBrightnessInitialized;
- (void)setScreenBrightnessInitialized:(BOOL)arg1;
- (BOOL)isDeviceChargingInitialized;
- (void)setIsDeviceChargingInitialized:(BOOL)arg1;
- (BOOL)isLowPowerModeInitialized;
- (void)setIsLowPowerModeInitialized:(BOOL)arg1;
- (BOOL)netTypeInitialized;
- (void)setNetTypeInitialized:(BOOL)arg1;
- (BOOL)downloadSpeedInitialized;
- (void)setDownloadSpeedInitialized:(BOOL)arg1;
- (BOOL)screenSizeInitialized;
- (void)setScreenSizeInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
