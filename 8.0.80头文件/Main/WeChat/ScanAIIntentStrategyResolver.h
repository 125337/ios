@interface ScanAIIntentStrategyResolver : NSObject
+ (long long)currentStrategyVersion;
+ (id)enabledIntentTypesForStrategyVersion:(long long)arg1;
+ (id)configurationForMode:(long long)arg1 enabledIntentTypes:(id)arg2;
@end
