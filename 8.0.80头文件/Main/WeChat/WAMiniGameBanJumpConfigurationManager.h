@interface WAMiniGameBanJumpConfigurationManager : NSObject
+ (void)fetchBanJumpConfigurationWithAppId:(id)arg1;
+ (id)getBanJumpUrlListForAppId:(id)arg1;
+ (id)getBanJumpAppIdListForAppId:(id)arg1;
+ (BOOL)isUrl:(id)arg1 matchedByBanRules:(id)arg2;
+ (id)notSupportedPageUrl;
+ (void)pushNotSupportedPageWithNavigationController:(id)arg1;
+ (void)saveBanJumpUrlList:(id)arg1 forAppId:(id)arg2;
+ (void)saveBanJumpAppIdList:(id)arg1 forAppId:(id)arg2;
@end
