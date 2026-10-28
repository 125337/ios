@interface MMLiveSettingStorage : NSObject
+ (id)sharedLiveSettingData;
+ (void)clearSharedLiveSettingData;
+ (BOOL)syncSaveLiveSettingData;
+ (void)asyncSaveLiveSettingData;
+ (void)clearExpiredLiveGiftEffectSetting;
+ (void)clearLiveChooseClaritySetting;
@end
