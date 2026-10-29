@interface MMLiveBeautyMaterialBasedDriverBase : MMLiveBeautyDriver
{
    long long _setupStatus; // +0x8
    long long _materialObjectId; // +0x10
}
- (void)apply;
- (void)setupForPositiveValue:(double)arg1;
- (void)setupForNegativeValue:(double)arg1;
- (void)teardown;
- (void)applyWithValue:(double)arg1 forObjectId:(long long)arg2 inEffectManager:(id)arg3;
- (long long)setupStatus;
- (void)setSetupStatus:(long long)arg1;
- (long long)materialObjectId;
- (void)setMaterialObjectId:(long long)arg1;
@end
