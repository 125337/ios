@interface MagicAdCommonFeatureMMKV : NSObject
+ (id)mmkv;
+ (id)getAdsInfoWithAid:(id)arg1;
+ (void)setAdInfoWithAid:(id)arg1 adInfo:(id)arg2;
+ (void)removeAdInfoWithAid:(id)arg1;
+ (void)setExpireTimeWithPosId:(id)arg1 expireTime:(unsigned long long)arg2;
+ (unsigned long long)getExpiredTimeWithPosId:(id)arg1;
+ (void)setHasFeedbackCloseAdWithPosId:(id)arg1 value:(BOOL)arg2;
+ (BOOL)getHasFeedbackCloseAdWithPosId:(id)arg1;
+ (void)setAidwithPosId:(id)arg1 aid:(id)arg2;
+ (id)getAidWithPosId:(id)arg1;
+ (BOOL)hasAdCacheWithPosId:(id)arg1;
+ (void)cleanAllMagicAdData;
@end
