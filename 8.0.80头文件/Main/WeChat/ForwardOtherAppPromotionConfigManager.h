@interface ForwardOtherAppPromotionConfigManager : NSObject
+ (id)promotionAppTypes;
+ (id)promotionConfigKeyWithAppType:(long long)arg1;
+ (void)updatePromotionConfigWithAppType:(long long)arg1;
+ (BOOL)isAppInstalledForAppType:(long long)arg1;
+ (BOOL)shouldUpdatePromotionConfigWithAppType:(long long)arg1;
+ (void)updateAllPromotionConfigsInternal;
+ (void)updateAllPromotionConfigs;
@end
