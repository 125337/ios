@interface TingExptConfigSettingsServiceCpp : NSObject
+ (void)setEnableSingleAudioAutoPlay:(BOOL)arg1;
+ (void)setEnablePrefetchCheckSpamAndGetLink:(BOOL)arg1;
+ (void)setEnableMusicVideoStartPlayOptimize:(BOOL)arg1;
+ (void)setDisableRedDotSyncItemReqFrequencyControl:(BOOL)arg1;
+ (void)setExptIdentification:(unsigned int)arg1;
+ (void)setEnableFeedIdListAllInOne:(BOOL)arg1;
+ (void)setAutoPauseConfig:(id)arg1;
+ (void)setErrRetryEnable:(unsigned int)arg1;
+ (void)setTSSentenceReadEnable:(BOOL)arg1;
+ (BOOL)getEnableFeedIdListAllInOne;
+ (BOOL)getEnableSqQuality;
+ (BOOL)getPlayQualitySettingEntryEnable;
+ (BOOL)getEnableLiveItemSupport;
@end

