@interface MMLiveEnergyRule : NSObject
{
    BOOL _forcesHit; // +0x8
    NSString * _ruleID; // +0x10
    MMLiveEnergyRuleConditions * _conditions; // +0x18
    MMLiveEnergyRuleAdjustments * _adjustments; // +0x20
}
+ (id)ruleFromDictionaryInfo:(id)arg1;
+ (id)_dictionary:(id)arg1 longLongNumberForKey:(id)arg2;
+ (id)_dictionary:(id)arg1 floatNumberForKey:(id)arg2;
+ (id)_dictionary:(id)arg1 numberArrayForKey:(id)arg2;
+ (BOOL)_array:(id)arg1 containsLongValue:(long long)arg2;
- (id)init;
- (BOOL)isValid;
- (id)generateDictionaryInfo;
- (BOOL)hitTestMetricsInfo:(id)arg1;
- (BOOL)shouldAdjustCameraCapture;
- (BOOL)shouldAdjustVideoEncode;
- (id)ruleID;
- (void)setRuleID:(id)arg1;
- (id)conditions;
- (BOOL)forcesHit;
- (void)setForcesHit:(BOOL)arg1;
- (id)adjustments;
- (void).cxx_destruct;
@end
