@interface ScanAIIntentScenePolicyConfiguration : NSObject
{
    NSSet * _enabledIntentTypes; // +0x8
}
+ (id)allSupportedTypesConfiguration;
+ (BOOL)areValidIntentTypes:(id)arg1;
- (id)initWithEnabledIntentTypes:(id)arg1;
- (BOOL)isIntentTypeEnabled:(long long)arg1;
- (id)enabledIntentTypes;
- (void)setEnabledIntentTypes:(id)arg1;
- (void).cxx_destruct;
@end
