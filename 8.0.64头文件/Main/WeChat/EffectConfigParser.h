@interface EffectConfigParser : NSObject
{
    EffectConfigParser _effectConfigParser; // +0x8
    NSString * _configString; // +0xa8
    NSString * _identifier; // +0xb0
}
+ (BOOL)checkBpmIsVaild:(float)arg1;
- (id)init;
- (BOOL)setEffectType:(unsigned long long)arg1;
- (BOOL)loadConfigString:(id)arg1 withIdentifier:(id)arg2;
- (BOOL)canCreateEffectGraph;
- (BOOL)canCreateEffectChain;
- (unsigned long long)supportSliderCount;
- (float)sliderDefaultValue:(unsigned long long)arg1;
- (BOOL)supportBPM;
- (id)irWavNames;
- (id)sliderName:(unsigned long long)arg1;
- (id)configName;
- (id)configString;
- (void)setConfigString:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
