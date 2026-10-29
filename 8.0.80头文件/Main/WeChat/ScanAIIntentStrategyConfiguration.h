@interface ScanAIIntentStrategyConfiguration : NSObject
{
    long long _strategyVersion; // +0x8
    long long _mode; // +0x10
    NSSet * _enabledIntentTypes; // +0x18
    NSSet * _experimentCategoryAllowlist; // +0x20
}
+ (BOOL)areValidIntentTypes:(id)arg1;
- (id)initWithStrategyVersion:(long long)arg1 mode:(long long)arg2 enabledIntentTypes:(id)arg3;
- (id)initWithStrategyVersion:(long long)arg1 mode:(long long)arg2 enabledIntentTypes:(id)arg3 experimentCategoryAllowlist:(id)arg4;
- (long long)strategyVersion;
- (long long)mode;
- (id)enabledIntentTypes;
- (id)experimentCategoryAllowlist;
- (void).cxx_destruct;
@end
